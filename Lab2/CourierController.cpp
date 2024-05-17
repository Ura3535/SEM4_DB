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
    }
    catch (...) {}
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
    }
    catch (...) {}
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
    }
    catch (...) {}
}

Void Lab2Form::Co_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    Co_ButtonUPDELDelete_Click(sender, e);
}
