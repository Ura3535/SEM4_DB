#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::FT_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = gcnew FacilityType();
        tmp->Type = FT_TextBoxAddType->Text;
        rep->Add(Table::FacilityTypes, tmp);
    }
    catch (...) {}
}

Void Lab2Form::FT_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = gcnew FacilityType();
        tmp->Id = Convert::ToInt64(FT_ComboBoxUPDELId->Text);
        tmp->Type = FT_TextBoxUPDELType->Text;
        rep->Update(Table::FacilityTypes, tmp);
    }
    catch (...) {}
}

Void Lab2Form::FT_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = (FacilityType^)rep->Get(Table::FacilityTypes, Convert::ToInt64(FT_ComboBoxUPDELId->Text));
        FT_TextBoxAddType->Text = tmp->Type;
    }
    catch (...) {}
}

Void Lab2Form::FT_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::FacilityTypes, Convert::ToInt64(FT_ComboBoxUPDELId->Text));
    }
    catch (...) {}
}

Void Lab2Form::FT_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    FT_ButtonUPDELRollBack_Click(sender, e);
}
