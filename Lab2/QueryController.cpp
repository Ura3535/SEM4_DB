#include "Lab2Form.h"

using namespace Lab2;
using namespace Generic;

Void Lab2Form::Query_ComboBoxChose_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
	Query_LabelError->Text = "";
	if (Query_ComboBoxChose->Text == "������� �����") {
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
		if(Query_ComboBoxChose->Text != "������� �����" && Query_ComboBoxChose->Text != "����� � ��������� ���������� 1")
			params->Add(KeyValuePair<String^, Object^>("@Value", Query_TextBoxValue->Text));
		DataTable^ table = gcnew DataTable();
		rep->GetAdapterByQuery(Query_TextBoxCode->Text, params)->Fill(table);
		Query_DataGridView->DataSource = table;
	}
	catch (FormatException^ exep) {
		if (Query_ComboBoxChose->Text == "������� �����")
			Query_LabelError->Text = "����������� SQL �����";
		else
			Query_LabelError->Text += "����������� ��������";
	}
}

Void Lab2Form::Query_Update()
{
	Query_ComboBoxChose->Items->Clear();
	Query_ComboBoxChose->Items->Add("������� �����");
	for(int i = 1; i != 6; ++i)
		Query_ComboBoxChose->Items->Add("���������������� ����� " + i.ToString());
	for (int i = 1; i != 4; ++i)
		Query_ComboBoxChose->Items->Add("����� � ��������� ���������� " + i.ToString());
	Query_ComboBoxChose->Text = "������� �����";
	Query_TextBoxAboutQuery->Text = "������ ������� SQL ����� � ��� ��������!";
	Query_TextBoxCode->Text = "";
	Query_LabelError->Text = "";
}
