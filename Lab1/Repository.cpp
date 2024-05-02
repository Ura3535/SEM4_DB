#include "Repository.h"
#include "filesystem"

using namespace repository;
namespace fs = std::filesystem;

FacilityTypeRepository::FacilityTypeRepository(std::string connection_string = "..\\DataBase\\FacilityType.fl")
{
	if (!fs::exists(connection_string))
		CreateTable();
	file.open(connection_string, std::ios::in | std::ios::out | std::ios::binary);
	ServiceData serv_data(file);

	if (serv_data.ind_is_correct) {
		std::ifstream index_table("..\\DataBase\\FacilityType.ind");
		std::string key;
		long val;

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
