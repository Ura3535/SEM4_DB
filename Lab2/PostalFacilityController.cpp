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
        PF_Update();
        PF_LabelAddError->Text = "";
    }
    catch (Exception^ exep) {
        PF_LabelAddError->Text = exep->Message;
    }
}

Void Lab2Form::PF_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try {
        PostalFacility^ tmp = gcnew PostalFacility();
        tmp->Id = Convert::ToInt64(PF_ComboBoxUPDELId->Text);
        tmp->Name = PF_TextBoxUPDELName->Text;
        tmp->FacilityTypeId = Convert::ToInt64(PF_ComboBoxUPDELFTId->Text);
        tmp->Address = PF_TextBoxUPDELAddress->Text;
        tmp->WorkSchedule = PF_TextBoxUPDELWorkSchedule->Text;
        tmp->WeightRestrictions = Convert::ToDouble(PF_TextBoxUPDELWeightRestrictions->Text);
        rep->Update(Table::PostalFacilitys, tmp);
        PF_DataGridViewUpdate();
        PF_LabelUPDELError->Text = "";
    }
    catch (Exception^ exep) {
        PF_LabelUPDELError->Text = exep->Message;
    }
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
        PF_Update();
        Pa_Update();
        Co_Update();
    }
    catch (...) {}
}

Void Lab2Form::PF_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    PF_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::PF_Update()
{
    PF_ComboBoxUPDELId->Items->Clear();
    Pa_ComboBoxAddDepId->Items->Clear();
    Pa_ComboBoxUPDELDepId->Items->Clear();
    Pa_ComboBoxAddDelId->Items->Clear();
    Pa_ComboBoxUPDELDelId->Items->Clear();
    Pa_ComboBoxAddCurId->Items->Clear();
    Pa_ComboBoxUPDELCurId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::PostalFacilitys)) {
        PF_ComboBoxUPDELId->Items->Add(item->Id);
        Pa_ComboBoxAddDepId->Items->Add(item->Id);
        Pa_ComboBoxUPDELDepId->Items->Add(item->Id);
        Pa_ComboBoxAddDelId->Items->Add(item->Id);
        Pa_ComboBoxUPDELDelId->Items->Add(item->Id);
        Pa_ComboBoxAddCurId->Items->Add(item->Id);
        Pa_ComboBoxUPDELCurId->Items->Add(item->Id);
    }
    PF_DataGridViewUpdate();
}

Void Lab2Form::PF_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::PostalFacilitys)->Fill(table);
    PF_DataGridView->DataSource = table;
}
