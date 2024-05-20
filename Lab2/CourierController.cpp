#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::Co_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Courier^ tmp = gcnew Courier();
        tmp->Name = Co_TextBoxAddName->Text;
        tmp->City = Co_TextBoxAddCity->Text;
        tmp->ParcelId = Convert::ToInt64(Co_ComboBoxAddPaId->Text);
        rep->Add(Table::Couriers, tmp);
        Co_Update();
        Co_LabelAddError->Text = "";
    }
    catch (Exception^ exep) {
        Co_LabelAddError->Text = exep->Message;
    }
}

Void Lab2Form::Co_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Courier^ tmp = gcnew Courier();
        tmp->Id = Convert::ToInt64(Co_ComboBoxUPDELId->Text);
        tmp->Name = Co_TextBoxUPDELName->Text;
        tmp->City = Co_TextBoxUPDELCity->Text;
        tmp->ParcelId = Convert::ToInt64(Co_ComboBoxUPDELPaId->Text);
        rep->Update(Table::Couriers, tmp);
        Co_DataGridViewUpdate();
        Co_LabelUPDELError->Text = "";
    }
    catch (Exception^ exep) {
        Co_LabelUPDELError->Text = exep->Message;
    }
}

Void Lab2Form::Co_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Courier^ tmp = (Courier^)rep->Get(Table::Couriers, Convert::ToInt64(Co_ComboBoxUPDELId->Text));
        Co_TextBoxUPDELName->Text = tmp->Name;
        Co_TextBoxUPDELCity->Text = tmp->City;
        Co_ComboBoxUPDELPaId->Text = tmp->ParcelId.ToString();
    }
    catch (...) {}
}

Void Lab2Form::Co_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::Couriers, Convert::ToInt64(Co_ComboBoxUPDELId->Text));
        Co_Update();
    }
    catch (...) {}
}

Void Lab2Form::Co_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    Co_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::Co_Update()
{
    Co_ComboBoxUPDELId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::Couriers)) {
        Co_ComboBoxUPDELId->Items->Add(item->Id);
    }
    Co_DataGridViewUpdate();
}

Void Lab2Form::Co_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::Couriers)->Fill(table);
    Co_DataGridView->DataSource = table;
}
