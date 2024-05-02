#pragma once

#include "Table.h"
#include <fstream>
#include <vector>
#include <unordered_map>

namespace repository
{
	struct ServiceData {
		ServiceData()
			: data_num(0)
			, auto_inc_key(0)
			, ind_is_correct(false)
		{}
		ServiceData(std::fstream& file) {
			file.seekg(0, std::ios::beg);

			file.read(reinterpret_cast<char*>(&data_num), sizeof(data_num));
			file.read(reinterpret_cast<char*>(&auto_inc_key), sizeof(auto_inc_key));
			file.read(reinterpret_cast<char*>(&ind_is_correct), sizeof(ind_is_correct));
		}

		long data_num;
		long auto_inc_key;
		bool ind_is_correct;

		static constexpr size_t service_data_size = sizeof(data_num) + sizeof(auto_inc_key) + sizeof(ind_is_correct);
		static constexpr size_t data_num_pos = 0;
		static constexpr size_t auto_inc_key_pos = sizeof(data_num);
		static constexpr size_t ind_is_correct_pos = sizeof(data_num) + sizeof(auto_inc_key);
	};

	class FacilityTypeRepository {
		void CreateTable(const std::string& connection_string);
		void Write(const FacilityType& data, long pos);

		std::fstream file;
		long auto_inc_key;
		std::unordered_map<long, long> ind;
	public:
		FacilityTypeRepository(const std::string& connection_string);

		FacilityType Get(long Id);
		void Delete(long Id);
		void Update(const FacilityType& data);
		void Insert(const FacilityType& data);
		std::vector<FacilityType> GetAll();
	};

	class PostalFacilityRepository {
		void CreateTable(const std::string& connection_string);
		void Write(const PostalFacility& data, long pos);

		std::fstream file;
		long auto_inc_key;
		std::unordered_map<long, long> ind;
	public:
		PostalFacilityRepository(const std::string& connection_string);

		PostalFacility Get(long Id);
		void Delete(long Id);
		void Update(const PostalFacility& data);
		void Insert(const PostalFacility& data);
		std::vector<PostalFacility> GetAll();
		std::vector<PostalFacility> GetByTypeId(long TypeId);
	};
};
