#include "Repository.h"
#include "filesystem"

using namespace repository;

void FacilityTypeRepository::CreateTable(const std::string& connection_string)
{
	std::ofstream new_table(connection_string, std::ios::binary);
	ServiceData default_serv_data;
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.data_num), sizeof(default_serv_data.data_num));
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.auto_inc_key), sizeof(default_serv_data.auto_inc_key));
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.ind_is_correct), sizeof(default_serv_data.ind_is_correct));
}

void FacilityTypeRepository::Write(const FacilityType& data, long pos)
{
	file.seekp(ServiceData::service_data_size + pos * FacilityType::size, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data.Id), sizeof(data.Id));
	file.write(data.Type, sizeof(data.Type));
}

FacilityTypeRepository::FacilityTypeRepository(const std::string& connection_string = "..\\DataBase\\FacilityType.fl")
{
	if (!std::filesystem::exists(connection_string))
		CreateTable(connection_string);
	file.open(connection_string, std::ios::in | std::ios::out | std::ios::binary);
	ServiceData serv_data(file);

	if (serv_data.ind_is_correct) {
		std::ifstream index_table("..\\DataBase\\FacilityType.ind");
		long key, val;

		for (int i = 0; i != serv_data.data_num; ++i) {
			index_table >> key >> val;
			ind[key] = val;
		}
	}
	else {
		//TODO
	}

	bool make_ind_bad = false;
	file.seekp(ServiceData::ind_is_correct_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&make_ind_bad), sizeof(make_ind_bad));
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
	long Id_of_last;
	file.seekg(ServiceData::service_data_size + (ind.size() - 1) * FacilityType::size, std::ios::beg);
	file.read(reinterpret_cast<char*>(&Id_of_last), sizeof(Id_of_last));
	FacilityType tmp = Get(Id_of_last);

	Write(tmp, ind[Id]);

	ind[tmp.Id] = ind[Id];
	ind.erase(Id);
}

void FacilityTypeRepository::Update(const FacilityType& data)
{
	Write(data, ind[data.Id]);
}

void FacilityTypeRepository::Insert(const FacilityType& data)
{
	FacilityType data_with_Id(data);
	data_with_Id.Id = auto_inc_key++;

	Write(data_with_Id, ind.size());

	ind[data_with_Id.Id] = ind.size();
}

std::vector<FacilityType> FacilityTypeRepository::GetAll()
{
	std::vector<FacilityType> vector(ind.size());
	file.seekg(ServiceData::service_data_size, std::ios::beg);
	int i = 0;
	for (const auto& x : ind) {
		vector[i++] = Get(x.second);
	}

	return vector;
}