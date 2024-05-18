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
		
		virtual long Add(Table table, Entity^ obj);
		virtual Entity^ Get(Table table, long Id);
		virtual List<Entity^>^ GetAll(Table table);
		virtual void Update(Table table, Entity^ obj);
		virtual void Delete(Table table, long Id);
		virtual SqlDataAdapter^ GetTableAdapter(Table table);
	private:
		Entity^ ReadFromReader(Table table);
		List<long>^ GetIdByQuery();
		void AddCommandParameters(Table table, Entity^ obj);

		SqlConnectionStringBuilder^ builder;
		SqlConnection^ connection;
		String^ text;
		SqlCommand^ command;
		SqlDataReader^ reader;
	};

}
