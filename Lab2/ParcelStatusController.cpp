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
    }
    catch (...) {}
}

Void Lab2Form::PS_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        ParcelStatus^ tmp = gcnew ParcelStatus();
        tmp->Id = Convert::ToInt64(PS_ComboBoxUPDELId->Text);
        tmp->Status = PS_TextBoxUPDELStatus->Text;
        rep->Update(Table::ParcelStatuses, tmp);
    }
    catch (...) {}
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
    }
    catch (...) {}
}

Void Lab2Form::PS_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    PS_ButtonUPDELRollBack_Click(sender, e);
}
