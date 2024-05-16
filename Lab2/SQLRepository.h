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
		long Add(Table table, Entity^ obj);
		Entity^ Get(Table table, long Id);
		void Update(Table table, Entity^ obj);
		void Delete(Table table, long Id);
		SqlDataAdapter^ GetTableAdapter(Table table);
	};

	ref class SQLRepository : IRepository
	{
	public:
		SQLRepository();
		
		virtual long Add(Table table, Entity^ obj);
		virtual Entity^ Get(Table table, long Id);
		virtual void Update(Table table, Entity^ obj);
		virtual void Delete(Table table, long Id);
		virtual SqlDataAdapter^ GetTableAdapter(Table table);
	private:
		void AddCommandParameters(Table table, Entity^ obj);

		SqlConnectionStringBuilder^ builder;
		SqlConnection^ connection;
		String^ text;
		SqlCommand^ command;
		SqlDataReader^ reader;
	};

}
