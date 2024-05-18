#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::Cl_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Client^ tmp = gcnew Client();
        tmp->Name = Cl_TextBoxAddName->Text;
        tmp->ContactNumber = Cl_TextBoxAddContactNumber->Text;
        tmp->Email = Cl_TextBoxAddEmail->Text;
        rep->Add(Table::Clients, tmp);
        Cl_Update();
    }
    catch (...) {}
}

Void Lab2Form::Cl_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Client^ tmp = gcnew Client();
        tmp->Id = Convert::ToInt64(Cl_ComboBoxUPDELId->Text);
        tmp->Name = Cl_TextBoxUPDELName->Text;
        tmp->ContactNumber = Cl_TextBoxUPDELContactNumber->Text;
        tmp->Email = Cl_TextBoxUPDELEmail->Text;
        rep->Update(Table::Clients, tmp);
        Cl_DataGridViewUpdate();
    }
    catch (...) {}
}

Void Lab2Form::Cl_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Client^ tmp = (Client^)rep->Get(Table::Clients, Convert::ToInt64(Cl_ComboBoxUPDELId->Text));
        Cl_TextBoxUPDELName->Text = tmp->Name;
        Cl_TextBoxUPDELContactNumber->Text = tmp->ContactNumber;
        Cl_TextBoxUPDELEmail->Text = tmp->Email;
    }
    catch (...) {}
}

Void Lab2Form::Cl_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::Clients, Convert::ToInt64(Cl_ComboBoxUPDELId->Text));
        Cl_Update();
        Pa_Update();
        Co_Update();
    }
    catch (...) {}
}

Void Lab2Form::Cl_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    Cl_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::Cl_Update()
{
    Cl_ComboBoxUPDELId->Items->Clear();
    Pa_ComboBoxAddSenId->Items->Clear();
    Pa_ComboBoxUPDELSenId->Items->Clear();
    Pa_ComboBoxAddRecId->Items->Clear();
    Pa_ComboBoxUPDELRecId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::Clients)) {
        Cl_ComboBoxUPDELId->Items->Add(item->Id);
        Pa_ComboBoxAddSenId->Items->Add(item->Id);
        Pa_ComboBoxUPDELSenId->Items->Add(item->Id);
        Pa_ComboBoxAddRecId->Items->Add(item->Id);
        Pa_ComboBoxUPDELRecId->Items->Add(item->Id);
    }
    Cl_DataGridViewUpdate();
}

Void Lab2Form::Cl_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::Clients)->Fill(table);
    Cl_DataGridView->DataSource = table;
}
