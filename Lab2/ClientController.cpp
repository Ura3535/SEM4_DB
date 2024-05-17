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
    }
    catch (...) {}
}

Void Lab2Form::Cl_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    Cl_ButtonUPDELRollBack_Click(sender, e);
}
