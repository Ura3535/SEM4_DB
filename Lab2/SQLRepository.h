#pragma once

#include "Model.h"
#include "Repository.h"

namespace Repository
{
	using namespace Models;
	using namespace Data::SqlClient;
	using namespace System::Collections::Generic;

	ref class SQLRepository : IRepository
	{
	public:
		SQLRepository();
		
		virtual void Add(Table table, Entity^ obj);
		virtual Entity^ Get(Table table, long Id);
		virtual List<Entity^>^ GetAll(Table table);
		virtual void Update(Table table, Entity^ obj);
		virtual void Delete(Table table, long Id);
		virtual SqlDataAdapter^ GetTableAdapter(Table table);
		virtual SqlDataAdapter^ GetAdapterByQuery(String^ query, List<KeyValuePair<String^, Object^>>^ params);
	private:
		void Validate(Table table, Entity^ obj);
		void Execute(String^ query, List<KeyValuePair<String^, Object^>>^ params);
		Object^ ExecuteScalar(String^ query, List<KeyValuePair<String^, Object^>>^ params);
		SqlDataReader^ ExecuteReader(String^ query, List<KeyValuePair<String^, Object^>>^ params);
		Entity^ ReadFromReader(Table table, SqlDataReader^ reader);
		List<long>^ GetIdsByQuery(String^ query, List<KeyValuePair<String^, Object^>>^ params);
		List<KeyValuePair<String^, Object^>>^ GetCommandParameters(Table table, Entity^ obj, bool withId);

		SqlConnectionStringBuilder^ builder;
		SqlConnection^ connection;
		String^ text;
		SqlCommand^ command;
	};

}
