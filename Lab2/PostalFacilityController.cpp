#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::PF_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        PostalFacility^ tmp = gcnew PostalFacility();
        tmp->Name = PF_TextBoxAddName->Text;
        tmp->FacilityTypeId = Convert::ToInt64(PF_ComboBoxAddFTId->Text);
        tmp->Address = PF_TextBoxAddAddress->Text;
        tmp->WorkSchedule = PF_TextBoxAddWorkSchedule->Text;
        tmp->WeightRestrictions = Convert::ToDouble(PF_TextBoxAddWeightRestrictions->Text);
        rep->Add(Table::PostalFacilitys, tmp);
    }
    catch (...) {}
}

Void Lab2Form::PF_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        PostalFacility^ tmp = gcnew PostalFacility();
        tmp->Id = Convert::ToInt64(PF_ComboBoxUPDELId->Text);
        tmp->Name = PF_TextBoxUPDELName->Text;
        tmp->FacilityTypeId = Convert::ToInt64(PF_ComboBoxUPDELFTId->Text);
        tmp->Address = PF_TextBoxUPDELAddress->Text;
        tmp->WorkSchedule = PF_TextBoxUPDELWorkSchedule->Text;
        tmp->WeightRestrictions = Convert::ToDouble(PF_TextBoxUPDELWeightRestrictions->Text);
        rep->Update(Table::PostalFacilitys, tmp);
    }
    catch (...) {}
}

Void Lab2Form::PF_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        PostalFacility^ tmp = (PostalFacility^)rep->Get(Table::PostalFacilitys, Convert::ToInt64(PF_ComboBoxUPDELId->Text));
        PF_TextBoxUPDELName->Text = tmp->Name;
        PF_ComboBoxUPDELFTId->Text = tmp->FacilityTypeId.ToString();
        PF_TextBoxUPDELAddress->Text = tmp->Address;
        PF_TextBoxUPDELWorkSchedule->Text = tmp->WorkSchedule;
        PF_TextBoxUPDELWeightRestrictions->Text = tmp->WeightRestrictions.ToString();
    }
    catch (...) {}
}

Void Lab2Form::PF_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::PostalFacilitys, Convert::ToInt64(PF_ComboBoxUPDELId->Text));
    }
    catch (...) {}
}

Void Lab2::Lab2Form::PF_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    PF_ButtonUPDELRollBack_Click(sender, e);
}
