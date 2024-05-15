#pragma once

#include "Model.h"

namespace Repository
{
	using namespace Models;

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
		long Add(Table table, Entity obj);
		Entity Get(Table table, long Id);
		void Update(Table table, Entity obj);
		void Delete(Table table, Entity obj);
#pragma endregion
	};

	ref class SQLRepository : IRepository
	{

	};

}
