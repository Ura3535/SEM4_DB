#include "Repository.h"
#include "filesystem"

using namespace repository;

void PostalFacilityRepository::CreateTable(const std::string& connection_string)
{
	std::ofstream new_table(connection_string, std::ios::binary);
	ServiceData default_serv_data;
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.data_num), sizeof(default_serv_data.data_num));
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.auto_inc_key), sizeof(default_serv_data.auto_inc_key));
	new_table.write(reinterpret_cast<const char*>(&default_serv_data.ind_is_correct), sizeof(default_serv_data.ind_is_correct));
}

void PostalFacilityRepository::Write(const PostalFacility& data, long pos)
{
	file.seekp(ServiceData::service_data_size + pos * PostalFacility::size, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data.Id), sizeof(data.Id));
	file.write(data.Name, sizeof(data.Name));
	file.write(reinterpret_cast<const char*>(&data.FacilityTypeId), sizeof(data.FacilityTypeId));
	file.write(data.Address, sizeof(data.Address));
	file.write(data.WorkSchedule, sizeof(data.WorkSchedule));
	file.write(reinterpret_cast<const char*>(&data.WeightRestrictions), sizeof(data.WeightRestrictions));
}

PostalFacilityRepository::PostalFacilityRepository(const std::string& connection_string = "..\\DataBase\\PostalFacility.fl")
{
	if (!std::filesystem::exists(connection_string))
		CreateTable(connection_string);
	file.open(connection_string, std::ios::in | std::ios::out | std::ios::binary);
	ServiceData serv_data;
	serv_data.load(file);

	if (serv_data.ind_is_correct) {
		std::ifstream index_table("..\\DataBase\\PostalFacility.ind");
		long key, val;

		for (int i = 0; i != serv_data.data_num; ++i) {
			index_table >> key >> val;
			ind[key] = val;
		}
	}
	else {
		//TODO: if index table file is corrupted
	}

	bool make_ind_bad = false;
	file.seekp(ServiceData::ind_is_correct_pos, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&make_ind_bad), sizeof(make_ind_bad));
}

repository::PostalFacilityRepository::~PostalFacilityRepository()
{
	std::ofstream index_table("..\\DataBase\\PostalFacility.ind", std::ios::in | std::ios::trunc);

	for (const auto& x : ind)
		index_table << x.first << x.second;

	ServiceData serv_data{ ind.size(), auto_inc_key, true };
	serv_data.save(file);

	//TODO: eraze end of file
}

PostalFacility PostalFacilityRepository::Get(long Id)
{
	PostalFacility obj;
	file.seekg(ServiceData::service_data_size + ind[Id] * PostalFacility::size, std::ios::beg);
	file.read(reinterpret_cast<char*>(&obj.Id), sizeof(obj.Id));
	file.read(obj.Name, sizeof(obj.Name));
	file.read(reinterpret_cast<char*>(&obj.FacilityTypeId), sizeof(obj.FacilityTypeId));
	file.read(obj.Address, sizeof(obj.Address));
	file.read(obj.WorkSchedule, sizeof(obj.WorkSchedule));
	file.read(reinterpret_cast<char*>(&obj.WeightRestrictions), sizeof(obj.WeightRestrictions));

	return obj;
}

void PostalFacilityRepository::Delete(long Id)
{
	long Id_of_last;
	file.seekg(ServiceData::service_data_size + (ind.size() - 1) * PostalFacility::size, std::ios::beg);
	file.read(reinterpret_cast<char*>(&Id_of_last), sizeof(Id_of_last));
	PostalFacility tmp = Get(Id_of_last);

	Write(tmp, ind[Id]);

	ind[tmp.Id] = ind[Id];
	ind.erase(Id);
}

void PostalFacilityRepository::Update(const PostalFacility& data)
{
	Write(data, ind[data.Id]);
}

void PostalFacilityRepository::Insert(const PostalFacility& data)
{
	PostalFacility data_with_Id(data);
	data_with_Id.Id = auto_inc_key++;

	Write(data_with_Id, ind.size());

	ind[data_with_Id.Id] = ind.size();
}

std::vector<PostalFacility> repository::PostalFacilityRepository::GetAll()
{
	std::vector<PostalFacility> vector(ind.size());
	file.seekg(ServiceData::service_data_size, std::ios::beg);
	int i = 0;
	for (const auto& x : ind) {
		vector[i++] = Get(x.second);
	}

	return vector;
}
