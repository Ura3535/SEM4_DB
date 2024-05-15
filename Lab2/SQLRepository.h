#pragma once

#include "Model.h"

namespace Repository
{
	using namespace Models;
	using namespace Data::SqlClient;
	enum class Table
	{
		Clients,
		Couriers,
		FacilityTypes,
		Parcels,
		ParcelStatuses,
		PostalFacilitys
	};

	public interface class IRepository
	{
#pragma region CRUD
		long Add(Table table, Entity^ obj);
		Entity^ Get(Table table, long Id);
		void Update(Table table, Entity^ obj);
		void Delete(Table table, long Id);
#pragma endregion
	};

	ref class SQLRepository : IRepository
	{
	public:
		SQLRepository();
		
#pragma region CRUD
		virtual long Add(Table table, Entity^ obj);
		virtual Entity^ Get(Table table, long Id);
		virtual void Update(Table table, Entity^ obj);
		virtual void Delete(Table table, long Id);
#pragma endregion
	private:
		void AddCommandParameters(Table table, Entity^ obj);

		SqlConnectionStringBuilder^ builder;
		SqlConnection^ connection;
		String^ text;
		SqlCommand^ command;
		SqlDataReader^ reader;
	};

}
