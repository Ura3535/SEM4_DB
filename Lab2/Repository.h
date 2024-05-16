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
}
