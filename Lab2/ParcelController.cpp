#include "Lab2Form.h"
#include "Repository.h"

using namespace Lab2;
using namespace Repository;

Void Lab2Form::Pa_ButtonAdd_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Parcel^ tmp = gcnew Parcel();
        tmp->Info = Pa_TextBoxAddInfo->Text;
        tmp->Weight = Convert::ToInt64(Pa_TextBoxAddWeight->Text);
        tmp->SenderId = Convert::ToInt64(Pa_ComboBoxAddSenId->Text);
        tmp->ReciverId = Convert::ToInt64(Pa_ComboBoxAddRecId->Text);
        tmp->DeparturePointsId = Convert::ToInt64(Pa_ComboBoxAddDepId->Text);
        tmp->DeliveryPointsId = Convert::ToInt64(Pa_ComboBoxAddDelId->Text);
        tmp->Price = Convert::ToInt64(Pa_TextBoxAddPrice->Text);
        tmp->StatusId = Convert::ToInt64(Pa_ComboBoxAddPSId->Text);
        tmp->CurrentLocationId = Convert::ToInt64(Pa_ComboBoxAddCurId->Text);
        tmp->DeliveryAddress = Pa_TextBoxAddDeliveryAddress->Text;
        rep->Add(Table::Parcels, tmp);
        Pa_Update();
        Pa_LabelAddError->Text = "";
    }
    catch (FormatException^ exep) {
        Pa_LabelAddError->Text = "Вага та вартість повинні бути числом";
    }
    catch (Exception^ exep) {
        Pa_LabelAddError->Text = exep->Message;
    }
}

Void Lab2Form::Pa_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Parcel^ tmp = gcnew Parcel();
        tmp->Id = Convert::ToInt64(Pa_ComboBoxUPDELId->Text);
        tmp->Info = Pa_TextBoxUPDELInfo->Text;
        tmp->Weight = Convert::ToInt64(Pa_TextBoxUPDELWeight->Text);
        tmp->SenderId = Convert::ToInt64(Pa_ComboBoxUPDELSenId->Text);
        tmp->ReciverId = Convert::ToInt64(Pa_ComboBoxUPDELRecId->Text);
        tmp->DeparturePointsId = Convert::ToInt64(Pa_ComboBoxUPDELDepId->Text);
        tmp->DeliveryPointsId = Convert::ToInt64(Pa_ComboBoxUPDELDelId->Text);
        tmp->Price = Convert::ToInt64(Pa_TextBoxUPDELPrice->Text);
        tmp->StatusId = Convert::ToInt64(Pa_ComboBoxUPDELPSId->Text);
        tmp->CurrentLocationId = Convert::ToInt64(Pa_ComboBoxUPDELCurId->Text);
        tmp->DeliveryAddress = Pa_TextBoxUPDELDeliveryAddress->Text;
        rep->Update(Table::Parcels, tmp);
        Pa_DataGridViewUpdate();
        Pa_LabelUPDELError->Text = "";
    }
    catch (FormatException^ exep) {
        Pa_LabelUPDELError->Text = "Вага та вартість повинні бути числом";
    }
    catch (Exception^ exep) {
        Pa_LabelUPDELError->Text = exep->Message;
    }
}

Void Lab2Form::Pa_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        Parcel^ tmp = (Parcel^)rep->Get(Table::Parcels, Convert::ToInt64(Pa_ComboBoxUPDELId->Text));
        Pa_TextBoxUPDELInfo->Text = tmp->Info;
        Pa_TextBoxUPDELWeight->Text = tmp->Weight.ToString();
        Pa_ComboBoxUPDELSenId->Text = tmp->SenderId.ToString();
        Pa_ComboBoxUPDELRecId->Text = tmp->ReciverId.ToString();
        Pa_ComboBoxUPDELDepId->Text = tmp->DeparturePointsId.ToString();
        Pa_ComboBoxUPDELDelId->Text = tmp->DeliveryPointsId.ToString();
        Pa_TextBoxUPDELPrice->Text = tmp->Price.ToString();
        Pa_ComboBoxUPDELPSId->Text = tmp->StatusId.ToString();
        Pa_ComboBoxUPDELCurId->Text = tmp->CurrentLocationId.ToString();
        Pa_TextBoxUPDELDeliveryAddress->Text = tmp->DeliveryAddress;
        Pa_LabelUPDELError->Text = "";
    }
    catch (...) {}
}

Void Lab2Form::Pa_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e)
{
    try
    {
        rep->Delete(Table::Parcels, Convert::ToInt64(Pa_ComboBoxUPDELId->Text));
        Pa_LabelUPDELError->Text = "";
        Pa_Update();
        Co_Update();
    }
    catch (...) {}
}

Void Lab2Form::Pa_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e)
{
    Pa_ButtonUPDELRollBack_Click(sender, e);
}

Void Lab2Form::Pa_Update()
{
    Pa_ComboBoxUPDELId->Items->Clear();
    Co_ComboBoxAddPaId->Items->Clear();
    Co_ComboBoxUPDELPaId->Items->Clear();
    for each (Entity ^ item in rep->GetAll(Table::Parcels)) {
        Pa_ComboBoxUPDELId->Items->Add(item->Id);
        Co_ComboBoxAddPaId->Items->Add(item->Id);
        Co_ComboBoxUPDELPaId->Items->Add(item->Id);
    }
    Pa_DataGridViewUpdate();
}

Void Lab2Form::Pa_DataGridViewUpdate()
{
    DataTable^ table = gcnew DataTable();
    rep->GetTableAdapter(Table::Parcels)->Fill(table);
    Pa_DataGridView->DataSource = table;
}
