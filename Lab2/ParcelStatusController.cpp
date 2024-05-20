#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::PS_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        ParcelStatus^ tmp = gcnew ParcelStatus();
        tmp->Status = PS_TextBoxAddStatus->Text;
        rep->Add(Table::ParcelStatuses, tmp);
        PS_Update();
        PS_LabelAddError->Text = "";
    }
    catch (Exception^ exep) {
        PS_LabelAddError->Text = exep->Message;
    }
}

Void Lab2Form::PS_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        ParcelStatus^ tmp = gcnew ParcelStatus();
        tmp->Id = Convert::ToInt64(PS_ComboBoxUPDELId->Text);
        tmp->Status = PS_TextBoxUPDELStatus->Text;
        rep->Update(Table::ParcelStatuses, tmp);
        PS_DataGridViewUpdate();
        PS_LabelUPDELError->Text = "";
    }
    catch (Exception^ exep) {
        PS_LabelUPDELError->Text = exep->Message;
    }
}

Void Lab2Form::PS_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        ParcelStatus^ tmp = (ParcelStatus^)rep->Get(Table::ParcelStatuses, Convert::ToInt64(PS_ComboBoxUPDELId->Text));
        PS_TextBoxUPDELStatus->Text = tmp->Status;
    }
    catch (...) {}
}

Void Lab2Form::PS_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::ParcelStatuses, Convert::ToInt64(PS_ComboBoxUPDELId->Text));
        PS_Update();
        Pa_Update();
        Co_Update();
    }
    catch (...) {}
}

Void Lab2Form::PS_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    PS_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::PS_Update()
{
    PS_ComboBoxUPDELId->Items->Clear();
    Pa_ComboBoxAddPSId->Items->Clear();
    Pa_ComboBoxUPDELPSId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::ParcelStatuses)) {
        PS_ComboBoxUPDELId->Items->Add(item->Id);
        Pa_ComboBoxAddPSId->Items->Add(item->Id);
        Pa_ComboBoxUPDELPSId->Items->Add(item->Id);
    }
    PS_DataGridViewUpdate();
}

Void Lab2Form::PS_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::ParcelStatuses)->Fill(table);
    PS_DataGridView->DataSource = table;
}
