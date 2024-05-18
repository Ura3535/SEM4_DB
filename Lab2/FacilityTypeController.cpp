#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::FT_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    FacilityType^ tmp = gcnew FacilityType();
    tmp->Type = FT_TextBoxAddType->Text;
    rep->Add(Table::FacilityTypes, tmp);
    FT_Update();
}

Void Lab2Form::FT_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = gcnew FacilityType();
        tmp->Id = Convert::ToInt64(FT_ComboBoxUPDELId->Text);
        tmp->Type = FT_TextBoxUPDELType->Text;
        rep->Update(Table::FacilityTypes, tmp);
        FT_DataGridViewUpdate();
    }
    catch (...) {}
}

Void Lab2Form::FT_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        FacilityType^ tmp = (FacilityType^)rep->Get(Table::FacilityTypes, Convert::ToInt64(FT_ComboBoxUPDELId->Text));
        FT_TextBoxUPDELType->Text = tmp->Type;
    }
    catch (...) {}
}

Void Lab2Form::FT_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    rep->Delete(Table::FacilityTypes, Convert::ToInt64(FT_ComboBoxUPDELId->Text));
    FT_Update();
}

Void Lab2Form::FT_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    FT_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::FT_Update()
{
    FT_ComboBoxUPDELId->Items->Clear();
    PF_ComboBoxAddFTId->Items->Clear();
    PF_ComboBoxUPDELFTId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::FacilityTypes)) {
        FT_ComboBoxUPDELId->Items->Add(item->Id);
        PF_ComboBoxAddFTId->Items->Add(item->Id);
        PF_ComboBoxUPDELFTId->Items->Add(item->Id);
    }
    FT_DataGridViewUpdate();
}

Void Lab2Form::FT_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::FacilityTypes)->Fill(table);
    FT_DataGridView->DataSource = table;
}
