#include "Lab1Form.h"
#include <vcclr.h>

using namespace System::Runtime::InteropServices;
using namespace Lab1;

long Lab1Form::GetFTId()
{
    auto Id_ptr = Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text);
    long Id;
    try {
        Id = std::stol((char*)(void*)Id_ptr);
    }
    catch (const std::exception& excep) {
        throw excep;
    }
    finally {
        Marshal::FreeHGlobal(Id_ptr);
    }
    return Id;
}

long Lab1Form::GetPFId()
{
    auto Id_ptr = Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELId->Text);
    long Id;
    try {
        Id = std::stol((char*)(void*)Id_ptr);
    }
    catch (const std::exception& excep) {
        throw excep;
    }
    finally {
        Marshal::FreeHGlobal(Id_ptr);
    }
    return Id;
}

void Lab1Form::FT_UPDDataGridView()
{
    FT_DataGridView->Rows->Clear();
    for (const auto& x : rep->facilityType.GetAll()) {
        array<String^>^ row = { x.Id.ToString(), gcnew String(x.Type) };
        FT_DataGridView->Rows->Add(row);
    }
}

void Lab1Form::FT_UPDComboBoxId()
{
    FT_ComboBoxUPDELId->Items->Clear();
    for (const auto& x : rep->facilityType.GetAll())
        FT_ComboBoxUPDELId->Items->Add(x.Id.ToString());
}

void Lab1Form::PF_UPDDataGridView()
{
    PF_DataGridView->Rows->Clear();
    for (const auto& x : rep->postalFacility.GetAll()) {
        array<String^>^ row = {
            x.Id.ToString(), gcnew String(x.Name),
            x.FacilityTypeId.ToString(), gcnew String(x.Address),
            gcnew String(x.WorkSchedule), x.WeightRestrictions.ToString()
        };
        PF_DataGridView->Rows->Add(row);
    }
}

void Lab1Form::PF_UPDComboBoxId()
{
    PF_ComboBoxUPDELId->Items->Clear();
    for (const auto& x : rep->postalFacility.GetAll())
        PF_ComboBoxUPDELId->Items->Add(x.Id.ToString());
}

void Lab1Form::PF_UPDComboBoxFTId()
{
    PF_ComboBoxUPDELFTId->Items->Clear();
    PF_ComboBoxAddFTId->Items->Clear();
    for (const auto& x : rep->facilityType.GetAll()) {
        PF_ComboBoxUPDELFTId->Items->Add(x.Id.ToString());
        PF_ComboBoxAddFTId->Items->Add(x.Id.ToString());
    }
}

Void Lab1Form::FT_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto type_ptr = Marshal::StringToHGlobalAnsi(FT_TextBoxAddType->Text);
    try
    {
        char* type = (char*)(void*)type_ptr;
        if (type != "" && strlen(type) < 50) {
            FacilityType tmp;
            strcpy_s(tmp.Type, type);
            rep->facilityType.Insert(tmp);

            FT_UPDDataGridView();
            FT_UPDComboBoxId();
            PF_UPDComboBoxFTId();
        }
    }
    catch (const std::exception&) {}
    finally {
        Marshal::FreeHGlobal(type_ptr);
    }
}

Void Lab1Form::FT_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto type_ptr = Marshal::StringToHGlobalAnsi(FT_TextBoxUPDELType->Text);
    try
    {
        long Id = GetFTId();
        char* type = (char*)(void*)type_ptr;
        if (type != "" && strlen(type) < 50) {
            FacilityType tmp;
            tmp.Id = Id;
            strcpy_s(tmp.Type, type);
            rep->facilityType.Update(tmp);

            FT_UPDDataGridView();
        }
    }
    catch (const std::exception&) {}
    finally {
        Marshal::FreeHGlobal(type_ptr);
    }
}

Void Lab1Form::FT_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        long Id = GetFTId();
        FT_TextBoxUPDELType->Text = gcnew String(rep->facilityType.Get(Id).Type);
    }
    catch (const std::exception&) {}
}

Void Lab1Form::FT_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        long Id = GetFTId();
        FT_ComboBoxUPDELId->Text = "";
        FT_TextBoxUPDELType->Text = "";
        rep->facilityType.Delete(Id);

        FT_UPDDataGridView();
        FT_UPDComboBoxId();
        PF_UPDDataGridView();
        PF_UPDComboBoxId();
        PF_UPDComboBoxFTId();
    }
    catch (const std::exception&) {}
}

Void Lab1Form::FT_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    FT_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab1Form::PF_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto name_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxAddName->Text);
    auto facilityTypeId_ptr = Marshal::StringToHGlobalAnsi(PF_ComboBoxAddFTId->Text);
    auto address_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxAddAddress->Text);
    auto workSchedule_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxAddWorkSchedule->Text);
    auto weightRestrictions_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxAddWeightRestrictions->Text);
    try
    {
        char* name = (char*)(void*)name_ptr;
        long facilityTypeId = std::stol((char*)(void*)facilityTypeId_ptr);
        char* address = (char*)(void*)address_ptr;
        char* workSchedule = (char*)(void*)workSchedule_ptr;
        float weightRestrictions = std::stof((char*)(void*)weightRestrictions_ptr);

        if (name != "" && address != "" && workSchedule != "" && strlen(name) < 50 && strlen(address) < 50 && strlen(workSchedule) < 100 && weightRestrictions >= 0) {
            PostalFacility tmp;
            strcpy_s(tmp.Name, name);
            tmp.FacilityTypeId = facilityTypeId;
            strcpy_s(tmp.Address, address);
            strcpy_s(tmp.WorkSchedule, workSchedule);
            tmp.WeightRestrictions = weightRestrictions;
            rep->postalFacility.Insert(tmp);

            PF_UPDDataGridView();
            PF_UPDComboBoxId();
        }
    }
    catch (const std::exception&) {}
    finally {
        Marshal::FreeHGlobal(name_ptr);
        Marshal::FreeHGlobal(facilityTypeId_ptr);
        Marshal::FreeHGlobal(address_ptr);
        Marshal::FreeHGlobal(workSchedule_ptr);
        Marshal::FreeHGlobal(weightRestrictions_ptr);
    }
}

Void Lab1Form::PF_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto name_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELName->Text);
    auto facilityTypeId_ptr = Marshal::StringToHGlobalAnsi(PF_ComboBoxUPDELFTId->Text);
    auto address_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELAddress->Text);
    auto workSchedule_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELWorkSchedule->Text);
    auto weightRestrictions_ptr = Marshal::StringToHGlobalAnsi(PF_TextBoxUPDELWeightRestrictions->Text);
    try
    {
        long Id = GetPFId();
        char* name = (char*)(void*)name_ptr;
        long facilityTypeId = std::stol((char*)(void*)facilityTypeId_ptr);
        char* address = (char*)(void*)address_ptr;
        char* workSchedule = (char*)(void*)workSchedule_ptr;
        float weightRestrictions = std::stof((char*)(void*)weightRestrictions_ptr);

        if (name != "" && address != "" && workSchedule != "" && strlen(name) < 50 && strlen(address) < 50 && strlen(workSchedule) && weightRestrictions >= 0) {
            PostalFacility tmp;
            tmp.Id = Id;
            strcpy_s(tmp.Name, name);
            tmp.FacilityTypeId = facilityTypeId;
            strcpy_s(tmp.Address, address);
            strcpy_s(tmp.WorkSchedule, workSchedule);
            tmp.WeightRestrictions = weightRestrictions;
            rep->postalFacility.Update(tmp);

            PF_UPDDataGridView();
        }
    }
    catch (const std::exception&) {}
    finally {
        Marshal::FreeHGlobal(name_ptr);
        Marshal::FreeHGlobal(facilityTypeId_ptr);
        Marshal::FreeHGlobal(address_ptr);
        Marshal::FreeHGlobal(workSchedule_ptr);
        Marshal::FreeHGlobal(weightRestrictions_ptr);
    }
}

Void Lab1Form::PF_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        long Id = GetPFId();
        auto tmp = rep->postalFacility.Get(Id);
        PF_TextBoxUPDELName->Text = gcnew String(tmp.Name);
        PF_ComboBoxUPDELFTId->Text = tmp.FacilityTypeId.ToString();
        PF_TextBoxUPDELAddress->Text = gcnew String(tmp.Address);
        PF_TextBoxUPDELWorkSchedule->Text = gcnew String(tmp.WorkSchedule);
        PF_TextBoxUPDELWeightRestrictions->Text = tmp.WeightRestrictions.ToString();
    }
    catch (const std::exception&) {}
}

Void Lab1Form::PF_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        long Id = GetPFId();
        rep->postalFacility.Delete(Id);

        PF_UPDDataGridView();
        PF_UPDComboBoxId();
    }
    catch (const std::exception&) {}
}

Void Lab1Form::PF_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    PF_ButtonUPDELRollBack_Click(sender, e);
}
