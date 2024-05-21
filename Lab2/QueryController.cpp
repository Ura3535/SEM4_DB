#include "Lab2Form.h"

using namespace Lab2;
using namespace Generic;

Void Lab2Form::Query_ComboBoxChose_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
	Query_LabelError->Text = "";
	if (Query_ComboBoxChose->Text == "Власний запит") {
		Query_TextBoxAboutQuery->Text = "";
		Query_TextBoxCode->Text = "";
		return;
	}
	Resources::ResXResourceReader^ reader = gcnew Resources::ResXResourceReader("Query.resx");
	for each (DictionaryEntry ^ query in reader) {
		if (query->Key->ToString() == (Query_ComboBoxChose->Text + "About"))
			Query_TextBoxAboutQuery->Text = (String^)query->Value;
		if (query->Key->ToString() == (Query_ComboBoxChose->Text + "Code"))
			Query_TextBoxCode->Text = (String^)query->Value;
	}
}

Void Lab2Form::Query_ButtonComplete_Click(Object^ sender, EventArgs^ e)
{
	try {
		List<KeyValuePair<String^, Object^>>^ params = gcnew List<KeyValuePair<String^, Object^>>;
		if(Query_ComboBoxChose->Text != "Власний запит" && Query_ComboBoxChose->Text != "Запит з множинним порівнянням 1")
			params->Add(KeyValuePair<String^, Object^>("@Value", Query_TextBoxValue->Text));
		DataTable^ table = gcnew DataTable();
		rep->GetAdapterByQuery(Query_TextBoxCode->Text, params)->Fill(table);
		Query_DataGridView->DataSource = table;
	}
	catch (FormatException^ exep) {
		if (Query_ComboBoxChose->Text == "Власний запит")
			Query_LabelError->Text = "Некоректний SQL запит";
		else
			Query_LabelError->Text += "Некоректний параметр";
	}
}

Void Lab2Form::Query_Update()
{
	Query_ComboBoxChose->Items->Clear();
	Query_ComboBoxChose->Items->Add("Власний запит");
	for(int i = 1; i != 6; ++i)
		Query_ComboBoxChose->Items->Add("Параметризований запит " + i.ToString());
	for (int i = 1; i != 4; ++i)
		Query_ComboBoxChose->Items->Add("Запит з множинним порівнянням " + i.ToString());
	Query_ComboBoxChose->Text = "Власний запит";
	Query_TextBoxAboutQuery->Text = "Введіть власний SQL запит у полі праворуч!";
	Query_TextBoxCode->Text = "";
	Query_LabelError->Text = "";
}
