#include "Repository.h"
#include "filesystem"

using namespace repository;

void FacilityTypeRepository::CreateTable(const fs::path& FileFL)
{
	std::fstream new_table(FileFL, std::ios::out | std::ios::binary);
	ServiceData default_serv_data;
	default_serv_data.save(new_table);
}

void FacilityTypeRepository::Write(const FacilityType& data, long pos)
{
	file.seekp(ServiceData::service_data_size + pos * FacilityType::size, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data.Id), sizeof(data.Id));
	file.write(data.Type, sizeof(data.Type));
}

FacilityTypeRepository::FacilityTypeRepository(const fs::path& DBFolder)
	: DBFolder(DBFolder)
{
	fs::path FileFL = DBFolder / "FacilityType.fl";
	fs::path FileIND = DBFolder / "FacilityType.ind";

	if (!std::filesystem::exists(FileFL))
		CreateTable(FileFL);
	file.open(FileFL, std::ios::in | std::ios::out | std::ios::binary);

	ServiceData serv_data;
	serv_data.load(file);
	auto_inc_key = serv_data.auto_inc_key;

	if (serv_data.ind_is_correct) {
		std::ifstream index(FileIND);
		long key, val;

		for (int i = 0; i != serv_data.data_num; ++i) {
			index >> key >> val;
			ind[key] = val;
		}
	}
	else {
		long Id;
		for (int i = 0; i != serv_data.data_num; ++i) {
			file.seekg(ServiceData::service_data_size + i * FacilityType::size, std::ios::beg);
			file.read(reinterpret_cast<char*>(&Id), sizeof(Id));
			ind[Id] = i;
		}
	}

	bool make_ind_bad = false;
	file.seekp(ServiceData::ind_is_correct_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&make_ind_bad), sizeof(make_ind_bad));
}

FacilityTypeRepository::~FacilityTypeRepository()
{
	std::ofstream index(DBFolder / "FacilityType.ind", std::ios::out | std::ios::trunc);
	for (const auto& x : ind)
		index << x.first << ' ' <<  x.second << '\n';

	ServiceData serv_data{ ind.size(), auto_inc_key, true };
	serv_data.save(file);

	//TODO: eraze end of file
}

FacilityType FacilityTypeRepository::Get(long Id)
{
	FacilityType obj;
	file.seekg(ServiceData::service_data_size + ind[Id] * FacilityType::size, std::ios::beg);
	file.read(reinterpret_cast<char*>(&obj.Id), sizeof(obj.Id));
	file.read(obj.Type, sizeof(obj.Type));

	return obj;
}

void FacilityTypeRepository::Delete(long Id)
{
	for (const auto& x : postalFacilityRep->GetByTypeId(Id))
		postalFacilityRep->Delete(x.Id);

	long Id_of_last;
	file.seekg(ServiceData::service_data_size + (ind.size() - 1) * FacilityType::size, std::ios::beg);
	file.read(reinterpret_cast<char*>(&Id_of_last), sizeof(Id_of_last));
	FacilityType tmp = Get(Id_of_last);

	Write(tmp, ind[Id]);

	ind[tmp.Id] = ind[Id];
	ind.erase(Id);

	size_t data_num = ind.size();
	file.seekp(ServiceData::data_num_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data_num), sizeof(data_num));
}

void FacilityTypeRepository::Update(const FacilityType& data)
{
	Write(data, ind[data.Id]);
}

void FacilityTypeRepository::Insert(const FacilityType& data)
{
	FacilityType data_with_Id(data);
	data_with_Id.Id = auto_inc_key++;

	Write(data_with_Id, (long)ind.size());

	ind[data_with_Id.Id] = (long)ind.size();


	size_t data_num = ind.size();
	file.seekp(ServiceData::data_num_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data_num), sizeof(data_num));
	file.seekp(ServiceData::auto_inc_key_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&auto_inc_key), sizeof(auto_inc_key));
}

std::vector<FacilityType> FacilityTypeRepository::GetAll()
{
	std::vector<FacilityType> vector(ind.size());
	file.seekg(ServiceData::service_data_size, std::ios::beg);
	int i = 0;
	for (const auto& x : ind) {
		vector[i++] = Get(x.first);
	}

	return vector;
}