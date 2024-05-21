#pragma once

#include "Model.h"

namespace Repository
{
	using namespace Models;
	using namespace Data::SqlClient;
	using namespace System::Collections::Generic;

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
	public:
		void Add(Table table, Entity^ obj);
		Entity^ Get(Table table, long Id);
		List<Entity^>^ GetAll(Table table);
		void Update(Table table, Entity^ obj);
		void Delete(Table table, long Id);
		SqlDataAdapter^ GetTableAdapter(Table table);
		SqlDataAdapter^ GetAdapterByQuery(String^ query, List<KeyValuePair<String^, Object^>>^ params);
	};
}
