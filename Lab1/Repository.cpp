#include "Repository.h"

using namespace repository;

ServiceData::ServiceData(size_t data_num, long auto_inc_key, bool ind_is_correct)
	: data_num(data_num)
	, auto_inc_key(auto_inc_key)
	, ind_is_correct(ind_is_correct)
{}

void repository::ServiceData::load(std::fstream& file)
{
	file.seekg(0, std::ios::beg);
	file.read(reinterpret_cast<char*>(&data_num), sizeof(data_num));
	file.read(reinterpret_cast<char*>(&auto_inc_key), sizeof(auto_inc_key));
	file.read(reinterpret_cast<char*>(&ind_is_correct), sizeof(ind_is_correct));
}

void repository::ServiceData::save(std::fstream& file) const
{
	file.seekp(0, std::ios::beg);
	file.write(reinterpret_cast<const char*>(&data_num), sizeof(data_num));
	file.write(reinterpret_cast<const char*>(&auto_inc_key), sizeof(auto_inc_key));
	file.write(reinterpret_cast<const char*>(&ind_is_correct), sizeof(ind_is_correct));
}

repository::Repository::Repository(const fs::path& DBFolder)
	: facilityType(DBFolder)
	, postalFacility(DBFolder)
{
	facilityType.postalFacilityRep = &postalFacility;
}
