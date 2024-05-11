#pragma once

#include "Table.h"
#include <fstream>
#include <vector>
#include <unordered_map>
#include <filesystem>

namespace fs = std::filesystem;

namespace repository
{
	struct ServiceData {
		ServiceData(size_t data_num = 0, long auto_inc_key = 0, bool ind_is_correct = false);
		void load(std::fstream& file);
		void save(std::fstream& file) const;

		size_t data_num;
		long auto_inc_key;
		bool ind_is_correct;

		static constexpr size_t service_data_size = sizeof(data_num) + sizeof(auto_inc_key) + sizeof(ind_is_correct);
		static constexpr size_t data_num_pos = 0;
		static constexpr size_t auto_inc_key_pos = sizeof(data_num);
		static constexpr size_t ind_is_correct_pos = sizeof(data_num) + sizeof(auto_inc_key);
	};

	class FacilityTypeRepository {
		void CreateTable(const fs::path& FileFL);
		void Write(const FacilityType& data, long pos);

		fs::path DBFolder;
		std::fstream file;
		long auto_inc_key;
		std::unordered_map<long, long> ind;

		friend class Repository;
		PostalFacilityRepository* postalFacilityRep;
	public:
		FacilityTypeRepository(const fs::path& DBFolder);
		~FacilityTypeRepository();

		FacilityType Get(long Id);
		void Delete(long Id);
		void Update(const FacilityType& data);
		void Insert(const FacilityType& data);
		std::vector<FacilityType> GetAll();
	};

	class PostalFacilityRepository {
		void CreateTable(const fs::path& FileFL);
		void Write(const PostalFacility& data, long pos);

		fs::path DBFolder;
		std::fstream file;
		long auto_inc_key;
		std::unordered_map<long, long> ind;

		friend class Repository;
	public:
		PostalFacilityRepository(const fs::path& DBFolder);
		~PostalFacilityRepository();

		PostalFacility Get(long Id);
		void Delete(long Id);
		void Update(const PostalFacility& data);
		void Insert(const PostalFacility& data);
		std::vector<PostalFacility> GetAll();
		std::vector<PostalFacility> GetByTypeId(long FacilityTypeId);
	};

	struct Repository
	{
		Repository(const fs::path& DBFolder = "DataBase");

		FacilityTypeRepository facilityType;
		PostalFacilityRepository postalFacility;
	};
};
