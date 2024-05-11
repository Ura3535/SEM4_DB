#include "MyForm.h"
#include <vcclr.h>

using namespace System::Runtime::InteropServices;
using namespace Lab1;

void Lab1::MyForm::FT_UPDDataGridView()
{
    FT_DataGridView->Rows->Clear();
    for (const auto& x : rep::rep.facilityType.GetAll()) {
        array<String^>^ row = { x.Id.ToString(), gcnew String(x.Type) };
        FT_DataGridView->Rows->Add(row);
    }
}

void Lab1::MyForm::FT_UPDComboBoxId()
{
    FT_ComboBoxUPDELId->Items->Clear();
    for (const auto& x : rep::rep.facilityType.GetAll())
        FT_ComboBoxUPDELId->Items->Add(x.Id.ToString());
}

void Lab1::MyForm::PF_UPDDataGridView()
{
    PF_DataGridView->Rows->Clear();
    for (const auto& x : rep::rep.postalFacility.GetAll()) {
        array<String^>^ row = {
            x.Id.ToString(), gcnew String(x.Name), 
            x.FacilityTypeId.ToString(), gcnew String(x.Address), 
            gcnew String(x.WorkSchedule), x.WeightRestrictions.ToString()
        };
        PF_DataGridView->Rows->Add(row);
    }
}

void Lab1::MyForm::PF_UPDComboBoxId()
{
    PF_ComboBoxUPDELId->Items->Clear();
    for (const auto& x : rep::rep.postalFacility.GetAll())
        PF_ComboBoxUPDELId->Items->Add(x.Id.ToString());
}

void Lab1::MyForm::PF_UPDComboBoxFTId()
{
    PF_ComboBoxUPDELId->Items->Clear();
    PF_ComboBoxAddFTId->Items->Clear();
    for (const auto& x : rep::rep.facilityType.GetAll()) {
        PF_ComboBoxUPDELFTId->Items->Add(x.Id.ToString());
        PF_ComboBoxAddFTId->Items->Add(x.Id.ToString());
    }
}

Void MyForm::FT_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* type = (char*)(void*)Marshal::StringToHGlobalAnsi(FT_TextBoxAddType->Text);
    if (strlen(type) < 50) {
        FacilityType tmp;
        strcpy_s(tmp.Type, type);
        rep::rep.facilityType.Insert(tmp);

        FT_UPDDataGridView();
        FT_UPDComboBoxId();
        PF_UPDComboBoxFTId();
    }
}

Void MyForm::FT_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    char* type = (char*)(void*)Marshal::StringToHGlobalAnsi(FT_TextBoxUPDELType->Text);
    if (strlen(type) < 50) {
        FacilityType tmp;
        tmp.Id = Id;
        strcpy_s(tmp.Type, type);
        rep::rep.facilityType.Update(tmp);

        FT_UPDDataGridView();
    }
}

Void MyForm::FT_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    FT_TextBoxUPDELType->Text = gcnew String(rep::rep.facilityType.Get(Id).Type);
}

Void MyForm::FT_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    FT_ComboBoxUPDELId->Text = "";
    FT_TextBoxUPDELType->Text = "";

    rep::rep.facilityType.Delete(Id);

    FT_UPDDataGridView();
    FT_UPDComboBoxId();
    PF_UPDDataGridView();
    PF_UPDComboBoxId();
    PF_UPDComboBoxFTId();
}

Void Lab1::MyForm::FT_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    FT_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab1::MyForm::PF_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxAddName->Text);
    long facilityTypeId = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(PF_ComboBoxAddFTId->Text));
    char* address = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxAddAddress->Text);
    char* workSchedule = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxAddWorkSchedule->Text);
    float weightRestrictions = std::stof((char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxAddWeightRestrictions->Text));

    if (name != "" && address != "" && workSchedule != "" && strlen(name) < 50 && strlen(address) < 50 && strlen(workSchedule) < 100 && weightRestrictions >= 0) {
        PostalFacility tmp;
        strcpy_s(tmp.Name, name);
        tmp.FacilityTypeId = facilityTypeId;
        strcpy_s(tmp.Address, address);
        strcpy_s(tmp.WorkSchedule, workSchedule);
        tmp.WeightRestrictions = weightRestrictions;
        rep::rep.postalFacility.Insert(tmp);

        PF_UPDDataGridView();
        PF_UPDComboBoxId();
    }
}

Void Lab1::MyForm::PF_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELId->Text));
    char* name = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELName->Text);
    long facilityTypeId = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELFTId->Text));
    char* address = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELAddress->Text);
    char* workSchedule = (char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELWorkSchedule->Text);
    float weightRestrictions = std::stof((char*)(void*)Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELWeightRestrictions->Text));

    if (name != "" && address != "" && workSchedule != "" && strlen(name) < 50 && strlen(address) < 50 && strlen(workSchedule) && weightRestrictions >= 0) {
        PostalFacility tmp;
        tmp.Id = Id;
        strcpy_s(tmp.Name, name);
        tmp.FacilityTypeId = facilityTypeId;
        strcpy_s(tmp.Address, address);
        strcpy_s(tmp.WorkSchedule, workSchedule);
        tmp.WeightRestrictions = weightRestrictions;
        rep::rep.postalFacility.Update(tmp);

        PF_UPDDataGridView();
    }
}

Void Lab1::MyForm::PF_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELId->Text));
    auto tmp = rep::rep.postalFacility.Get(Id);
    PF_TextBoxUPDELName->Text = gcnew String(tmp.Name);
    PF_ComboBoxUPDELFTId->Text = tmp.FacilityTypeId.ToString();
    PF_TextBoxUPDELAddress->Text = gcnew String(tmp.Address);
    PF_TextBoxUPDELWorkSchedule->Text = gcnew String(tmp.WorkSchedule);
    PF_TextBoxUPDELWeightRestrictions->Text = tmp.WeightRestrictions.ToString();
}

Void Lab1::MyForm::PF_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELId->Text));
    rep::rep.postalFacility.Delete(Id);

    PF_UPDDataGridView();
    PF_UPDComboBoxId();
}

System::Void Lab1::MyForm::PF_ComboBoxAddFTId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Lab1::MyForm::PF_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    PF_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab1::MyForm::PF_ComboBoxUPDELFTId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    return Void();
}
