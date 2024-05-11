#include "MyForm.h"
#include <vcclr.h>

using namespace System::Runtime::InteropServices;
using namespace Lab1;

void Lab1::MyForm::UpdFT_DataGridView()
{
    FT_DataGridView->Rows->Clear();
    for (const auto& x : rep::rep.facilityType.GetAll()) {
        array<String^>^ row = { x.Id.ToString(), gcnew String(x.Type) };
        FT_DataGridView->Rows->Add(row);
    }
}

void Lab1::MyForm::UpdFT_ComboBoxId()
{
    FT_ComboBoxUPDELId->Items->Clear();
    for (const auto& x : rep::rep.facilityType.GetAll())
        FT_ComboBoxUPDELId->Items->Add(x.Id.ToString());
}



Void MyForm::FT_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    char* type = (char*)(void*)Marshal::StringToHGlobalAnsi(FT_TextBoxAddType->Text);
    if (strlen(type) < 50) {
        FacilityType tmp;
        strcpy(tmp.Type, type);
        rep::rep.facilityType.Insert(tmp);
    }
    UpdFT_DataGridView();
    UpdFT_ComboBoxId();
}

Void MyForm::FT_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    char* type = (char*)(void*)Marshal::StringToHGlobalAnsi(FT_TextBoxUPDELType->Text);
    if (strlen(type) < 50) {
        FacilityType tmp;
        tmp.Id = Id;
        strcpy(tmp.Type, type);
        rep::rep.facilityType.Update(tmp);
    }
    UpdFT_DataGridView();
}

Void MyForm::FT_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    FT_TextBoxUPDELType->Text = gcnew String(rep::rep.facilityType.Get(Id).Type);
}

Void MyForm::FT_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    FT_TextBoxUPDELType->Text = "";
    rep::rep.facilityType.Delete(Id);
    UpdFT_DataGridView();
    UpdFT_ComboBoxId();
}

Void Lab1::MyForm::FT_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    long Id = std::stol((char*)(void*)Marshal::StringToHGlobalAnsi(FT_ComboBoxUPDELId->Text));
    FT_TextBoxUPDELType->Text = gcnew String(rep::rep.facilityType.Get(Id).Type);
}
