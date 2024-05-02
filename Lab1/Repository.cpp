#include "Repository.h"

using namespace repository;

ServiceData::ServiceData()
	: data_num(0)
	, auto_inc_key(0)
	, ind_is_correct(false)
{}

ServiceData::ServiceData(std::fstream & file) {
	file.seekg(0, std::ios::beg);

	file.read(reinterpret_cast<char*>(&data_num), sizeof(data_num));
	file.read(reinterpret_cast<char*>(&auto_inc_key), sizeof(auto_inc_key));
	file.read(reinterpret_cast<char*>(&ind_is_correct), sizeof(ind_is_correct));
}
