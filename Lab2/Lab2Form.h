#pragma once
#include "Repository.h"

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Lab2Form : public System::Windows::Forms::Form
	{
	public:
		Lab2Form(Repository::IRepository^ repository)
			: rep(repository)
		{
			InitializeComponent();
			Cl_Update();
			Co_Update();
			FT_Update();
			Pa_Update();
			PS_Update();
			PF_Update();
			Query_Update();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Lab2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Repository::IRepository^ rep;
	private: System::Windows::Forms::TabControl^ MainTabControl;
	private: System::Windows::Forms::TabPage^ MainPage;
	private: System::Windows::Forms::TabPage^ TablePage;
	private: System::Windows::Forms::TabPage^ QueryPage;
	private: System::Windows::Forms::TabPage^ InfoPage;
	private: System::Windows::Forms::TabControl^ TableTabControl;
	private: System::Windows::Forms::TabPage^ FT_Page;
	private: System::Windows::Forms::Panel^ FT_PanelList;
	private: System::Windows::Forms::DataGridView^ FT_DataGridView;
	private: System::Windows::Forms::Label^ FT_LabelList;
	private: System::Windows::Forms::Panel^ FT_PanelUPDEL;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELSave;
	private: System::Windows::Forms::TextBox^ FT_TextBoxUPDELType;
	private: System::Windows::Forms::ComboBox^ FT_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ FT_LableUPDELType;
	private: System::Windows::Forms::Label^ FT_LabelUPDELId;
	private: System::Windows::Forms::Label^ FT_LabelUPDEL;
	private: System::Windows::Forms::Panel^ FT_PanelAdd;
	private: System::Windows::Forms::Button^ FT_ButtonAdd;
	private: System::Windows::Forms::TextBox^ FT_TextBoxAddType;
	private: System::Windows::Forms::Label^ FT_LableAddType;
	private: System::Windows::Forms::Label^ FT_LableAdd;
	private: System::Windows::Forms::TabPage^ PF_Page;
	private: System::Windows::Forms::Panel^ PF_PanelList;
	private: System::Windows::Forms::DataGridView^ PF_DataGridView;
	private: System::Windows::Forms::Label^ PF_LabelList;
	private: System::Windows::Forms::Panel^ PF_PanelUPDEL;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELSave;
	private: System::Windows::Forms::ComboBox^ PF_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ PF_LableUPDELId;
	private: System::Windows::Forms::Label^ PF_LableUPDELWeightRestrictions;
	private: System::Windows::Forms::TextBox^ PF_TextBoxUPDELWeightRestrictions;
	private: System::Windows::Forms::TextBox^ PF_TextBoxUPDELWorkSchedule;
	private: System::Windows::Forms::Label^ PF_LableUPDELWorkSchedule;
	private: System::Windows::Forms::TextBox^ PF_TextBoxUPDELAddress;
	private: System::Windows::Forms::Label^ PF_LableUPDELAddress;
	private: System::Windows::Forms::ComboBox^ PF_ComboBoxUPDELFTId;
	private: System::Windows::Forms::Label^ PF_LableUPDELFTId;
	private: System::Windows::Forms::TextBox^ PF_TextBoxUPDELName;
	private: System::Windows::Forms::Label^ PF_LableUPDELName;
	private: System::Windows::Forms::Label^ PF_LabelUPDEL;
	private: System::Windows::Forms::Panel^ PF_PanelAdd;
	private: System::Windows::Forms::Label^ PF_LableAddWeightRestrictions;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddWeightRestrictions;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddWorkSchedule;
	private: System::Windows::Forms::Label^ PF_LableAddWorkSchedule;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddAddress;
	private: System::Windows::Forms::Label^ PF_LableAddAddress;
	private: System::Windows::Forms::ComboBox^ PF_ComboBoxAddFTId;
	private: System::Windows::Forms::Label^ PF_LableAddFTId;
	private: System::Windows::Forms::Button^ PF_ButtonAdd;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddName;
	private: System::Windows::Forms::Label^ PF_LableAddName;
	private: System::Windows::Forms::Label^ PF_LabelAdd;








	private: System::Windows::Forms::TabPage^ PS_Page;
	private: System::Windows::Forms::Panel^ PS_PanelList;
	private: System::Windows::Forms::DataGridView^ PS_DataGridView;
	private: System::Windows::Forms::Label^ PS_LabelList;
	private: System::Windows::Forms::Panel^ PS_PanelUPDEL;
	private: System::Windows::Forms::Button^ PS_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ PS_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ PS_ButtonUPDELSave;
	private: System::Windows::Forms::TextBox^ PS_TextBoxUPDELStatus;
	private: System::Windows::Forms::ComboBox^ PS_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ PS_LabelUPDELStatus;
	private: System::Windows::Forms::Label^ PS_LabelUPDELId;
	private: System::Windows::Forms::Label^ PS_LabelUPDEL;
	private: System::Windows::Forms::Panel^ PS_PanelAdd;
	private: System::Windows::Forms::Button^ PS_ButtonAdd;
	private: System::Windows::Forms::TextBox^ PS_TextBoxAddStatus;
	private: System::Windows::Forms::Label^ PS_LableAddStatus;
	private: System::Windows::Forms::Label^ PS_LabelAdd;


	private: System::Windows::Forms::TabPage^ Co_Page;
	private: System::Windows::Forms::Panel^ Co_PanelList;
	private: System::Windows::Forms::DataGridView^ Co_DataGridView;
	private: System::Windows::Forms::Label^ Co_LabelList;
	private: System::Windows::Forms::Panel^ Co_PanelUPDEL;
	private: System::Windows::Forms::Button^ Co_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ Co_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ Co_ButtonUPDELSave;
	private: System::Windows::Forms::ComboBox^ Co_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ Co_LableUPDELId;
	private: System::Windows::Forms::TextBox^ Co_TextBoxUPDELCity;
	private: System::Windows::Forms::Label^ Co_LableUPDELPaId;
	private: System::Windows::Forms::ComboBox^ Co_ComboBoxUPDELPaId;
	private: System::Windows::Forms::Label^ Co_LableUPDELCity;
	private: System::Windows::Forms::TextBox^ Co_TextBoxUPDELName;
	private: System::Windows::Forms::Label^ Co_LableUPDELName;
	private: System::Windows::Forms::Label^ Co_LabelUPDEL;
	private: System::Windows::Forms::Panel^ Co_PanelAdd;
	private: System::Windows::Forms::TextBox^ Co_TextBoxAddCity;
	private: System::Windows::Forms::Label^ Co_LableAddPaId;
	private: System::Windows::Forms::ComboBox^ Co_ComboBoxAddPaId;
	private: System::Windows::Forms::Label^ Co_LableAddCity;
	private: System::Windows::Forms::Button^ Co_ButtonAdd;
	private: System::Windows::Forms::TextBox^ Co_TextBoxAddName;
	private: System::Windows::Forms::Label^ Co_LableAddName;
	private: System::Windows::Forms::Label^ Co_LabelAdd;




	private: System::Windows::Forms::TabPage^ Cl_Page;
	private: System::Windows::Forms::Panel^ Cl_PanelList;
	private: System::Windows::Forms::DataGridView^ Cl_DataGridView;
	private: System::Windows::Forms::Label^ Cl_LabelList;
	private: System::Windows::Forms::Panel^ Cl_PanelUPDEL;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxUPDELEmail;
	private: System::Windows::Forms::Button^ Cl_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ Cl_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ Cl_ButtonUPDELSave;
	private: System::Windows::Forms::ComboBox^ Cl_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ Cl_LableUPDELId;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxUPDELContactNumber;
	private: System::Windows::Forms::Label^ Cl_LableUPDELEmail;
	private: System::Windows::Forms::Label^ Cl_LableUPDELContactNumber;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxUPDELName;
	private: System::Windows::Forms::Label^ Cl_LableUPDELName;
	private: System::Windows::Forms::Label^ Cl_LabelUPDEL;
	private: System::Windows::Forms::Panel^ Cl_PanelAdd;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxAddEmail;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxAddContactNumber;
	private: System::Windows::Forms::Label^ Cl_LableAddEmail;
	private: System::Windows::Forms::Label^ Cl_LableAddContactNumber;
	private: System::Windows::Forms::Button^ Cl_ButtonAdd;
	private: System::Windows::Forms::TextBox^ Cl_TextBoxAddName;
	private: System::Windows::Forms::Label^ Cl_LableAddName;
	private: System::Windows::Forms::Label^ Cl_LabelAdd;




	private: System::Windows::Forms::TabPage^ Pa_Page;
	private: System::Windows::Forms::Panel^ Pa_PanelList;
	private: System::Windows::Forms::DataGridView^ Pa_DataGridView;
	private: System::Windows::Forms::Label^ Pa_LabelList;
	private: System::Windows::Forms::Panel^ Pa_PanelUPDEL;
	private: System::Windows::Forms::Button^ Pa_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ Pa_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ Pa_ButtonUPDELSave;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ Pa_LableUPDELId;
	private: System::Windows::Forms::Label^ Pa_LabelUPDEL;
	private: System::Windows::Forms::Panel^ Pa_PanelAdd;
	private: System::Windows::Forms::Button^ Pa_ButtonAdd;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxAddInfo;
	private: System::Windows::Forms::Label^ Pa_LableAddInfo;
	private: System::Windows::Forms::Label^ Pa_LabelAdd;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddSenId;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxAddWeight;
	private: System::Windows::Forms::Label^ Pa_LableAddWeight;
	private: System::Windows::Forms::Label^ Pa_LableAddSenId;











	private: System::Windows::Forms::Label^ Pa_LableAddDepId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddDepId;
	private: System::Windows::Forms::Label^ Pa_LableAddRecId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddRecId;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxAddPrice;
	private: System::Windows::Forms::Label^ Pa_LableAddPrice;
	private: System::Windows::Forms::Label^ Pa_LableAddDelId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddDelId;
	private: System::Windows::Forms::Label^ Pa_LableAddPSId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddPSId;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxUPDELDeliveryAddress;
	private: System::Windows::Forms::Label^ Pa_LableUPDELDeliveryAddress;
	private: System::Windows::Forms::Label^ Pa_LableUPDELCurId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELCurId;
	private: System::Windows::Forms::Label^ Pa_LableUPDELPSId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELPSId;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxUPDELPrice;
	private: System::Windows::Forms::Label^ Pa_LableUPDELPrice;
	private: System::Windows::Forms::Label^ Pa_LableUPDELDelId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELDelId;
	private: System::Windows::Forms::Label^ Pa_LableUPDELDepId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELDepId;
	private: System::Windows::Forms::Label^ Pa_LableUPDELRecId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELRecId;
	private: System::Windows::Forms::Label^ Pa_LableUPDELSenId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxUPDELSenId;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxUPDELWeight;
	private: System::Windows::Forms::Label^ Pa_LableUPDELWeight;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxUPDELInfo;
	private: System::Windows::Forms::Label^ Pa_LableUPDELInfo;
	private: System::Windows::Forms::TextBox^ Pa_TextBoxAddDeliveryAddress;
	private: System::Windows::Forms::Label^ Pa_LableAddDeliveryAddress;
	private: System::Windows::Forms::Label^ Pa_LableAddCurId;
	private: System::Windows::Forms::ComboBox^ Pa_ComboBoxAddCurId;
private: System::Windows::Forms::Label^ FT_LabelAddError;
private: System::Windows::Forms::Label^ FT_LabelUPDELError;
private: System::Windows::Forms::Label^ PF_LabelUPDELError;
private: System::Windows::Forms::Label^ PF_LabelAddError;
private: System::Windows::Forms::Label^ PS_LabelUPDELError;


private: System::Windows::Forms::Label^ PS_LabelAddError;
private: System::Windows::Forms::Label^ Co_LabelUPDELError;
private: System::Windows::Forms::Label^ Co_LabelAddError;
private: System::Windows::Forms::Label^ Cl_LabelUPDELError;
private: System::Windows::Forms::Label^ Cl_LabelAddError;
private: System::Windows::Forms::Label^ Pa_LabelUPDELError;
private: System::Windows::Forms::Label^ Pa_LabelAddError;
private: System::Windows::Forms::Label^ Query_LabelValue;
private: System::Windows::Forms::ComboBox^ Query_ComboBoxChose;



private: System::Windows::Forms::Label^ Query_LabelChose;
private: System::Windows::Forms::TextBox^ Query_TextBoxAboutQuery;

private: System::Windows::Forms::Label^ Query_LabelAboutQuery;
private: System::Windows::Forms::TextBox^ Query_TextBoxValue;
private: System::Windows::Forms::TextBox^ Query_TextBoxCode;



private: System::Windows::Forms::Label^ Query_LabelCode;
private: System::Windows::Forms::Button^ Query_ButtonComplete;
private: System::Windows::Forms::DataGridView^ Query_DataGridView;

private: System::Windows::Forms::Label^ Query_LabelError;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->MainPage = (gcnew System::Windows::Forms::TabPage());
			this->TablePage = (gcnew System::Windows::Forms::TabPage());
			this->TableTabControl = (gcnew System::Windows::Forms::TabControl());
			this->FT_Page = (gcnew System::Windows::Forms::TabPage());
			this->FT_PanelList = (gcnew System::Windows::Forms::Panel());
			this->FT_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->FT_LabelList = (gcnew System::Windows::Forms::Label());
			this->FT_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->FT_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->FT_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxUPDELType = (gcnew System::Windows::Forms::TextBox());
			this->FT_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->FT_LableUPDELType = (gcnew System::Windows::Forms::Label());
			this->FT_LabelUPDELId = (gcnew System::Windows::Forms::Label());
			this->FT_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->FT_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->FT_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->FT_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxAddType = (gcnew System::Windows::Forms::TextBox());
			this->FT_LableAddType = (gcnew System::Windows::Forms::Label());
			this->FT_LableAdd = (gcnew System::Windows::Forms::Label());
			this->PF_Page = (gcnew System::Windows::Forms::TabPage());
			this->PF_PanelList = (gcnew System::Windows::Forms::Panel());
			this->PF_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->PF_LabelList = (gcnew System::Windows::Forms::Label());
			this->PF_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->PF_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->PF_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->PF_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->PF_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->PF_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->PF_LableUPDELId = (gcnew System::Windows::Forms::Label());
			this->PF_LableUPDELWeightRestrictions = (gcnew System::Windows::Forms::Label());
			this->PF_TextBoxUPDELWeightRestrictions = (gcnew System::Windows::Forms::TextBox());
			this->PF_TextBoxUPDELWorkSchedule = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableUPDELWorkSchedule = (gcnew System::Windows::Forms::Label());
			this->PF_TextBoxUPDELAddress = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableUPDELAddress = (gcnew System::Windows::Forms::Label());
			this->PF_ComboBoxUPDELFTId = (gcnew System::Windows::Forms::ComboBox());
			this->PF_LableUPDELFTId = (gcnew System::Windows::Forms::Label());
			this->PF_TextBoxUPDELName = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableUPDELName = (gcnew System::Windows::Forms::Label());
			this->PF_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->PF_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->PF_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->PF_LableAddWeightRestrictions = (gcnew System::Windows::Forms::Label());
			this->PF_TextBoxAddWeightRestrictions = (gcnew System::Windows::Forms::TextBox());
			this->PF_TextBoxAddWorkSchedule = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableAddWorkSchedule = (gcnew System::Windows::Forms::Label());
			this->PF_TextBoxAddAddress = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableAddAddress = (gcnew System::Windows::Forms::Label());
			this->PF_ComboBoxAddFTId = (gcnew System::Windows::Forms::ComboBox());
			this->PF_LableAddFTId = (gcnew System::Windows::Forms::Label());
			this->PF_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->PF_TextBoxAddName = (gcnew System::Windows::Forms::TextBox());
			this->PF_LableAddName = (gcnew System::Windows::Forms::Label());
			this->PF_LabelAdd = (gcnew System::Windows::Forms::Label());
			this->PS_Page = (gcnew System::Windows::Forms::TabPage());
			this->PS_PanelList = (gcnew System::Windows::Forms::Panel());
			this->PS_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->PS_LabelList = (gcnew System::Windows::Forms::Label());
			this->PS_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->PS_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->PS_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->PS_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->PS_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->PS_TextBoxUPDELStatus = (gcnew System::Windows::Forms::TextBox());
			this->PS_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->PS_LabelUPDELStatus = (gcnew System::Windows::Forms::Label());
			this->PS_LabelUPDELId = (gcnew System::Windows::Forms::Label());
			this->PS_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->PS_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->PS_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->PS_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->PS_TextBoxAddStatus = (gcnew System::Windows::Forms::TextBox());
			this->PS_LableAddStatus = (gcnew System::Windows::Forms::Label());
			this->PS_LabelAdd = (gcnew System::Windows::Forms::Label());
			this->Co_Page = (gcnew System::Windows::Forms::TabPage());
			this->Co_PanelList = (gcnew System::Windows::Forms::Panel());
			this->Co_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Co_LabelList = (gcnew System::Windows::Forms::Label());
			this->Co_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->Co_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->Co_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->Co_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->Co_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->Co_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->Co_LableUPDELId = (gcnew System::Windows::Forms::Label());
			this->Co_TextBoxUPDELCity = (gcnew System::Windows::Forms::TextBox());
			this->Co_LableUPDELPaId = (gcnew System::Windows::Forms::Label());
			this->Co_ComboBoxUPDELPaId = (gcnew System::Windows::Forms::ComboBox());
			this->Co_LableUPDELCity = (gcnew System::Windows::Forms::Label());
			this->Co_TextBoxUPDELName = (gcnew System::Windows::Forms::TextBox());
			this->Co_LableUPDELName = (gcnew System::Windows::Forms::Label());
			this->Co_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->Co_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->Co_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->Co_TextBoxAddCity = (gcnew System::Windows::Forms::TextBox());
			this->Co_LableAddPaId = (gcnew System::Windows::Forms::Label());
			this->Co_ComboBoxAddPaId = (gcnew System::Windows::Forms::ComboBox());
			this->Co_LableAddCity = (gcnew System::Windows::Forms::Label());
			this->Co_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->Co_TextBoxAddName = (gcnew System::Windows::Forms::TextBox());
			this->Co_LableAddName = (gcnew System::Windows::Forms::Label());
			this->Co_LabelAdd = (gcnew System::Windows::Forms::Label());
			this->Cl_Page = (gcnew System::Windows::Forms::TabPage());
			this->Cl_PanelList = (gcnew System::Windows::Forms::Panel());
			this->Cl_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Cl_LabelList = (gcnew System::Windows::Forms::Label());
			this->Cl_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->Cl_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->Cl_TextBoxUPDELEmail = (gcnew System::Windows::Forms::TextBox());
			this->Cl_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->Cl_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->Cl_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->Cl_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->Cl_LableUPDELId = (gcnew System::Windows::Forms::Label());
			this->Cl_TextBoxUPDELContactNumber = (gcnew System::Windows::Forms::TextBox());
			this->Cl_LableUPDELEmail = (gcnew System::Windows::Forms::Label());
			this->Cl_LableUPDELContactNumber = (gcnew System::Windows::Forms::Label());
			this->Cl_TextBoxUPDELName = (gcnew System::Windows::Forms::TextBox());
			this->Cl_LableUPDELName = (gcnew System::Windows::Forms::Label());
			this->Cl_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->Cl_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->Cl_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->Cl_TextBoxAddEmail = (gcnew System::Windows::Forms::TextBox());
			this->Cl_TextBoxAddContactNumber = (gcnew System::Windows::Forms::TextBox());
			this->Cl_LableAddEmail = (gcnew System::Windows::Forms::Label());
			this->Cl_LableAddContactNumber = (gcnew System::Windows::Forms::Label());
			this->Cl_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->Cl_TextBoxAddName = (gcnew System::Windows::Forms::TextBox());
			this->Cl_LableAddName = (gcnew System::Windows::Forms::Label());
			this->Cl_LabelAdd = (gcnew System::Windows::Forms::Label());
			this->Pa_Page = (gcnew System::Windows::Forms::TabPage());
			this->Pa_PanelList = (gcnew System::Windows::Forms::Panel());
			this->Pa_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Pa_LabelList = (gcnew System::Windows::Forms::Label());
			this->Pa_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->Pa_LabelUPDELError = (gcnew System::Windows::Forms::Label());
			this->Pa_TextBoxUPDELDeliveryAddress = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableUPDELDeliveryAddress = (gcnew System::Windows::Forms::Label());
			this->Pa_LableUPDELCurId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELCurId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableUPDELPSId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELPSId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_TextBoxUPDELPrice = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableUPDELPrice = (gcnew System::Windows::Forms::Label());
			this->Pa_LableUPDELDelId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELDelId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableUPDELDepId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELDepId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableUPDELRecId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELRecId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableUPDELSenId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxUPDELSenId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_TextBoxUPDELWeight = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableUPDELWeight = (gcnew System::Windows::Forms::Label());
			this->Pa_TextBoxUPDELInfo = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableUPDELInfo = (gcnew System::Windows::Forms::Label());
			this->Pa_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->Pa_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->Pa_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->Pa_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableUPDELId = (gcnew System::Windows::Forms::Label());
			this->Pa_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->Pa_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->Pa_LabelAddError = (gcnew System::Windows::Forms::Label());
			this->Pa_TextBoxAddDeliveryAddress = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableAddDeliveryAddress = (gcnew System::Windows::Forms::Label());
			this->Pa_LableAddCurId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddCurId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableAddPSId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddPSId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_TextBoxAddPrice = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableAddPrice = (gcnew System::Windows::Forms::Label());
			this->Pa_LableAddDelId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddDelId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableAddDepId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddDepId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableAddRecId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddRecId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_LableAddSenId = (gcnew System::Windows::Forms::Label());
			this->Pa_ComboBoxAddSenId = (gcnew System::Windows::Forms::ComboBox());
			this->Pa_TextBoxAddWeight = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableAddWeight = (gcnew System::Windows::Forms::Label());
			this->Pa_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->Pa_TextBoxAddInfo = (gcnew System::Windows::Forms::TextBox());
			this->Pa_LableAddInfo = (gcnew System::Windows::Forms::Label());
			this->Pa_LabelAdd = (gcnew System::Windows::Forms::Label());
			this->QueryPage = (gcnew System::Windows::Forms::TabPage());
			this->Query_ButtonComplete = (gcnew System::Windows::Forms::Button());
			this->Query_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Query_TextBoxCode = (gcnew System::Windows::Forms::TextBox());
			this->Query_LabelCode = (gcnew System::Windows::Forms::Label());
			this->Query_TextBoxAboutQuery = (gcnew System::Windows::Forms::TextBox());
			this->Query_LabelAboutQuery = (gcnew System::Windows::Forms::Label());
			this->Query_TextBoxValue = (gcnew System::Windows::Forms::TextBox());
			this->Query_LabelValue = (gcnew System::Windows::Forms::Label());
			this->Query_ComboBoxChose = (gcnew System::Windows::Forms::ComboBox());
			this->Query_LabelChose = (gcnew System::Windows::Forms::Label());
			this->InfoPage = (gcnew System::Windows::Forms::TabPage());
			this->Query_LabelError = (gcnew System::Windows::Forms::Label());
			this->MainTabControl->SuspendLayout();
			this->TablePage->SuspendLayout();
			this->TableTabControl->SuspendLayout();
			this->FT_Page->SuspendLayout();
			this->FT_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FT_DataGridView))->BeginInit();
			this->FT_PanelUPDEL->SuspendLayout();
			this->FT_PanelAdd->SuspendLayout();
			this->PF_Page->SuspendLayout();
			this->PF_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PF_DataGridView))->BeginInit();
			this->PF_PanelUPDEL->SuspendLayout();
			this->PF_PanelAdd->SuspendLayout();
			this->PS_Page->SuspendLayout();
			this->PS_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS_DataGridView))->BeginInit();
			this->PS_PanelUPDEL->SuspendLayout();
			this->PS_PanelAdd->SuspendLayout();
			this->Co_Page->SuspendLayout();
			this->Co_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Co_DataGridView))->BeginInit();
			this->Co_PanelUPDEL->SuspendLayout();
			this->Co_PanelAdd->SuspendLayout();
			this->Cl_Page->SuspendLayout();
			this->Cl_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cl_DataGridView))->BeginInit();
			this->Cl_PanelUPDEL->SuspendLayout();
			this->Cl_PanelAdd->SuspendLayout();
			this->Pa_Page->SuspendLayout();
			this->Pa_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pa_DataGridView))->BeginInit();
			this->Pa_PanelUPDEL->SuspendLayout();
			this->Pa_PanelAdd->SuspendLayout();
			this->QueryPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Query_DataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// MainTabControl
			// 
			this->MainTabControl->Controls->Add(this->MainPage);
			this->MainTabControl->Controls->Add(this->TablePage);
			this->MainTabControl->Controls->Add(this->QueryPage);
			this->MainTabControl->Controls->Add(this->InfoPage);
			this->MainTabControl->Location = System::Drawing::Point(12, 12);
			this->MainTabControl->Name = L"MainTabControl";
			this->MainTabControl->SelectedIndex = 0;
			this->MainTabControl->Size = System::Drawing::Size(1160, 737);
			this->MainTabControl->TabIndex = 0;
			// 
			// MainPage
			// 
			this->MainPage->Location = System::Drawing::Point(4, 22);
			this->MainPage->Name = L"MainPage";
			this->MainPage->Padding = System::Windows::Forms::Padding(3);
			this->MainPage->Size = System::Drawing::Size(1152, 711);
			this->MainPage->TabIndex = 0;
			this->MainPage->Text = L"�������";
			this->MainPage->UseVisualStyleBackColor = true;
			// 
			// TablePage
			// 
			this->TablePage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->TablePage->Controls->Add(this->TableTabControl);
			this->TablePage->Location = System::Drawing::Point(4, 22);
			this->TablePage->Name = L"TablePage";
			this->TablePage->Padding = System::Windows::Forms::Padding(3);
			this->TablePage->Size = System::Drawing::Size(1152, 711);
			this->TablePage->TabIndex = 1;
			this->TablePage->Text = L"�������";
			// 
			// TableTabControl
			// 
			this->TableTabControl->Controls->Add(this->FT_Page);
			this->TableTabControl->Controls->Add(this->PF_Page);
			this->TableTabControl->Controls->Add(this->PS_Page);
			this->TableTabControl->Controls->Add(this->Co_Page);
			this->TableTabControl->Controls->Add(this->Cl_Page);
			this->TableTabControl->Controls->Add(this->Pa_Page);
			this->TableTabControl->Location = System::Drawing::Point(6, 6);
			this->TableTabControl->Name = L"TableTabControl";
			this->TableTabControl->SelectedIndex = 0;
			this->TableTabControl->Size = System::Drawing::Size(1140, 699);
			this->TableTabControl->TabIndex = 1;
			// 
			// FT_Page
			// 
			this->FT_Page->BackColor = System::Drawing::Color::LightGray;
			this->FT_Page->Controls->Add(this->FT_PanelList);
			this->FT_Page->Controls->Add(this->FT_PanelUPDEL);
			this->FT_Page->Controls->Add(this->FT_PanelAdd);
			this->FT_Page->Location = System::Drawing::Point(4, 22);
			this->FT_Page->Name = L"FT_Page";
			this->FT_Page->Padding = System::Windows::Forms::Padding(3);
			this->FT_Page->Size = System::Drawing::Size(1132, 673);
			this->FT_Page->TabIndex = 0;
			this->FT_Page->Text = L"FacilityTypes";
			// 
			// FT_PanelList
			// 
			this->FT_PanelList->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelList->Controls->Add(this->FT_DataGridView);
			this->FT_PanelList->Controls->Add(this->FT_LabelList);
			this->FT_PanelList->Location = System::Drawing::Point(6, 288);
			this->FT_PanelList->Name = L"FT_PanelList";
			this->FT_PanelList->Size = System::Drawing::Size(1120, 379);
			this->FT_PanelList->TabIndex = 2;
			// 
			// FT_DataGridView
			// 
			this->FT_DataGridView->AllowUserToAddRows = false;
			this->FT_DataGridView->AllowUserToDeleteRows = false;
			this->FT_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FT_DataGridView->Location = System::Drawing::Point(4, 44);
			this->FT_DataGridView->Name = L"FT_DataGridView";
			this->FT_DataGridView->ReadOnly = true;
			this->FT_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->FT_DataGridView->TabIndex = 3;
			// 
			// FT_LabelList
			// 
			this->FT_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LabelList->Location = System::Drawing::Point(10, 10);
			this->FT_LabelList->Name = L"FT_LabelList";
			this->FT_LabelList->Size = System::Drawing::Size(1107, 30);
			this->FT_LabelList->TabIndex = 2;
			this->FT_LabelList->Text = L"�� ���� ������";
			// 
			// FT_PanelUPDEL
			// 
			this->FT_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelUPDEL->Controls->Add(this->FT_LabelUPDELError);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELDelete);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELRollBack);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELSave);
			this->FT_PanelUPDEL->Controls->Add(this->FT_TextBoxUPDELType);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ComboBoxUPDELId);
			this->FT_PanelUPDEL->Controls->Add(this->FT_LableUPDELType);
			this->FT_PanelUPDEL->Controls->Add(this->FT_LabelUPDELId);
			this->FT_PanelUPDEL->Controls->Add(this->FT_LabelUPDEL);
			this->FT_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->FT_PanelUPDEL->Name = L"FT_PanelUPDEL";
			this->FT_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->FT_PanelUPDEL->TabIndex = 1;
			// 
			// FT_LabelUPDELError
			// 
			this->FT_LabelUPDELError->AutoSize = true;
			this->FT_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->FT_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->FT_LabelUPDELError->Name = L"FT_LabelUPDELError";
			this->FT_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->FT_LabelUPDELError->TabIndex = 9;
			this->FT_LabelUPDELError->Text = L" ";
			// 
			// FT_ButtonUPDELDelete
			// 
			this->FT_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->FT_ButtonUPDELDelete->Name = L"FT_ButtonUPDELDelete";
			this->FT_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELDelete->TabIndex = 8;
			this->FT_ButtonUPDELDelete->Text = L"��������";
			this->FT_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::FT_ButtonUPDELDelete_Click);
			// 
			// FT_ButtonUPDELRollBack
			// 
			this->FT_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->FT_ButtonUPDELRollBack->Name = L"FT_ButtonUPDELRollBack";
			this->FT_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELRollBack->TabIndex = 7;
			this->FT_ButtonUPDELRollBack->Text = L"³������";
			this->FT_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::FT_ButtonUPDELRollBack_Click);
			// 
			// FT_ButtonUPDELSave
			// 
			this->FT_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->FT_ButtonUPDELSave->Name = L"FT_ButtonUPDELSave";
			this->FT_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELSave->TabIndex = 6;
			this->FT_ButtonUPDELSave->Text = L"��������";
			this->FT_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::FT_ButtonUPDELSave_Click);
			// 
			// FT_TextBoxUPDELType
			// 
			this->FT_TextBoxUPDELType->Location = System::Drawing::Point(69, 64);
			this->FT_TextBoxUPDELType->Name = L"FT_TextBoxUPDELType";
			this->FT_TextBoxUPDELType->Size = System::Drawing::Size(150, 22);
			this->FT_TextBoxUPDELType->TabIndex = 5;
			// 
			// FT_ComboBoxUPDELId
			// 
			this->FT_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FT_ComboBoxUPDELId->FormattingEnabled = true;
			this->FT_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->FT_ComboBoxUPDELId->Name = L"FT_ComboBoxUPDELId";
			this->FT_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->FT_ComboBoxUPDELId->TabIndex = 4;
			this->FT_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::FT_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// FT_LableUPDELType
			// 
			this->FT_LableUPDELType->Location = System::Drawing::Point(66, 40);
			this->FT_LableUPDELType->Name = L"FT_LableUPDELType";
			this->FT_LableUPDELType->Size = System::Drawing::Size(150, 20);
			this->FT_LableUPDELType->TabIndex = 3;
			this->FT_LableUPDELType->Text = L"��� ��������";
			// 
			// FT_LabelUPDELId
			// 
			this->FT_LabelUPDELId->Location = System::Drawing::Point(10, 40);
			this->FT_LabelUPDELId->Name = L"FT_LabelUPDELId";
			this->FT_LabelUPDELId->Size = System::Drawing::Size(50, 20);
			this->FT_LabelUPDELId->TabIndex = 2;
			this->FT_LabelUPDELId->Text = L"Id";
			// 
			// FT_LabelUPDEL
			// 
			this->FT_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->FT_LabelUPDEL->Name = L"FT_LabelUPDEL";
			this->FT_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->FT_LabelUPDEL->TabIndex = 1;
			this->FT_LabelUPDEL->Text = L"����������/�������� ��� ��������";
			// 
			// FT_PanelAdd
			// 
			this->FT_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FT_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelAdd->Controls->Add(this->FT_LabelAddError);
			this->FT_PanelAdd->Controls->Add(this->FT_ButtonAdd);
			this->FT_PanelAdd->Controls->Add(this->FT_TextBoxAddType);
			this->FT_PanelAdd->Controls->Add(this->FT_LableAddType);
			this->FT_PanelAdd->Controls->Add(this->FT_LableAdd);
			this->FT_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->FT_PanelAdd->Name = L"FT_PanelAdd";
			this->FT_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->FT_PanelAdd->TabIndex = 0;
			// 
			// FT_LabelAddError
			// 
			this->FT_LabelAddError->AutoSize = true;
			this->FT_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->FT_LabelAddError->Location = System::Drawing::Point(116, 104);
			this->FT_LabelAddError->Name = L"FT_LabelAddError";
			this->FT_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->FT_LabelAddError->TabIndex = 4;
			this->FT_LabelAddError->Text = L" ";
			// 
			// FT_ButtonAdd
			// 
			this->FT_ButtonAdd->Location = System::Drawing::Point(10, 100);
			this->FT_ButtonAdd->Name = L"FT_ButtonAdd";
			this->FT_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonAdd->TabIndex = 3;
			this->FT_ButtonAdd->Text = L"������";
			this->FT_ButtonAdd->UseVisualStyleBackColor = true;
			this->FT_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::FT_ButtonAdd_Click);
			// 
			// FT_TextBoxAddType
			// 
			this->FT_TextBoxAddType->Location = System::Drawing::Point(10, 63);
			this->FT_TextBoxAddType->Name = L"FT_TextBoxAddType";
			this->FT_TextBoxAddType->Size = System::Drawing::Size(150, 22);
			this->FT_TextBoxAddType->TabIndex = 2;
			// 
			// FT_LableAddType
			// 
			this->FT_LableAddType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LableAddType->Location = System::Drawing::Point(10, 40);
			this->FT_LableAddType->Name = L"FT_LableAddType";
			this->FT_LableAddType->Size = System::Drawing::Size(150, 20);
			this->FT_LableAddType->TabIndex = 1;
			this->FT_LableAddType->Text = L"��� ��������";
			// 
			// FT_LableAdd
			// 
			this->FT_LableAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LableAdd->Location = System::Drawing::Point(10, 10);
			this->FT_LableAdd->Name = L"FT_LableAdd";
			this->FT_LableAdd->Size = System::Drawing::Size(1107, 30);
			this->FT_LableAdd->TabIndex = 0;
			this->FT_LableAdd->Text = L"������ ����� ��� ��������";
			// 
			// PF_Page
			// 
			this->PF_Page->BackColor = System::Drawing::Color::LightGray;
			this->PF_Page->Controls->Add(this->PF_PanelList);
			this->PF_Page->Controls->Add(this->PF_PanelUPDEL);
			this->PF_Page->Controls->Add(this->PF_PanelAdd);
			this->PF_Page->Location = System::Drawing::Point(4, 22);
			this->PF_Page->Name = L"PF_Page";
			this->PF_Page->Padding = System::Windows::Forms::Padding(3);
			this->PF_Page->Size = System::Drawing::Size(1132, 673);
			this->PF_Page->TabIndex = 1;
			this->PF_Page->Text = L"PostalFacilitys";
			// 
			// PF_PanelList
			// 
			this->PF_PanelList->BackColor = System::Drawing::Color::Silver;
			this->PF_PanelList->Controls->Add(this->PF_DataGridView);
			this->PF_PanelList->Controls->Add(this->PF_LabelList);
			this->PF_PanelList->Location = System::Drawing::Point(6, 288);
			this->PF_PanelList->Name = L"PF_PanelList";
			this->PF_PanelList->Size = System::Drawing::Size(1120, 379);
			this->PF_PanelList->TabIndex = 13;
			// 
			// PF_DataGridView
			// 
			this->PF_DataGridView->AllowUserToAddRows = false;
			this->PF_DataGridView->AllowUserToDeleteRows = false;
			this->PF_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PF_DataGridView->Location = System::Drawing::Point(4, 44);
			this->PF_DataGridView->Name = L"PF_DataGridView";
			this->PF_DataGridView->ReadOnly = true;
			this->PF_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->PF_DataGridView->TabIndex = 3;
			// 
			// PF_LabelList
			// 
			this->PF_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelList->Location = System::Drawing::Point(10, 10);
			this->PF_LabelList->Name = L"PF_LabelList";
			this->PF_LabelList->Size = System::Drawing::Size(1107, 30);
			this->PF_LabelList->TabIndex = 2;
			this->PF_LabelList->Text = L"�� �������";
			// 
			// PF_PanelUPDEL
			// 
			this->PF_PanelUPDEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PF_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->PF_PanelUPDEL->Controls->Add(this->PF_LabelUPDELError);
			this->PF_PanelUPDEL->Controls->Add(this->PF_ButtonUPDELDelete);
			this->PF_PanelUPDEL->Controls->Add(this->PF_ButtonUPDELRollBack);
			this->PF_PanelUPDEL->Controls->Add(this->PF_ButtonUPDELSave);
			this->PF_PanelUPDEL->Controls->Add(this->PF_ComboBoxUPDELId);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELId);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELWeightRestrictions);
			this->PF_PanelUPDEL->Controls->Add(this->PF_TextBoxUPDELWeightRestrictions);
			this->PF_PanelUPDEL->Controls->Add(this->PF_TextBoxUPDELWorkSchedule);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELWorkSchedule);
			this->PF_PanelUPDEL->Controls->Add(this->PF_TextBoxUPDELAddress);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELAddress);
			this->PF_PanelUPDEL->Controls->Add(this->PF_ComboBoxUPDELFTId);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELFTId);
			this->PF_PanelUPDEL->Controls->Add(this->PF_TextBoxUPDELName);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LableUPDELName);
			this->PF_PanelUPDEL->Controls->Add(this->PF_LabelUPDEL);
			this->PF_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->PF_PanelUPDEL->Name = L"PF_PanelUPDEL";
			this->PF_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->PF_PanelUPDEL->TabIndex = 12;
			// 
			// PF_LabelUPDELError
			// 
			this->PF_LabelUPDELError->AutoSize = true;
			this->PF_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->PF_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->PF_LabelUPDELError->Name = L"PF_LabelUPDELError";
			this->PF_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->PF_LabelUPDELError->TabIndex = 17;
			this->PF_LabelUPDELError->Text = L" ";
			// 
			// PF_ButtonUPDELDelete
			// 
			this->PF_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->PF_ButtonUPDELDelete->Name = L"PF_ButtonUPDELDelete";
			this->PF_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELDelete->TabIndex = 16;
			this->PF_ButtonUPDELDelete->Text = L"��������";
			this->PF_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::PF_ButtonUPDELDelete_Click);
			// 
			// PF_ButtonUPDELRollBack
			// 
			this->PF_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->PF_ButtonUPDELRollBack->Name = L"PF_ButtonUPDELRollBack";
			this->PF_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELRollBack->TabIndex = 15;
			this->PF_ButtonUPDELRollBack->Text = L"³������";
			this->PF_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::PF_ButtonUPDELRollBack_Click);
			// 
			// PF_ButtonUPDELSave
			// 
			this->PF_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->PF_ButtonUPDELSave->Name = L"PF_ButtonUPDELSave";
			this->PF_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELSave->TabIndex = 14;
			this->PF_ButtonUPDELSave->Text = L"��������";
			this->PF_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::PF_ButtonUPDELSave_Click);
			// 
			// PF_ComboBoxUPDELId
			// 
			this->PF_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PF_ComboBoxUPDELId->FormattingEnabled = true;
			this->PF_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->PF_ComboBoxUPDELId->Name = L"PF_ComboBoxUPDELId";
			this->PF_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->PF_ComboBoxUPDELId->TabIndex = 13;
			this->PF_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::PF_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// PF_LableUPDELId
			// 
			this->PF_LableUPDELId->Location = System::Drawing::Point(11, 40);
			this->PF_LableUPDELId->Name = L"PF_LableUPDELId";
			this->PF_LableUPDELId->Size = System::Drawing::Size(50, 20);
			this->PF_LableUPDELId->TabIndex = 12;
			this->PF_LableUPDELId->Text = L"Id";
			// 
			// PF_LableUPDELWeightRestrictions
			// 
			this->PF_LableUPDELWeightRestrictions->Location = System::Drawing::Point(531, 40);
			this->PF_LableUPDELWeightRestrictions->Name = L"PF_LableUPDELWeightRestrictions";
			this->PF_LableUPDELWeightRestrictions->Size = System::Drawing::Size(150, 20);
			this->PF_LableUPDELWeightRestrictions->TabIndex = 11;
			this->PF_LableUPDELWeightRestrictions->Text = L"��������� �� ���";
			// 
			// PF_TextBoxUPDELWeightRestrictions
			// 
			this->PF_TextBoxUPDELWeightRestrictions->Location = System::Drawing::Point(530, 64);
			this->PF_TextBoxUPDELWeightRestrictions->Name = L"PF_TextBoxUPDELWeightRestrictions";
			this->PF_TextBoxUPDELWeightRestrictions->Size = System::Drawing::Size(150, 22);
			this->PF_TextBoxUPDELWeightRestrictions->TabIndex = 10;
			// 
			// PF_TextBoxUPDELWorkSchedule
			// 
			this->PF_TextBoxUPDELWorkSchedule->Location = System::Drawing::Point(404, 64);
			this->PF_TextBoxUPDELWorkSchedule->Name = L"PF_TextBoxUPDELWorkSchedule";
			this->PF_TextBoxUPDELWorkSchedule->Size = System::Drawing::Size(120, 22);
			this->PF_TextBoxUPDELWorkSchedule->TabIndex = 9;
			// 
			// PF_LableUPDELWorkSchedule
			// 
			this->PF_LableUPDELWorkSchedule->Location = System::Drawing::Point(406, 40);
			this->PF_LableUPDELWorkSchedule->Name = L"PF_LableUPDELWorkSchedule";
			this->PF_LableUPDELWorkSchedule->Size = System::Drawing::Size(120, 20);
			this->PF_LableUPDELWorkSchedule->TabIndex = 8;
			this->PF_LableUPDELWorkSchedule->Text = L"������ ������";
			// 
			// PF_TextBoxUPDELAddress
			// 
			this->PF_TextBoxUPDELAddress->Location = System::Drawing::Point(298, 64);
			this->PF_TextBoxUPDELAddress->Name = L"PF_TextBoxUPDELAddress";
			this->PF_TextBoxUPDELAddress->Size = System::Drawing::Size(100, 22);
			this->PF_TextBoxUPDELAddress->TabIndex = 7;
			// 
			// PF_LableUPDELAddress
			// 
			this->PF_LableUPDELAddress->Location = System::Drawing::Point(300, 40);
			this->PF_LableUPDELAddress->Name = L"PF_LableUPDELAddress";
			this->PF_LableUPDELAddress->Size = System::Drawing::Size(100, 20);
			this->PF_LableUPDELAddress->TabIndex = 6;
			this->PF_LableUPDELAddress->Text = L"������";
			// 
			// PF_ComboBoxUPDELFTId
			// 
			this->PF_ComboBoxUPDELFTId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PF_ComboBoxUPDELFTId->FormattingEnabled = true;
			this->PF_ComboBoxUPDELFTId->Location = System::Drawing::Point(172, 63);
			this->PF_ComboBoxUPDELFTId->Name = L"PF_ComboBoxUPDELFTId";
			this->PF_ComboBoxUPDELFTId->Size = System::Drawing::Size(120, 24);
			this->PF_ComboBoxUPDELFTId->TabIndex = 5;
			// 
			// PF_LableUPDELFTId
			// 
			this->PF_LableUPDELFTId->Location = System::Drawing::Point(174, 40);
			this->PF_LableUPDELFTId->Name = L"PF_LableUPDELFTId";
			this->PF_LableUPDELFTId->Size = System::Drawing::Size(120, 20);
			this->PF_LableUPDELFTId->TabIndex = 4;
			this->PF_LableUPDELFTId->Text = L"��� ��������";
			// 
			// PF_TextBoxUPDELName
			// 
			this->PF_TextBoxUPDELName->Location = System::Drawing::Point(66, 64);
			this->PF_TextBoxUPDELName->Name = L"PF_TextBoxUPDELName";
			this->PF_TextBoxUPDELName->Size = System::Drawing::Size(100, 22);
			this->PF_TextBoxUPDELName->TabIndex = 2;
			// 
			// PF_LableUPDELName
			// 
			this->PF_LableUPDELName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PF_LableUPDELName->Location = System::Drawing::Point(67, 40);
			this->PF_LableUPDELName->Name = L"PF_LableUPDELName";
			this->PF_LableUPDELName->Size = System::Drawing::Size(100, 20);
			this->PF_LableUPDELName->TabIndex = 1;
			this->PF_LableUPDELName->Text = L"�����";
			// 
			// PF_LabelUPDEL
			// 
			this->PF_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->PF_LabelUPDEL->Name = L"PF_LabelUPDEL";
			this->PF_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->PF_LabelUPDEL->TabIndex = 0;
			this->PF_LabelUPDEL->Text = L"����������/�������� ��������";
			// 
			// PF_PanelAdd
			// 
			this->PF_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PF_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->PF_PanelAdd->Controls->Add(this->PF_LabelAddError);
			this->PF_PanelAdd->Controls->Add(this->PF_LableAddWeightRestrictions);
			this->PF_PanelAdd->Controls->Add(this->PF_TextBoxAddWeightRestrictions);
			this->PF_PanelAdd->Controls->Add(this->PF_TextBoxAddWorkSchedule);
			this->PF_PanelAdd->Controls->Add(this->PF_LableAddWorkSchedule);
			this->PF_PanelAdd->Controls->Add(this->PF_TextBoxAddAddress);
			this->PF_PanelAdd->Controls->Add(this->PF_LableAddAddress);
			this->PF_PanelAdd->Controls->Add(this->PF_ComboBoxAddFTId);
			this->PF_PanelAdd->Controls->Add(this->PF_LableAddFTId);
			this->PF_PanelAdd->Controls->Add(this->PF_ButtonAdd);
			this->PF_PanelAdd->Controls->Add(this->PF_TextBoxAddName);
			this->PF_PanelAdd->Controls->Add(this->PF_LableAddName);
			this->PF_PanelAdd->Controls->Add(this->PF_LabelAdd);
			this->PF_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->PF_PanelAdd->Name = L"PF_PanelAdd";
			this->PF_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->PF_PanelAdd->TabIndex = 1;
			// 
			// PF_LabelAddError
			// 
			this->PF_LabelAddError->AutoSize = true;
			this->PF_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->PF_LabelAddError->Location = System::Drawing::Point(116, 105);
			this->PF_LabelAddError->Name = L"PF_LabelAddError";
			this->PF_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->PF_LabelAddError->TabIndex = 12;
			this->PF_LabelAddError->Text = L" ";
			// 
			// PF_LableAddWeightRestrictions
			// 
			this->PF_LableAddWeightRestrictions->Location = System::Drawing::Point(474, 40);
			this->PF_LableAddWeightRestrictions->Name = L"PF_LableAddWeightRestrictions";
			this->PF_LableAddWeightRestrictions->Size = System::Drawing::Size(150, 20);
			this->PF_LableAddWeightRestrictions->TabIndex = 11;
			this->PF_LableAddWeightRestrictions->Text = L"��������� �� ���";
			// 
			// PF_TextBoxAddWeightRestrictions
			// 
			this->PF_TextBoxAddWeightRestrictions->Location = System::Drawing::Point(474, 64);
			this->PF_TextBoxAddWeightRestrictions->Name = L"PF_TextBoxAddWeightRestrictions";
			this->PF_TextBoxAddWeightRestrictions->Size = System::Drawing::Size(150, 22);
			this->PF_TextBoxAddWeightRestrictions->TabIndex = 10;
			// 
			// PF_TextBoxAddWorkSchedule
			// 
			this->PF_TextBoxAddWorkSchedule->Location = System::Drawing::Point(348, 64);
			this->PF_TextBoxAddWorkSchedule->Name = L"PF_TextBoxAddWorkSchedule";
			this->PF_TextBoxAddWorkSchedule->Size = System::Drawing::Size(120, 22);
			this->PF_TextBoxAddWorkSchedule->TabIndex = 9;
			// 
			// PF_LableAddWorkSchedule
			// 
			this->PF_LableAddWorkSchedule->Location = System::Drawing::Point(349, 40);
			this->PF_LableAddWorkSchedule->Name = L"PF_LableAddWorkSchedule";
			this->PF_LableAddWorkSchedule->Size = System::Drawing::Size(120, 20);
			this->PF_LableAddWorkSchedule->TabIndex = 8;
			this->PF_LableAddWorkSchedule->Text = L"������ ������";
			// 
			// PF_TextBoxAddAddress
			// 
			this->PF_TextBoxAddAddress->Location = System::Drawing::Point(242, 64);
			this->PF_TextBoxAddAddress->Name = L"PF_TextBoxAddAddress";
			this->PF_TextBoxAddAddress->Size = System::Drawing::Size(100, 22);
			this->PF_TextBoxAddAddress->TabIndex = 7;
			// 
			// PF_LableAddAddress
			// 
			this->PF_LableAddAddress->Location = System::Drawing::Point(243, 40);
			this->PF_LableAddAddress->Name = L"PF_LableAddAddress";
			this->PF_LableAddAddress->Size = System::Drawing::Size(100, 20);
			this->PF_LableAddAddress->TabIndex = 6;
			this->PF_LableAddAddress->Text = L"������";
			// 
			// PF_ComboBoxAddFTId
			// 
			this->PF_ComboBoxAddFTId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PF_ComboBoxAddFTId->FormattingEnabled = true;
			this->PF_ComboBoxAddFTId->Location = System::Drawing::Point(116, 63);
			this->PF_ComboBoxAddFTId->Name = L"PF_ComboBoxAddFTId";
			this->PF_ComboBoxAddFTId->Size = System::Drawing::Size(120, 24);
			this->PF_ComboBoxAddFTId->TabIndex = 5;
			// 
			// PF_LableAddFTId
			// 
			this->PF_LableAddFTId->Location = System::Drawing::Point(117, 40);
			this->PF_LableAddFTId->Name = L"PF_LableAddFTId";
			this->PF_LableAddFTId->Size = System::Drawing::Size(120, 20);
			this->PF_LableAddFTId->TabIndex = 4;
			this->PF_LableAddFTId->Text = L"��� ��������";
			// 
			// PF_ButtonAdd
			// 
			this->PF_ButtonAdd->Location = System::Drawing::Point(10, 101);
			this->PF_ButtonAdd->Name = L"PF_ButtonAdd";
			this->PF_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonAdd->TabIndex = 3;
			this->PF_ButtonAdd->Text = L"������";
			this->PF_ButtonAdd->UseVisualStyleBackColor = true;
			this->PF_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::PF_ButtonAdd_Click);
			// 
			// PF_TextBoxAddName
			// 
			this->PF_TextBoxAddName->Location = System::Drawing::Point(10, 64);
			this->PF_TextBoxAddName->Name = L"PF_TextBoxAddName";
			this->PF_TextBoxAddName->Size = System::Drawing::Size(100, 22);
			this->PF_TextBoxAddName->TabIndex = 2;
			// 
			// PF_LableAddName
			// 
			this->PF_LableAddName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LableAddName->Location = System::Drawing::Point(10, 40);
			this->PF_LableAddName->Name = L"PF_LableAddName";
			this->PF_LableAddName->Size = System::Drawing::Size(100, 20);
			this->PF_LableAddName->TabIndex = 1;
			this->PF_LableAddName->Text = L"�����";
			// 
			// PF_LabelAdd
			// 
			this->PF_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->PF_LabelAdd->Name = L"PF_LabelAdd";
			this->PF_LabelAdd->Size = System::Drawing::Size(1107, 30);
			this->PF_LabelAdd->TabIndex = 0;
			this->PF_LabelAdd->Text = L"������ ���� ��������";
			// 
			// PS_Page
			// 
			this->PS_Page->BackColor = System::Drawing::Color::LightGray;
			this->PS_Page->Controls->Add(this->PS_PanelList);
			this->PS_Page->Controls->Add(this->PS_PanelUPDEL);
			this->PS_Page->Controls->Add(this->PS_PanelAdd);
			this->PS_Page->Location = System::Drawing::Point(4, 22);
			this->PS_Page->Name = L"PS_Page";
			this->PS_Page->Padding = System::Windows::Forms::Padding(3);
			this->PS_Page->Size = System::Drawing::Size(1132, 673);
			this->PS_Page->TabIndex = 2;
			this->PS_Page->Text = L"ParcelStatuses";
			// 
			// PS_PanelList
			// 
			this->PS_PanelList->BackColor = System::Drawing::Color::Silver;
			this->PS_PanelList->Controls->Add(this->PS_DataGridView);
			this->PS_PanelList->Controls->Add(this->PS_LabelList);
			this->PS_PanelList->Location = System::Drawing::Point(6, 288);
			this->PS_PanelList->Name = L"PS_PanelList";
			this->PS_PanelList->Size = System::Drawing::Size(1120, 379);
			this->PS_PanelList->TabIndex = 5;
			// 
			// PS_DataGridView
			// 
			this->PS_DataGridView->AllowUserToAddRows = false;
			this->PS_DataGridView->AllowUserToDeleteRows = false;
			this->PS_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PS_DataGridView->Location = System::Drawing::Point(4, 44);
			this->PS_DataGridView->Name = L"PS_DataGridView";
			this->PS_DataGridView->ReadOnly = true;
			this->PS_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->PS_DataGridView->TabIndex = 3;
			// 
			// PS_LabelList
			// 
			this->PS_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PS_LabelList->Location = System::Drawing::Point(10, 10);
			this->PS_LabelList->Name = L"PS_LabelList";
			this->PS_LabelList->Size = System::Drawing::Size(1107, 30);
			this->PS_LabelList->TabIndex = 2;
			this->PS_LabelList->Text = L"�� ������� �������";
			// 
			// PS_PanelUPDEL
			// 
			this->PS_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->PS_PanelUPDEL->Controls->Add(this->PS_LabelUPDELError);
			this->PS_PanelUPDEL->Controls->Add(this->PS_ButtonUPDELDelete);
			this->PS_PanelUPDEL->Controls->Add(this->PS_ButtonUPDELRollBack);
			this->PS_PanelUPDEL->Controls->Add(this->PS_ButtonUPDELSave);
			this->PS_PanelUPDEL->Controls->Add(this->PS_TextBoxUPDELStatus);
			this->PS_PanelUPDEL->Controls->Add(this->PS_ComboBoxUPDELId);
			this->PS_PanelUPDEL->Controls->Add(this->PS_LabelUPDELStatus);
			this->PS_PanelUPDEL->Controls->Add(this->PS_LabelUPDELId);
			this->PS_PanelUPDEL->Controls->Add(this->PS_LabelUPDEL);
			this->PS_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PS_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->PS_PanelUPDEL->Name = L"PS_PanelUPDEL";
			this->PS_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->PS_PanelUPDEL->TabIndex = 4;
			// 
			// PS_LabelUPDELError
			// 
			this->PS_LabelUPDELError->AutoSize = true;
			this->PS_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->PS_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->PS_LabelUPDELError->Name = L"PS_LabelUPDELError";
			this->PS_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->PS_LabelUPDELError->TabIndex = 13;
			this->PS_LabelUPDELError->Text = L" ";
			// 
			// PS_ButtonUPDELDelete
			// 
			this->PS_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->PS_ButtonUPDELDelete->Name = L"PS_ButtonUPDELDelete";
			this->PS_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->PS_ButtonUPDELDelete->TabIndex = 8;
			this->PS_ButtonUPDELDelete->Text = L"��������";
			this->PS_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->PS_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::PS_ButtonUPDELDelete_Click);
			// 
			// PS_ButtonUPDELRollBack
			// 
			this->PS_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->PS_ButtonUPDELRollBack->Name = L"PS_ButtonUPDELRollBack";
			this->PS_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->PS_ButtonUPDELRollBack->TabIndex = 7;
			this->PS_ButtonUPDELRollBack->Text = L"³������";
			this->PS_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->PS_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::PS_ButtonUPDELRollBack_Click);
			// 
			// PS_ButtonUPDELSave
			// 
			this->PS_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->PS_ButtonUPDELSave->Name = L"PS_ButtonUPDELSave";
			this->PS_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->PS_ButtonUPDELSave->TabIndex = 6;
			this->PS_ButtonUPDELSave->Text = L"��������";
			this->PS_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->PS_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::PS_ButtonUPDELSave_Click);
			// 
			// PS_TextBoxUPDELStatus
			// 
			this->PS_TextBoxUPDELStatus->Location = System::Drawing::Point(69, 64);
			this->PS_TextBoxUPDELStatus->Name = L"PS_TextBoxUPDELStatus";
			this->PS_TextBoxUPDELStatus->Size = System::Drawing::Size(150, 22);
			this->PS_TextBoxUPDELStatus->TabIndex = 5;
			// 
			// PS_ComboBoxUPDELId
			// 
			this->PS_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PS_ComboBoxUPDELId->FormattingEnabled = true;
			this->PS_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->PS_ComboBoxUPDELId->Name = L"PS_ComboBoxUPDELId";
			this->PS_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->PS_ComboBoxUPDELId->TabIndex = 4;
			this->PS_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::PS_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// PS_LabelUPDELStatus
			// 
			this->PS_LabelUPDELStatus->Location = System::Drawing::Point(66, 40);
			this->PS_LabelUPDELStatus->Name = L"PS_LabelUPDELStatus";
			this->PS_LabelUPDELStatus->Size = System::Drawing::Size(150, 20);
			this->PS_LabelUPDELStatus->TabIndex = 3;
			this->PS_LabelUPDELStatus->Text = L"������";
			// 
			// PS_LabelUPDELId
			// 
			this->PS_LabelUPDELId->Location = System::Drawing::Point(10, 40);
			this->PS_LabelUPDELId->Name = L"PS_LabelUPDELId";
			this->PS_LabelUPDELId->Size = System::Drawing::Size(50, 20);
			this->PS_LabelUPDELId->TabIndex = 2;
			this->PS_LabelUPDELId->Text = L"Id";
			// 
			// PS_LabelUPDEL
			// 
			this->PS_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PS_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->PS_LabelUPDEL->Name = L"PS_LabelUPDEL";
			this->PS_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->PS_LabelUPDEL->TabIndex = 1;
			this->PS_LabelUPDEL->Text = L"����������/�������� ������ �������";
			// 
			// PS_PanelAdd
			// 
			this->PS_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PS_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->PS_PanelAdd->Controls->Add(this->PS_LabelAddError);
			this->PS_PanelAdd->Controls->Add(this->PS_ButtonAdd);
			this->PS_PanelAdd->Controls->Add(this->PS_TextBoxAddStatus);
			this->PS_PanelAdd->Controls->Add(this->PS_LableAddStatus);
			this->PS_PanelAdd->Controls->Add(this->PS_LabelAdd);
			this->PS_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PS_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->PS_PanelAdd->Name = L"PS_PanelAdd";
			this->PS_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->PS_PanelAdd->TabIndex = 3;
			// 
			// PS_LabelAddError
			// 
			this->PS_LabelAddError->AutoSize = true;
			this->PS_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->PS_LabelAddError->Location = System::Drawing::Point(116, 104);
			this->PS_LabelAddError->Name = L"PS_LabelAddError";
			this->PS_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->PS_LabelAddError->TabIndex = 13;
			this->PS_LabelAddError->Text = L" ";
			// 
			// PS_ButtonAdd
			// 
			this->PS_ButtonAdd->Location = System::Drawing::Point(10, 100);
			this->PS_ButtonAdd->Name = L"PS_ButtonAdd";
			this->PS_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->PS_ButtonAdd->TabIndex = 3;
			this->PS_ButtonAdd->Text = L"������";
			this->PS_ButtonAdd->UseVisualStyleBackColor = true;
			this->PS_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::PS_ButtonAdd_Click);
			// 
			// PS_TextBoxAddStatus
			// 
			this->PS_TextBoxAddStatus->Location = System::Drawing::Point(10, 63);
			this->PS_TextBoxAddStatus->Name = L"PS_TextBoxAddStatus";
			this->PS_TextBoxAddStatus->Size = System::Drawing::Size(150, 22);
			this->PS_TextBoxAddStatus->TabIndex = 2;
			// 
			// PS_LableAddStatus
			// 
			this->PS_LableAddStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PS_LableAddStatus->Location = System::Drawing::Point(10, 40);
			this->PS_LableAddStatus->Name = L"PS_LableAddStatus";
			this->PS_LableAddStatus->Size = System::Drawing::Size(150, 20);
			this->PS_LableAddStatus->TabIndex = 1;
			this->PS_LableAddStatus->Text = L"������";
			// 
			// PS_LabelAdd
			// 
			this->PS_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PS_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->PS_LabelAdd->Name = L"PS_LabelAdd";
			this->PS_LabelAdd->Size = System::Drawing::Size(1107, 30);
			this->PS_LabelAdd->TabIndex = 0;
			this->PS_LabelAdd->Text = L"������ ����� ������ �������";
			// 
			// Co_Page
			// 
			this->Co_Page->BackColor = System::Drawing::Color::LightGray;
			this->Co_Page->Controls->Add(this->Co_PanelList);
			this->Co_Page->Controls->Add(this->Co_PanelUPDEL);
			this->Co_Page->Controls->Add(this->Co_PanelAdd);
			this->Co_Page->Location = System::Drawing::Point(4, 22);
			this->Co_Page->Name = L"Co_Page";
			this->Co_Page->Padding = System::Windows::Forms::Padding(3);
			this->Co_Page->Size = System::Drawing::Size(1132, 673);
			this->Co_Page->TabIndex = 3;
			this->Co_Page->Text = L"Couriers";
			// 
			// Co_PanelList
			// 
			this->Co_PanelList->BackColor = System::Drawing::Color::Silver;
			this->Co_PanelList->Controls->Add(this->Co_DataGridView);
			this->Co_PanelList->Controls->Add(this->Co_LabelList);
			this->Co_PanelList->Location = System::Drawing::Point(6, 288);
			this->Co_PanelList->Name = L"Co_PanelList";
			this->Co_PanelList->Size = System::Drawing::Size(1120, 379);
			this->Co_PanelList->TabIndex = 16;
			// 
			// Co_DataGridView
			// 
			this->Co_DataGridView->AllowUserToAddRows = false;
			this->Co_DataGridView->AllowUserToDeleteRows = false;
			this->Co_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Co_DataGridView->Location = System::Drawing::Point(4, 44);
			this->Co_DataGridView->Name = L"Co_DataGridView";
			this->Co_DataGridView->ReadOnly = true;
			this->Co_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->Co_DataGridView->TabIndex = 3;
			// 
			// Co_LabelList
			// 
			this->Co_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_LabelList->Location = System::Drawing::Point(10, 10);
			this->Co_LabelList->Name = L"Co_LabelList";
			this->Co_LabelList->Size = System::Drawing::Size(1107, 30);
			this->Co_LabelList->TabIndex = 2;
			this->Co_LabelList->Text = L"�� ���\'���";
			// 
			// Co_PanelUPDEL
			// 
			this->Co_PanelUPDEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Co_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->Co_PanelUPDEL->Controls->Add(this->Co_LabelUPDELError);
			this->Co_PanelUPDEL->Controls->Add(this->Co_ButtonUPDELDelete);
			this->Co_PanelUPDEL->Controls->Add(this->Co_ButtonUPDELRollBack);
			this->Co_PanelUPDEL->Controls->Add(this->Co_ButtonUPDELSave);
			this->Co_PanelUPDEL->Controls->Add(this->Co_ComboBoxUPDELId);
			this->Co_PanelUPDEL->Controls->Add(this->Co_LableUPDELId);
			this->Co_PanelUPDEL->Controls->Add(this->Co_TextBoxUPDELCity);
			this->Co_PanelUPDEL->Controls->Add(this->Co_LableUPDELPaId);
			this->Co_PanelUPDEL->Controls->Add(this->Co_ComboBoxUPDELPaId);
			this->Co_PanelUPDEL->Controls->Add(this->Co_LableUPDELCity);
			this->Co_PanelUPDEL->Controls->Add(this->Co_TextBoxUPDELName);
			this->Co_PanelUPDEL->Controls->Add(this->Co_LableUPDELName);
			this->Co_PanelUPDEL->Controls->Add(this->Co_LabelUPDEL);
			this->Co_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->Co_PanelUPDEL->Name = L"Co_PanelUPDEL";
			this->Co_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->Co_PanelUPDEL->TabIndex = 15;
			// 
			// Co_LabelUPDELError
			// 
			this->Co_LabelUPDELError->AutoSize = true;
			this->Co_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->Co_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->Co_LabelUPDELError->Name = L"Co_LabelUPDELError";
			this->Co_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->Co_LabelUPDELError->TabIndex = 17;
			this->Co_LabelUPDELError->Text = L" ";
			// 
			// Co_ButtonUPDELDelete
			// 
			this->Co_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->Co_ButtonUPDELDelete->Name = L"Co_ButtonUPDELDelete";
			this->Co_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->Co_ButtonUPDELDelete->TabIndex = 16;
			this->Co_ButtonUPDELDelete->Text = L"��������";
			this->Co_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->Co_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::Co_ButtonUPDELDelete_Click);
			// 
			// Co_ButtonUPDELRollBack
			// 
			this->Co_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->Co_ButtonUPDELRollBack->Name = L"Co_ButtonUPDELRollBack";
			this->Co_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->Co_ButtonUPDELRollBack->TabIndex = 15;
			this->Co_ButtonUPDELRollBack->Text = L"³������";
			this->Co_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->Co_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::Co_ButtonUPDELRollBack_Click);
			// 
			// Co_ButtonUPDELSave
			// 
			this->Co_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->Co_ButtonUPDELSave->Name = L"Co_ButtonUPDELSave";
			this->Co_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->Co_ButtonUPDELSave->TabIndex = 14;
			this->Co_ButtonUPDELSave->Text = L"��������";
			this->Co_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->Co_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::Co_ButtonUPDELSave_Click);
			// 
			// Co_ComboBoxUPDELId
			// 
			this->Co_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Co_ComboBoxUPDELId->FormattingEnabled = true;
			this->Co_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->Co_ComboBoxUPDELId->Name = L"Co_ComboBoxUPDELId";
			this->Co_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->Co_ComboBoxUPDELId->TabIndex = 13;
			this->Co_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::Co_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// Co_LableUPDELId
			// 
			this->Co_LableUPDELId->Location = System::Drawing::Point(11, 40);
			this->Co_LableUPDELId->Name = L"Co_LableUPDELId";
			this->Co_LableUPDELId->Size = System::Drawing::Size(50, 20);
			this->Co_LableUPDELId->TabIndex = 12;
			this->Co_LableUPDELId->Text = L"Id";
			// 
			// Co_TextBoxUPDELCity
			// 
			this->Co_TextBoxUPDELCity->Location = System::Drawing::Point(172, 64);
			this->Co_TextBoxUPDELCity->Name = L"Co_TextBoxUPDELCity";
			this->Co_TextBoxUPDELCity->Size = System::Drawing::Size(122, 22);
			this->Co_TextBoxUPDELCity->TabIndex = 7;
			// 
			// Co_LableUPDELPaId
			// 
			this->Co_LableUPDELPaId->Location = System::Drawing::Point(300, 40);
			this->Co_LableUPDELPaId->Name = L"Co_LableUPDELPaId";
			this->Co_LableUPDELPaId->Size = System::Drawing::Size(120, 20);
			this->Co_LableUPDELPaId->TabIndex = 6;
			this->Co_LableUPDELPaId->Text = L"�������";
			// 
			// Co_ComboBoxUPDELPaId
			// 
			this->Co_ComboBoxUPDELPaId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Co_ComboBoxUPDELPaId->FormattingEnabled = true;
			this->Co_ComboBoxUPDELPaId->Location = System::Drawing::Point(300, 62);
			this->Co_ComboBoxUPDELPaId->Name = L"Co_ComboBoxUPDELPaId";
			this->Co_ComboBoxUPDELPaId->Size = System::Drawing::Size(120, 24);
			this->Co_ComboBoxUPDELPaId->TabIndex = 5;
			// 
			// Co_LableUPDELCity
			// 
			this->Co_LableUPDELCity->Location = System::Drawing::Point(174, 40);
			this->Co_LableUPDELCity->Name = L"Co_LableUPDELCity";
			this->Co_LableUPDELCity->Size = System::Drawing::Size(120, 20);
			this->Co_LableUPDELCity->TabIndex = 4;
			this->Co_LableUPDELCity->Text = L"̳��� ������";
			// 
			// Co_TextBoxUPDELName
			// 
			this->Co_TextBoxUPDELName->Location = System::Drawing::Point(66, 64);
			this->Co_TextBoxUPDELName->Name = L"Co_TextBoxUPDELName";
			this->Co_TextBoxUPDELName->Size = System::Drawing::Size(100, 22);
			this->Co_TextBoxUPDELName->TabIndex = 2;
			// 
			// Co_LableUPDELName
			// 
			this->Co_LableUPDELName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Co_LableUPDELName->Location = System::Drawing::Point(67, 40);
			this->Co_LableUPDELName->Name = L"Co_LableUPDELName";
			this->Co_LableUPDELName->Size = System::Drawing::Size(100, 20);
			this->Co_LableUPDELName->TabIndex = 1;
			this->Co_LableUPDELName->Text = L"��\'�";
			// 
			// Co_LabelUPDEL
			// 
			this->Co_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->Co_LabelUPDEL->Name = L"Co_LabelUPDEL";
			this->Co_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->Co_LabelUPDEL->TabIndex = 0;
			this->Co_LabelUPDEL->Text = L"����������/�������� ���\'���";
			// 
			// Co_PanelAdd
			// 
			this->Co_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Co_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->Co_PanelAdd->Controls->Add(this->Co_LabelAddError);
			this->Co_PanelAdd->Controls->Add(this->Co_TextBoxAddCity);
			this->Co_PanelAdd->Controls->Add(this->Co_LableAddPaId);
			this->Co_PanelAdd->Controls->Add(this->Co_ComboBoxAddPaId);
			this->Co_PanelAdd->Controls->Add(this->Co_LableAddCity);
			this->Co_PanelAdd->Controls->Add(this->Co_ButtonAdd);
			this->Co_PanelAdd->Controls->Add(this->Co_TextBoxAddName);
			this->Co_PanelAdd->Controls->Add(this->Co_LableAddName);
			this->Co_PanelAdd->Controls->Add(this->Co_LabelAdd);
			this->Co_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->Co_PanelAdd->Name = L"Co_PanelAdd";
			this->Co_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->Co_PanelAdd->TabIndex = 14;
			// 
			// Co_LabelAddError
			// 
			this->Co_LabelAddError->AutoSize = true;
			this->Co_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->Co_LabelAddError->Location = System::Drawing::Point(116, 105);
			this->Co_LabelAddError->Name = L"Co_LabelAddError";
			this->Co_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->Co_LabelAddError->TabIndex = 14;
			this->Co_LabelAddError->Text = L" ";
			// 
			// Co_TextBoxAddCity
			// 
			this->Co_TextBoxAddCity->Location = System::Drawing::Point(116, 64);
			this->Co_TextBoxAddCity->Name = L"Co_TextBoxAddCity";
			this->Co_TextBoxAddCity->Size = System::Drawing::Size(121, 22);
			this->Co_TextBoxAddCity->TabIndex = 7;
			// 
			// Co_LableAddPaId
			// 
			this->Co_LableAddPaId->Location = System::Drawing::Point(243, 40);
			this->Co_LableAddPaId->Name = L"Co_LableAddPaId";
			this->Co_LableAddPaId->Size = System::Drawing::Size(120, 20);
			this->Co_LableAddPaId->TabIndex = 6;
			this->Co_LableAddPaId->Text = L"�������";
			// 
			// Co_ComboBoxAddPaId
			// 
			this->Co_ComboBoxAddPaId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Co_ComboBoxAddPaId->FormattingEnabled = true;
			this->Co_ComboBoxAddPaId->Location = System::Drawing::Point(243, 63);
			this->Co_ComboBoxAddPaId->Name = L"Co_ComboBoxAddPaId";
			this->Co_ComboBoxAddPaId->Size = System::Drawing::Size(120, 24);
			this->Co_ComboBoxAddPaId->TabIndex = 5;
			// 
			// Co_LableAddCity
			// 
			this->Co_LableAddCity->Location = System::Drawing::Point(117, 40);
			this->Co_LableAddCity->Name = L"Co_LableAddCity";
			this->Co_LableAddCity->Size = System::Drawing::Size(120, 20);
			this->Co_LableAddCity->TabIndex = 4;
			this->Co_LableAddCity->Text = L"̳��� ������";
			// 
			// Co_ButtonAdd
			// 
			this->Co_ButtonAdd->Location = System::Drawing::Point(10, 101);
			this->Co_ButtonAdd->Name = L"Co_ButtonAdd";
			this->Co_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->Co_ButtonAdd->TabIndex = 3;
			this->Co_ButtonAdd->Text = L"������";
			this->Co_ButtonAdd->UseVisualStyleBackColor = true;
			this->Co_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::Co_ButtonAdd_Click);
			// 
			// Co_TextBoxAddName
			// 
			this->Co_TextBoxAddName->Location = System::Drawing::Point(10, 64);
			this->Co_TextBoxAddName->Name = L"Co_TextBoxAddName";
			this->Co_TextBoxAddName->Size = System::Drawing::Size(100, 22);
			this->Co_TextBoxAddName->TabIndex = 2;
			// 
			// Co_LableAddName
			// 
			this->Co_LableAddName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_LableAddName->Location = System::Drawing::Point(10, 40);
			this->Co_LableAddName->Name = L"Co_LableAddName";
			this->Co_LableAddName->Size = System::Drawing::Size(100, 20);
			this->Co_LableAddName->TabIndex = 1;
			this->Co_LableAddName->Text = L"��\'�";
			// 
			// Co_LabelAdd
			// 
			this->Co_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Co_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->Co_LabelAdd->Name = L"Co_LabelAdd";
			this->Co_LabelAdd->Size = System::Drawing::Size(1107, 30);
			this->Co_LabelAdd->TabIndex = 0;
			this->Co_LabelAdd->Text = L"������ ������ ���\'���";
			// 
			// Cl_Page
			// 
			this->Cl_Page->BackColor = System::Drawing::Color::LightGray;
			this->Cl_Page->Controls->Add(this->Cl_PanelList);
			this->Cl_Page->Controls->Add(this->Cl_PanelUPDEL);
			this->Cl_Page->Controls->Add(this->Cl_PanelAdd);
			this->Cl_Page->Location = System::Drawing::Point(4, 22);
			this->Cl_Page->Name = L"Cl_Page";
			this->Cl_Page->Padding = System::Windows::Forms::Padding(3);
			this->Cl_Page->Size = System::Drawing::Size(1132, 673);
			this->Cl_Page->TabIndex = 4;
			this->Cl_Page->Text = L"Clients";
			// 
			// Cl_PanelList
			// 
			this->Cl_PanelList->BackColor = System::Drawing::Color::Silver;
			this->Cl_PanelList->Controls->Add(this->Cl_DataGridView);
			this->Cl_PanelList->Controls->Add(this->Cl_LabelList);
			this->Cl_PanelList->Location = System::Drawing::Point(6, 288);
			this->Cl_PanelList->Name = L"Cl_PanelList";
			this->Cl_PanelList->Size = System::Drawing::Size(1120, 379);
			this->Cl_PanelList->TabIndex = 19;
			// 
			// Cl_DataGridView
			// 
			this->Cl_DataGridView->AllowUserToAddRows = false;
			this->Cl_DataGridView->AllowUserToDeleteRows = false;
			this->Cl_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Cl_DataGridView->Location = System::Drawing::Point(4, 44);
			this->Cl_DataGridView->Name = L"Cl_DataGridView";
			this->Cl_DataGridView->ReadOnly = true;
			this->Cl_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->Cl_DataGridView->TabIndex = 3;
			// 
			// Cl_LabelList
			// 
			this->Cl_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_LabelList->Location = System::Drawing::Point(10, 10);
			this->Cl_LabelList->Name = L"Cl_LabelList";
			this->Cl_LabelList->Size = System::Drawing::Size(1107, 30);
			this->Cl_LabelList->TabIndex = 2;
			this->Cl_LabelList->Text = L"�� �볺���";
			// 
			// Cl_PanelUPDEL
			// 
			this->Cl_PanelUPDEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Cl_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LabelUPDELError);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_TextBoxUPDELEmail);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_ButtonUPDELDelete);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_ButtonUPDELRollBack);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_ButtonUPDELSave);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_ComboBoxUPDELId);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LableUPDELId);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_TextBoxUPDELContactNumber);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LableUPDELEmail);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LableUPDELContactNumber);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_TextBoxUPDELName);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LableUPDELName);
			this->Cl_PanelUPDEL->Controls->Add(this->Cl_LabelUPDEL);
			this->Cl_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->Cl_PanelUPDEL->Name = L"Cl_PanelUPDEL";
			this->Cl_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->Cl_PanelUPDEL->TabIndex = 18;
			// 
			// Cl_LabelUPDELError
			// 
			this->Cl_LabelUPDELError->AutoSize = true;
			this->Cl_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->Cl_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->Cl_LabelUPDELError->Name = L"Cl_LabelUPDELError";
			this->Cl_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->Cl_LabelUPDELError->TabIndex = 18;
			this->Cl_LabelUPDELError->Text = L" ";
			// 
			// Cl_TextBoxUPDELEmail
			// 
			this->Cl_TextBoxUPDELEmail->Location = System::Drawing::Point(323, 64);
			this->Cl_TextBoxUPDELEmail->Name = L"Cl_TextBoxUPDELEmail";
			this->Cl_TextBoxUPDELEmail->Size = System::Drawing::Size(122, 22);
			this->Cl_TextBoxUPDELEmail->TabIndex = 17;
			// 
			// Cl_ButtonUPDELDelete
			// 
			this->Cl_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->Cl_ButtonUPDELDelete->Name = L"Cl_ButtonUPDELDelete";
			this->Cl_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->Cl_ButtonUPDELDelete->TabIndex = 16;
			this->Cl_ButtonUPDELDelete->Text = L"��������";
			this->Cl_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->Cl_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::Cl_ButtonUPDELDelete_Click);
			// 
			// Cl_ButtonUPDELRollBack
			// 
			this->Cl_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->Cl_ButtonUPDELRollBack->Name = L"Cl_ButtonUPDELRollBack";
			this->Cl_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->Cl_ButtonUPDELRollBack->TabIndex = 15;
			this->Cl_ButtonUPDELRollBack->Text = L"³������";
			this->Cl_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->Cl_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::Cl_ButtonUPDELRollBack_Click);
			// 
			// Cl_ButtonUPDELSave
			// 
			this->Cl_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->Cl_ButtonUPDELSave->Name = L"Cl_ButtonUPDELSave";
			this->Cl_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->Cl_ButtonUPDELSave->TabIndex = 14;
			this->Cl_ButtonUPDELSave->Text = L"��������";
			this->Cl_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->Cl_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::Cl_ButtonUPDELSave_Click);
			// 
			// Cl_ComboBoxUPDELId
			// 
			this->Cl_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Cl_ComboBoxUPDELId->FormattingEnabled = true;
			this->Cl_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->Cl_ComboBoxUPDELId->Name = L"Cl_ComboBoxUPDELId";
			this->Cl_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->Cl_ComboBoxUPDELId->TabIndex = 13;
			this->Cl_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::Cl_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// Cl_LableUPDELId
			// 
			this->Cl_LableUPDELId->Location = System::Drawing::Point(11, 40);
			this->Cl_LableUPDELId->Name = L"Cl_LableUPDELId";
			this->Cl_LableUPDELId->Size = System::Drawing::Size(50, 20);
			this->Cl_LableUPDELId->TabIndex = 12;
			this->Cl_LableUPDELId->Text = L"Id";
			// 
			// Cl_TextBoxUPDELContactNumber
			// 
			this->Cl_TextBoxUPDELContactNumber->Location = System::Drawing::Point(172, 64);
			this->Cl_TextBoxUPDELContactNumber->Name = L"Cl_TextBoxUPDELContactNumber";
			this->Cl_TextBoxUPDELContactNumber->Size = System::Drawing::Size(142, 22);
			this->Cl_TextBoxUPDELContactNumber->TabIndex = 7;
			// 
			// Cl_LableUPDELEmail
			// 
			this->Cl_LableUPDELEmail->Location = System::Drawing::Point(325, 40);
			this->Cl_LableUPDELEmail->Name = L"Cl_LableUPDELEmail";
			this->Cl_LableUPDELEmail->Size = System::Drawing::Size(120, 20);
			this->Cl_LableUPDELEmail->TabIndex = 6;
			this->Cl_LableUPDELEmail->Text = L"Email";
			// 
			// Cl_LableUPDELContactNumber
			// 
			this->Cl_LableUPDELContactNumber->Location = System::Drawing::Point(174, 40);
			this->Cl_LableUPDELContactNumber->Name = L"Cl_LableUPDELContactNumber";
			this->Cl_LableUPDELContactNumber->Size = System::Drawing::Size(140, 20);
			this->Cl_LableUPDELContactNumber->TabIndex = 4;
			this->Cl_LableUPDELContactNumber->Text = L"���������� �����";
			// 
			// Cl_TextBoxUPDELName
			// 
			this->Cl_TextBoxUPDELName->Location = System::Drawing::Point(66, 64);
			this->Cl_TextBoxUPDELName->Name = L"Cl_TextBoxUPDELName";
			this->Cl_TextBoxUPDELName->Size = System::Drawing::Size(100, 22);
			this->Cl_TextBoxUPDELName->TabIndex = 2;
			// 
			// Cl_LableUPDELName
			// 
			this->Cl_LableUPDELName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Cl_LableUPDELName->Location = System::Drawing::Point(67, 40);
			this->Cl_LableUPDELName->Name = L"Cl_LableUPDELName";
			this->Cl_LableUPDELName->Size = System::Drawing::Size(100, 20);
			this->Cl_LableUPDELName->TabIndex = 1;
			this->Cl_LableUPDELName->Text = L"��\'�";
			// 
			// Cl_LabelUPDEL
			// 
			this->Cl_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->Cl_LabelUPDEL->Name = L"Cl_LabelUPDEL";
			this->Cl_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->Cl_LabelUPDEL->TabIndex = 0;
			this->Cl_LabelUPDEL->Text = L"����������/�������� �볺���";
			// 
			// Cl_PanelAdd
			// 
			this->Cl_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Cl_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->Cl_PanelAdd->Controls->Add(this->Cl_LabelAddError);
			this->Cl_PanelAdd->Controls->Add(this->Cl_TextBoxAddEmail);
			this->Cl_PanelAdd->Controls->Add(this->Cl_TextBoxAddContactNumber);
			this->Cl_PanelAdd->Controls->Add(this->Cl_LableAddEmail);
			this->Cl_PanelAdd->Controls->Add(this->Cl_LableAddContactNumber);
			this->Cl_PanelAdd->Controls->Add(this->Cl_ButtonAdd);
			this->Cl_PanelAdd->Controls->Add(this->Cl_TextBoxAddName);
			this->Cl_PanelAdd->Controls->Add(this->Cl_LableAddName);
			this->Cl_PanelAdd->Controls->Add(this->Cl_LabelAdd);
			this->Cl_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->Cl_PanelAdd->Name = L"Cl_PanelAdd";
			this->Cl_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->Cl_PanelAdd->TabIndex = 17;
			// 
			// Cl_LabelAddError
			// 
			this->Cl_LabelAddError->AutoSize = true;
			this->Cl_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->Cl_LabelAddError->Location = System::Drawing::Point(116, 105);
			this->Cl_LabelAddError->Name = L"Cl_LabelAddError";
			this->Cl_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->Cl_LabelAddError->TabIndex = 18;
			this->Cl_LabelAddError->Text = L" ";
			// 
			// Cl_TextBoxAddEmail
			// 
			this->Cl_TextBoxAddEmail->Location = System::Drawing::Point(266, 64);
			this->Cl_TextBoxAddEmail->Name = L"Cl_TextBoxAddEmail";
			this->Cl_TextBoxAddEmail->Size = System::Drawing::Size(121, 22);
			this->Cl_TextBoxAddEmail->TabIndex = 8;
			// 
			// Cl_TextBoxAddContactNumber
			// 
			this->Cl_TextBoxAddContactNumber->Location = System::Drawing::Point(116, 64);
			this->Cl_TextBoxAddContactNumber->Name = L"Cl_TextBoxAddContactNumber";
			this->Cl_TextBoxAddContactNumber->Size = System::Drawing::Size(141, 22);
			this->Cl_TextBoxAddContactNumber->TabIndex = 7;
			// 
			// Cl_LableAddEmail
			// 
			this->Cl_LableAddEmail->Location = System::Drawing::Point(267, 41);
			this->Cl_LableAddEmail->Name = L"Cl_LableAddEmail";
			this->Cl_LableAddEmail->Size = System::Drawing::Size(120, 20);
			this->Cl_LableAddEmail->TabIndex = 6;
			this->Cl_LableAddEmail->Text = L"Email";
			// 
			// Cl_LableAddContactNumber
			// 
			this->Cl_LableAddContactNumber->Location = System::Drawing::Point(117, 40);
			this->Cl_LableAddContactNumber->Name = L"Cl_LableAddContactNumber";
			this->Cl_LableAddContactNumber->Size = System::Drawing::Size(140, 20);
			this->Cl_LableAddContactNumber->TabIndex = 4;
			this->Cl_LableAddContactNumber->Text = L"���������� �����";
			// 
			// Cl_ButtonAdd
			// 
			this->Cl_ButtonAdd->Location = System::Drawing::Point(10, 101);
			this->Cl_ButtonAdd->Name = L"Cl_ButtonAdd";
			this->Cl_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->Cl_ButtonAdd->TabIndex = 3;
			this->Cl_ButtonAdd->Text = L"������";
			this->Cl_ButtonAdd->UseVisualStyleBackColor = true;
			this->Cl_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::Cl_ButtonAdd_Click);
			// 
			// Cl_TextBoxAddName
			// 
			this->Cl_TextBoxAddName->Location = System::Drawing::Point(10, 64);
			this->Cl_TextBoxAddName->Name = L"Cl_TextBoxAddName";
			this->Cl_TextBoxAddName->Size = System::Drawing::Size(100, 22);
			this->Cl_TextBoxAddName->TabIndex = 2;
			// 
			// Cl_LableAddName
			// 
			this->Cl_LableAddName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_LableAddName->Location = System::Drawing::Point(10, 40);
			this->Cl_LableAddName->Name = L"Cl_LableAddName";
			this->Cl_LableAddName->Size = System::Drawing::Size(100, 20);
			this->Cl_LableAddName->TabIndex = 1;
			this->Cl_LableAddName->Text = L"��\'�";
			// 
			// Cl_LabelAdd
			// 
			this->Cl_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cl_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->Cl_LabelAdd->Name = L"Cl_LabelAdd";
			this->Cl_LabelAdd->Size = System::Drawing::Size(1107, 30);
			this->Cl_LabelAdd->TabIndex = 0;
			this->Cl_LabelAdd->Text = L"������ ������ �볺���";
			// 
			// Pa_Page
			// 
			this->Pa_Page->BackColor = System::Drawing::Color::LightGray;
			this->Pa_Page->Controls->Add(this->Pa_PanelList);
			this->Pa_Page->Controls->Add(this->Pa_PanelUPDEL);
			this->Pa_Page->Controls->Add(this->Pa_PanelAdd);
			this->Pa_Page->Location = System::Drawing::Point(4, 22);
			this->Pa_Page->Name = L"Pa_Page";
			this->Pa_Page->Padding = System::Windows::Forms::Padding(3);
			this->Pa_Page->Size = System::Drawing::Size(1132, 673);
			this->Pa_Page->TabIndex = 5;
			this->Pa_Page->Text = L"Parcels";
			// 
			// Pa_PanelList
			// 
			this->Pa_PanelList->BackColor = System::Drawing::Color::Silver;
			this->Pa_PanelList->Controls->Add(this->Pa_DataGridView);
			this->Pa_PanelList->Controls->Add(this->Pa_LabelList);
			this->Pa_PanelList->Location = System::Drawing::Point(6, 288);
			this->Pa_PanelList->Name = L"Pa_PanelList";
			this->Pa_PanelList->Size = System::Drawing::Size(1120, 379);
			this->Pa_PanelList->TabIndex = 5;
			// 
			// Pa_DataGridView
			// 
			this->Pa_DataGridView->AllowUserToAddRows = false;
			this->Pa_DataGridView->AllowUserToDeleteRows = false;
			this->Pa_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Pa_DataGridView->Location = System::Drawing::Point(4, 44);
			this->Pa_DataGridView->Name = L"Pa_DataGridView";
			this->Pa_DataGridView->ReadOnly = true;
			this->Pa_DataGridView->Size = System::Drawing::Size(1113, 332);
			this->Pa_DataGridView->TabIndex = 3;
			// 
			// Pa_LabelList
			// 
			this->Pa_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_LabelList->Location = System::Drawing::Point(10, 10);
			this->Pa_LabelList->Name = L"Pa_LabelList";
			this->Pa_LabelList->Size = System::Drawing::Size(1107, 30);
			this->Pa_LabelList->TabIndex = 2;
			this->Pa_LabelList->Text = L"�� �������";
			// 
			// Pa_PanelUPDEL
			// 
			this->Pa_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LabelUPDELError);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_TextBoxUPDELDeliveryAddress);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELDeliveryAddress);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELCurId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELCurId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELPSId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELPSId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_TextBoxUPDELPrice);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELPrice);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELDelId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELDelId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELDepId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELDepId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELRecId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELRecId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELSenId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELSenId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_TextBoxUPDELWeight);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELWeight);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_TextBoxUPDELInfo);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELInfo);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ButtonUPDELDelete);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ButtonUPDELRollBack);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ButtonUPDELSave);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_ComboBoxUPDELId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LableUPDELId);
			this->Pa_PanelUPDEL->Controls->Add(this->Pa_LabelUPDEL);
			this->Pa_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->Pa_PanelUPDEL->Name = L"Pa_PanelUPDEL";
			this->Pa_PanelUPDEL->Size = System::Drawing::Size(1120, 135);
			this->Pa_PanelUPDEL->TabIndex = 4;
			// 
			// Pa_LabelUPDELError
			// 
			this->Pa_LabelUPDELError->AutoSize = true;
			this->Pa_LabelUPDELError->ForeColor = System::Drawing::Color::Red;
			this->Pa_LabelUPDELError->Location = System::Drawing::Point(330, 99);
			this->Pa_LabelUPDELError->Name = L"Pa_LabelUPDELError";
			this->Pa_LabelUPDELError->Size = System::Drawing::Size(10, 16);
			this->Pa_LabelUPDELError->TabIndex = 42;
			this->Pa_LabelUPDELError->Text = L" ";
			// 
			// Pa_TextBoxUPDELDeliveryAddress
			// 
			this->Pa_TextBoxUPDELDeliveryAddress->Location = System::Drawing::Point(960, 63);
			this->Pa_TextBoxUPDELDeliveryAddress->Name = L"Pa_TextBoxUPDELDeliveryAddress";
			this->Pa_TextBoxUPDELDeliveryAddress->Size = System::Drawing::Size(110, 22);
			this->Pa_TextBoxUPDELDeliveryAddress->TabIndex = 41;
			// 
			// Pa_LableUPDELDeliveryAddress
			// 
			this->Pa_LableUPDELDeliveryAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELDeliveryAddress->Location = System::Drawing::Point(960, 40);
			this->Pa_LableUPDELDeliveryAddress->Name = L"Pa_LableUPDELDeliveryAddress";
			this->Pa_LableUPDELDeliveryAddress->Size = System::Drawing::Size(110, 20);
			this->Pa_LableUPDELDeliveryAddress->TabIndex = 40;
			this->Pa_LableUPDELDeliveryAddress->Text = L"���. ��������";
			// 
			// Pa_LableUPDELCurId
			// 
			this->Pa_LableUPDELCurId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELCurId->Location = System::Drawing::Point(834, 40);
			this->Pa_LableUPDELCurId->Name = L"Pa_LableUPDELCurId";
			this->Pa_LableUPDELCurId->Size = System::Drawing::Size(120, 20);
			this->Pa_LableUPDELCurId->TabIndex = 39;
			this->Pa_LableUPDELCurId->Text = L"�. �����������";
			// 
			// Pa_ComboBoxUPDELCurId
			// 
			this->Pa_ComboBoxUPDELCurId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELCurId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELCurId->Location = System::Drawing::Point(834, 62);
			this->Pa_ComboBoxUPDELCurId->Name = L"Pa_ComboBoxUPDELCurId";
			this->Pa_ComboBoxUPDELCurId->Size = System::Drawing::Size(120, 24);
			this->Pa_ComboBoxUPDELCurId->TabIndex = 38;
			// 
			// Pa_LableUPDELPSId
			// 
			this->Pa_LableUPDELPSId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELPSId->Location = System::Drawing::Point(738, 40);
			this->Pa_LableUPDELPSId->Name = L"Pa_LableUPDELPSId";
			this->Pa_LableUPDELPSId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELPSId->TabIndex = 37;
			this->Pa_LableUPDELPSId->Text = L"������";
			// 
			// Pa_ComboBoxUPDELPSId
			// 
			this->Pa_ComboBoxUPDELPSId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELPSId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELPSId->Location = System::Drawing::Point(738, 62);
			this->Pa_ComboBoxUPDELPSId->Name = L"Pa_ComboBoxUPDELPSId";
			this->Pa_ComboBoxUPDELPSId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxUPDELPSId->TabIndex = 36;
			// 
			// Pa_TextBoxUPDELPrice
			// 
			this->Pa_TextBoxUPDELPrice->Location = System::Drawing::Point(642, 63);
			this->Pa_TextBoxUPDELPrice->Name = L"Pa_TextBoxUPDELPrice";
			this->Pa_TextBoxUPDELPrice->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxUPDELPrice->TabIndex = 35;
			// 
			// Pa_LableUPDELPrice
			// 
			this->Pa_LableUPDELPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELPrice->Location = System::Drawing::Point(642, 40);
			this->Pa_LableUPDELPrice->Name = L"Pa_LableUPDELPrice";
			this->Pa_LableUPDELPrice->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELPrice->TabIndex = 34;
			this->Pa_LableUPDELPrice->Text = L"�������";
			// 
			// Pa_LableUPDELDelId
			// 
			this->Pa_LableUPDELDelId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELDelId->Location = System::Drawing::Point(546, 40);
			this->Pa_LableUPDELDelId->Name = L"Pa_LableUPDELDelId";
			this->Pa_LableUPDELDelId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELDelId->TabIndex = 33;
			this->Pa_LableUPDELDelId->Text = L"�. ��������";
			// 
			// Pa_ComboBoxUPDELDelId
			// 
			this->Pa_ComboBoxUPDELDelId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELDelId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELDelId->Location = System::Drawing::Point(546, 62);
			this->Pa_ComboBoxUPDELDelId->Name = L"Pa_ComboBoxUPDELDelId";
			this->Pa_ComboBoxUPDELDelId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxUPDELDelId->TabIndex = 32;
			// 
			// Pa_LableUPDELDepId
			// 
			this->Pa_LableUPDELDepId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELDepId->Location = System::Drawing::Point(450, 40);
			this->Pa_LableUPDELDepId->Name = L"Pa_LableUPDELDepId";
			this->Pa_LableUPDELDepId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELDepId->TabIndex = 31;
			this->Pa_LableUPDELDepId->Text = L"�. ³�������";
			// 
			// Pa_ComboBoxUPDELDepId
			// 
			this->Pa_ComboBoxUPDELDepId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELDepId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELDepId->Location = System::Drawing::Point(450, 62);
			this->Pa_ComboBoxUPDELDepId->Name = L"Pa_ComboBoxUPDELDepId";
			this->Pa_ComboBoxUPDELDepId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxUPDELDepId->TabIndex = 30;
			// 
			// Pa_LableUPDELRecId
			// 
			this->Pa_LableUPDELRecId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELRecId->Location = System::Drawing::Point(354, 40);
			this->Pa_LableUPDELRecId->Name = L"Pa_LableUPDELRecId";
			this->Pa_LableUPDELRecId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELRecId->TabIndex = 29;
			this->Pa_LableUPDELRecId->Text = L"���������";
			// 
			// Pa_ComboBoxUPDELRecId
			// 
			this->Pa_ComboBoxUPDELRecId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELRecId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELRecId->Location = System::Drawing::Point(354, 62);
			this->Pa_ComboBoxUPDELRecId->Name = L"Pa_ComboBoxUPDELRecId";
			this->Pa_ComboBoxUPDELRecId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxUPDELRecId->TabIndex = 28;
			// 
			// Pa_LableUPDELSenId
			// 
			this->Pa_LableUPDELSenId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELSenId->Location = System::Drawing::Point(258, 40);
			this->Pa_LableUPDELSenId->Name = L"Pa_LableUPDELSenId";
			this->Pa_LableUPDELSenId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELSenId->TabIndex = 27;
			this->Pa_LableUPDELSenId->Text = L"³��������";
			// 
			// Pa_ComboBoxUPDELSenId
			// 
			this->Pa_ComboBoxUPDELSenId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELSenId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELSenId->Location = System::Drawing::Point(258, 62);
			this->Pa_ComboBoxUPDELSenId->Name = L"Pa_ComboBoxUPDELSenId";
			this->Pa_ComboBoxUPDELSenId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxUPDELSenId->TabIndex = 26;
			// 
			// Pa_TextBoxUPDELWeight
			// 
			this->Pa_TextBoxUPDELWeight->Location = System::Drawing::Point(162, 63);
			this->Pa_TextBoxUPDELWeight->Name = L"Pa_TextBoxUPDELWeight";
			this->Pa_TextBoxUPDELWeight->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxUPDELWeight->TabIndex = 25;
			// 
			// Pa_LableUPDELWeight
			// 
			this->Pa_LableUPDELWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELWeight->Location = System::Drawing::Point(162, 40);
			this->Pa_LableUPDELWeight->Name = L"Pa_LableUPDELWeight";
			this->Pa_LableUPDELWeight->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELWeight->TabIndex = 24;
			this->Pa_LableUPDELWeight->Text = L"����";
			// 
			// Pa_TextBoxUPDELInfo
			// 
			this->Pa_TextBoxUPDELInfo->Location = System::Drawing::Point(66, 63);
			this->Pa_TextBoxUPDELInfo->Name = L"Pa_TextBoxUPDELInfo";
			this->Pa_TextBoxUPDELInfo->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxUPDELInfo->TabIndex = 23;
			// 
			// Pa_LableUPDELInfo
			// 
			this->Pa_LableUPDELInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableUPDELInfo->Location = System::Drawing::Point(66, 40);
			this->Pa_LableUPDELInfo->Name = L"Pa_LableUPDELInfo";
			this->Pa_LableUPDELInfo->Size = System::Drawing::Size(90, 20);
			this->Pa_LableUPDELInfo->TabIndex = 22;
			this->Pa_LableUPDELInfo->Text = L"����";
			// 
			// Pa_ButtonUPDELDelete
			// 
			this->Pa_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->Pa_ButtonUPDELDelete->Name = L"Pa_ButtonUPDELDelete";
			this->Pa_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->Pa_ButtonUPDELDelete->TabIndex = 8;
			this->Pa_ButtonUPDELDelete->Text = L"��������";
			this->Pa_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->Pa_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &Lab2Form::Pa_ButtonUPDELDelete_Click);
			// 
			// Pa_ButtonUPDELRollBack
			// 
			this->Pa_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->Pa_ButtonUPDELRollBack->Name = L"Pa_ButtonUPDELRollBack";
			this->Pa_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->Pa_ButtonUPDELRollBack->TabIndex = 7;
			this->Pa_ButtonUPDELRollBack->Text = L"³������";
			this->Pa_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->Pa_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &Lab2Form::Pa_ButtonUPDELRollBack_Click);
			// 
			// Pa_ButtonUPDELSave
			// 
			this->Pa_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->Pa_ButtonUPDELSave->Name = L"Pa_ButtonUPDELSave";
			this->Pa_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->Pa_ButtonUPDELSave->TabIndex = 6;
			this->Pa_ButtonUPDELSave->Text = L"��������";
			this->Pa_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->Pa_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &Lab2Form::Pa_ButtonUPDELSave_Click);
			// 
			// Pa_ComboBoxUPDELId
			// 
			this->Pa_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxUPDELId->FormattingEnabled = true;
			this->Pa_ComboBoxUPDELId->Location = System::Drawing::Point(10, 62);
			this->Pa_ComboBoxUPDELId->Name = L"Pa_ComboBoxUPDELId";
			this->Pa_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->Pa_ComboBoxUPDELId->TabIndex = 4;
			this->Pa_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::Pa_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// Pa_LableUPDELId
			// 
			this->Pa_LableUPDELId->Location = System::Drawing::Point(10, 40);
			this->Pa_LableUPDELId->Name = L"Pa_LableUPDELId";
			this->Pa_LableUPDELId->Size = System::Drawing::Size(50, 20);
			this->Pa_LableUPDELId->TabIndex = 2;
			this->Pa_LableUPDELId->Text = L"Id";
			// 
			// Pa_LabelUPDEL
			// 
			this->Pa_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->Pa_LabelUPDEL->Name = L"Pa_LabelUPDEL";
			this->Pa_LabelUPDEL->Size = System::Drawing::Size(1107, 30);
			this->Pa_LabelUPDEL->TabIndex = 1;
			this->Pa_LabelUPDEL->Text = L"����������/�������� �������";
			// 
			// Pa_PanelAdd
			// 
			this->Pa_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Pa_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->Pa_PanelAdd->Controls->Add(this->Pa_LabelAddError);
			this->Pa_PanelAdd->Controls->Add(this->Pa_TextBoxAddDeliveryAddress);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddDeliveryAddress);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddCurId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddCurId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddPSId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddPSId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_TextBoxAddPrice);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddPrice);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddDelId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddDelId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddDepId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddDepId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddRecId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddRecId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddSenId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ComboBoxAddSenId);
			this->Pa_PanelAdd->Controls->Add(this->Pa_TextBoxAddWeight);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddWeight);
			this->Pa_PanelAdd->Controls->Add(this->Pa_ButtonAdd);
			this->Pa_PanelAdd->Controls->Add(this->Pa_TextBoxAddInfo);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LableAddInfo);
			this->Pa_PanelAdd->Controls->Add(this->Pa_LabelAdd);
			this->Pa_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->Pa_PanelAdd->Name = L"Pa_PanelAdd";
			this->Pa_PanelAdd->Size = System::Drawing::Size(1120, 135);
			this->Pa_PanelAdd->TabIndex = 3;
			// 
			// Pa_LabelAddError
			// 
			this->Pa_LabelAddError->AutoSize = true;
			this->Pa_LabelAddError->ForeColor = System::Drawing::Color::Red;
			this->Pa_LabelAddError->Location = System::Drawing::Point(116, 104);
			this->Pa_LabelAddError->Name = L"Pa_LabelAddError";
			this->Pa_LabelAddError->Size = System::Drawing::Size(10, 16);
			this->Pa_LabelAddError->TabIndex = 22;
			this->Pa_LabelAddError->Text = L" ";
			// 
			// Pa_TextBoxAddDeliveryAddress
			// 
			this->Pa_TextBoxAddDeliveryAddress->Location = System::Drawing::Point(904, 63);
			this->Pa_TextBoxAddDeliveryAddress->Name = L"Pa_TextBoxAddDeliveryAddress";
			this->Pa_TextBoxAddDeliveryAddress->Size = System::Drawing::Size(110, 22);
			this->Pa_TextBoxAddDeliveryAddress->TabIndex = 21;
			// 
			// Pa_LableAddDeliveryAddress
			// 
			this->Pa_LableAddDeliveryAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddDeliveryAddress->Location = System::Drawing::Point(904, 40);
			this->Pa_LableAddDeliveryAddress->Name = L"Pa_LableAddDeliveryAddress";
			this->Pa_LableAddDeliveryAddress->Size = System::Drawing::Size(110, 20);
			this->Pa_LableAddDeliveryAddress->TabIndex = 20;
			this->Pa_LableAddDeliveryAddress->Text = L"���. ��������";
			// 
			// Pa_LableAddCurId
			// 
			this->Pa_LableAddCurId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddCurId->Location = System::Drawing::Point(778, 40);
			this->Pa_LableAddCurId->Name = L"Pa_LableAddCurId";
			this->Pa_LableAddCurId->Size = System::Drawing::Size(120, 20);
			this->Pa_LableAddCurId->TabIndex = 19;
			this->Pa_LableAddCurId->Text = L"�. �����������";
			// 
			// Pa_ComboBoxAddCurId
			// 
			this->Pa_ComboBoxAddCurId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddCurId->FormattingEnabled = true;
			this->Pa_ComboBoxAddCurId->Location = System::Drawing::Point(778, 62);
			this->Pa_ComboBoxAddCurId->Name = L"Pa_ComboBoxAddCurId";
			this->Pa_ComboBoxAddCurId->Size = System::Drawing::Size(120, 24);
			this->Pa_ComboBoxAddCurId->TabIndex = 18;
			// 
			// Pa_LableAddPSId
			// 
			this->Pa_LableAddPSId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_LableAddPSId->Location = System::Drawing::Point(682, 40);
			this->Pa_LableAddPSId->Name = L"Pa_LableAddPSId";
			this->Pa_LableAddPSId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddPSId->TabIndex = 17;
			this->Pa_LableAddPSId->Text = L"������";
			// 
			// Pa_ComboBoxAddPSId
			// 
			this->Pa_ComboBoxAddPSId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddPSId->FormattingEnabled = true;
			this->Pa_ComboBoxAddPSId->Location = System::Drawing::Point(682, 62);
			this->Pa_ComboBoxAddPSId->Name = L"Pa_ComboBoxAddPSId";
			this->Pa_ComboBoxAddPSId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxAddPSId->TabIndex = 16;
			// 
			// Pa_TextBoxAddPrice
			// 
			this->Pa_TextBoxAddPrice->Location = System::Drawing::Point(586, 63);
			this->Pa_TextBoxAddPrice->Name = L"Pa_TextBoxAddPrice";
			this->Pa_TextBoxAddPrice->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxAddPrice->TabIndex = 15;
			// 
			// Pa_LableAddPrice
			// 
			this->Pa_LableAddPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddPrice->Location = System::Drawing::Point(586, 40);
			this->Pa_LableAddPrice->Name = L"Pa_LableAddPrice";
			this->Pa_LableAddPrice->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddPrice->TabIndex = 14;
			this->Pa_LableAddPrice->Text = L"�������";
			// 
			// Pa_LableAddDelId
			// 
			this->Pa_LableAddDelId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddDelId->Location = System::Drawing::Point(490, 40);
			this->Pa_LableAddDelId->Name = L"Pa_LableAddDelId";
			this->Pa_LableAddDelId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddDelId->TabIndex = 13;
			this->Pa_LableAddDelId->Text = L"�. ��������";
			// 
			// Pa_ComboBoxAddDelId
			// 
			this->Pa_ComboBoxAddDelId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddDelId->FormattingEnabled = true;
			this->Pa_ComboBoxAddDelId->Location = System::Drawing::Point(490, 62);
			this->Pa_ComboBoxAddDelId->Name = L"Pa_ComboBoxAddDelId";
			this->Pa_ComboBoxAddDelId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxAddDelId->TabIndex = 12;
			// 
			// Pa_LableAddDepId
			// 
			this->Pa_LableAddDepId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddDepId->Location = System::Drawing::Point(394, 40);
			this->Pa_LableAddDepId->Name = L"Pa_LableAddDepId";
			this->Pa_LableAddDepId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddDepId->TabIndex = 11;
			this->Pa_LableAddDepId->Text = L"�. ³�������";
			// 
			// Pa_ComboBoxAddDepId
			// 
			this->Pa_ComboBoxAddDepId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddDepId->FormattingEnabled = true;
			this->Pa_ComboBoxAddDepId->Location = System::Drawing::Point(394, 62);
			this->Pa_ComboBoxAddDepId->Name = L"Pa_ComboBoxAddDepId";
			this->Pa_ComboBoxAddDepId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxAddDepId->TabIndex = 10;
			// 
			// Pa_LableAddRecId
			// 
			this->Pa_LableAddRecId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddRecId->Location = System::Drawing::Point(298, 40);
			this->Pa_LableAddRecId->Name = L"Pa_LableAddRecId";
			this->Pa_LableAddRecId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddRecId->TabIndex = 9;
			this->Pa_LableAddRecId->Text = L"���������";
			// 
			// Pa_ComboBoxAddRecId
			// 
			this->Pa_ComboBoxAddRecId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddRecId->FormattingEnabled = true;
			this->Pa_ComboBoxAddRecId->Location = System::Drawing::Point(298, 62);
			this->Pa_ComboBoxAddRecId->Name = L"Pa_ComboBoxAddRecId";
			this->Pa_ComboBoxAddRecId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxAddRecId->TabIndex = 8;
			// 
			// Pa_LableAddSenId
			// 
			this->Pa_LableAddSenId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddSenId->Location = System::Drawing::Point(202, 40);
			this->Pa_LableAddSenId->Name = L"Pa_LableAddSenId";
			this->Pa_LableAddSenId->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddSenId->TabIndex = 7;
			this->Pa_LableAddSenId->Text = L"³��������";
			// 
			// Pa_ComboBoxAddSenId
			// 
			this->Pa_ComboBoxAddSenId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pa_ComboBoxAddSenId->FormattingEnabled = true;
			this->Pa_ComboBoxAddSenId->Location = System::Drawing::Point(202, 62);
			this->Pa_ComboBoxAddSenId->Name = L"Pa_ComboBoxAddSenId";
			this->Pa_ComboBoxAddSenId->Size = System::Drawing::Size(90, 24);
			this->Pa_ComboBoxAddSenId->TabIndex = 6;
			// 
			// Pa_TextBoxAddWeight
			// 
			this->Pa_TextBoxAddWeight->Location = System::Drawing::Point(106, 63);
			this->Pa_TextBoxAddWeight->Name = L"Pa_TextBoxAddWeight";
			this->Pa_TextBoxAddWeight->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxAddWeight->TabIndex = 5;
			// 
			// Pa_LableAddWeight
			// 
			this->Pa_LableAddWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pa_LableAddWeight->Location = System::Drawing::Point(106, 40);
			this->Pa_LableAddWeight->Name = L"Pa_LableAddWeight";
			this->Pa_LableAddWeight->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddWeight->TabIndex = 4;
			this->Pa_LableAddWeight->Text = L"����";
			// 
			// Pa_ButtonAdd
			// 
			this->Pa_ButtonAdd->Location = System::Drawing::Point(10, 100);
			this->Pa_ButtonAdd->Name = L"Pa_ButtonAdd";
			this->Pa_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->Pa_ButtonAdd->TabIndex = 3;
			this->Pa_ButtonAdd->Text = L"������";
			this->Pa_ButtonAdd->UseVisualStyleBackColor = true;
			this->Pa_ButtonAdd->Click += gcnew System::EventHandler(this, &Lab2Form::Pa_ButtonAdd_Click);
			// 
			// Pa_TextBoxAddInfo
			// 
			this->Pa_TextBoxAddInfo->Location = System::Drawing::Point(10, 63);
			this->Pa_TextBoxAddInfo->Name = L"Pa_TextBoxAddInfo";
			this->Pa_TextBoxAddInfo->Size = System::Drawing::Size(90, 22);
			this->Pa_TextBoxAddInfo->TabIndex = 2;
			// 
			// Pa_LableAddInfo
			// 
			this->Pa_LableAddInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_LableAddInfo->Location = System::Drawing::Point(10, 40);
			this->Pa_LableAddInfo->Name = L"Pa_LableAddInfo";
			this->Pa_LableAddInfo->Size = System::Drawing::Size(90, 20);
			this->Pa_LableAddInfo->TabIndex = 1;
			this->Pa_LableAddInfo->Text = L"����";
			// 
			// Pa_LabelAdd
			// 
			this->Pa_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pa_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->Pa_LabelAdd->Name = L"Pa_LabelAdd";
			this->Pa_LabelAdd->Size = System::Drawing::Size(1107, 30);
			this->Pa_LabelAdd->TabIndex = 0;
			this->Pa_LabelAdd->Text = L"������ ���� �������";
			// 
			// QueryPage
			// 
			this->QueryPage->Controls->Add(this->Query_LabelError);
			this->QueryPage->Controls->Add(this->Query_ButtonComplete);
			this->QueryPage->Controls->Add(this->Query_DataGridView);
			this->QueryPage->Controls->Add(this->Query_TextBoxCode);
			this->QueryPage->Controls->Add(this->Query_LabelCode);
			this->QueryPage->Controls->Add(this->Query_TextBoxAboutQuery);
			this->QueryPage->Controls->Add(this->Query_LabelAboutQuery);
			this->QueryPage->Controls->Add(this->Query_TextBoxValue);
			this->QueryPage->Controls->Add(this->Query_LabelValue);
			this->QueryPage->Controls->Add(this->Query_ComboBoxChose);
			this->QueryPage->Controls->Add(this->Query_LabelChose);
			this->QueryPage->Location = System::Drawing::Point(4, 22);
			this->QueryPage->Name = L"QueryPage";
			this->QueryPage->Padding = System::Windows::Forms::Padding(3);
			this->QueryPage->Size = System::Drawing::Size(1152, 711);
			this->QueryPage->TabIndex = 2;
			this->QueryPage->Text = L"������";
			this->QueryPage->UseVisualStyleBackColor = true;
			// 
			// Query_ButtonComplete
			// 
			this->Query_ButtonComplete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_ButtonComplete->Location = System::Drawing::Point(377, 53);
			this->Query_ButtonComplete->Name = L"Query_ButtonComplete";
			this->Query_ButtonComplete->Size = System::Drawing::Size(150, 25);
			this->Query_ButtonComplete->TabIndex = 9;
			this->Query_ButtonComplete->Text = L"�������� �����";
			this->Query_ButtonComplete->UseVisualStyleBackColor = true;
			this->Query_ButtonComplete->Click += gcnew System::EventHandler(this, &Lab2Form::Query_ButtonComplete_Click);
			// 
			// Query_DataGridView
			// 
			this->Query_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Query_DataGridView->Location = System::Drawing::Point(14, 436);
			this->Query_DataGridView->Name = L"Query_DataGridView";
			this->Query_DataGridView->Size = System::Drawing::Size(1116, 269);
			this->Query_DataGridView->TabIndex = 8;
			// 
			// Query_TextBoxCode
			// 
			this->Query_TextBoxCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_TextBoxCode->Location = System::Drawing::Point(480, 130);
			this->Query_TextBoxCode->Multiline = true;
			this->Query_TextBoxCode->Name = L"Query_TextBoxCode";
			this->Query_TextBoxCode->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Query_TextBoxCode->Size = System::Drawing::Size(650, 300);
			this->Query_TextBoxCode->TabIndex = 7;
			// 
			// Query_LabelCode
			// 
			this->Query_LabelCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_LabelCode->Location = System::Drawing::Point(476, 100);
			this->Query_LabelCode->Name = L"Query_LabelCode";
			this->Query_LabelCode->Size = System::Drawing::Size(150, 24);
			this->Query_LabelCode->TabIndex = 6;
			this->Query_LabelCode->Text = L"SQL �����";
			// 
			// Query_TextBoxAboutQuery
			// 
			this->Query_TextBoxAboutQuery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_TextBoxAboutQuery->Location = System::Drawing::Point(14, 130);
			this->Query_TextBoxAboutQuery->Multiline = true;
			this->Query_TextBoxAboutQuery->Name = L"Query_TextBoxAboutQuery";
			this->Query_TextBoxAboutQuery->Size = System::Drawing::Size(450, 300);
			this->Query_TextBoxAboutQuery->TabIndex = 5;
			this->Query_TextBoxAboutQuery->TextChanged += gcnew System::EventHandler(this, &Lab2Form::Query_TextBoxAboutQuery_TextChanged);
			// 
			// Query_LabelAboutQuery
			// 
			this->Query_LabelAboutQuery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_LabelAboutQuery->Location = System::Drawing::Point(10, 100);
			this->Query_LabelAboutQuery->Name = L"Query_LabelAboutQuery";
			this->Query_LabelAboutQuery->Size = System::Drawing::Size(150, 24);
			this->Query_LabelAboutQuery->TabIndex = 4;
			this->Query_LabelAboutQuery->Text = L"��� �����";
			// 
			// Query_TextBoxValue
			// 
			this->Query_TextBoxValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_TextBoxValue->Location = System::Drawing::Point(207, 54);
			this->Query_TextBoxValue->Name = L"Query_TextBoxValue";
			this->Query_TextBoxValue->Size = System::Drawing::Size(150, 20);
			this->Query_TextBoxValue->TabIndex = 3;
			// 
			// Query_LabelValue
			// 
			this->Query_LabelValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_LabelValue->Location = System::Drawing::Point(207, 25);
			this->Query_LabelValue->Name = L"Query_LabelValue";
			this->Query_LabelValue->Size = System::Drawing::Size(150, 24);
			this->Query_LabelValue->TabIndex = 2;
			this->Query_LabelValue->Text = L"@Value =";
			// 
			// Query_ComboBoxChose
			// 
			this->Query_ComboBoxChose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_ComboBoxChose->FormattingEnabled = true;
			this->Query_ComboBoxChose->Location = System::Drawing::Point(10, 53);
			this->Query_ComboBoxChose->Name = L"Query_ComboBoxChose";
			this->Query_ComboBoxChose->Size = System::Drawing::Size(180, 21);
			this->Query_ComboBoxChose->TabIndex = 1;
			this->Query_ComboBoxChose->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2Form::Query_ComboBoxChose_SelectedIndexChanged);
			// 
			// Query_LabelChose
			// 
			this->Query_LabelChose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_LabelChose->Location = System::Drawing::Point(10, 25);
			this->Query_LabelChose->Name = L"Query_LabelChose";
			this->Query_LabelChose->Size = System::Drawing::Size(150, 24);
			this->Query_LabelChose->TabIndex = 0;
			this->Query_LabelChose->Text = L"������ �����";
			// 
			// InfoPage
			// 
			this->InfoPage->Location = System::Drawing::Point(4, 22);
			this->InfoPage->Name = L"InfoPage";
			this->InfoPage->Padding = System::Windows::Forms::Padding(3);
			this->InfoPage->Size = System::Drawing::Size(1152, 711);
			this->InfoPage->TabIndex = 3;
			this->InfoPage->Text = L"����";
			this->InfoPage->UseVisualStyleBackColor = true;
			// 
			// Query_LabelError
			// 
			this->Query_LabelError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Query_LabelError->ForeColor = System::Drawing::Color::Red;
			this->Query_LabelError->Location = System::Drawing::Point(534, 54);
			this->Query_LabelError->Name = L"Query_LabelError";
			this->Query_LabelError->Size = System::Drawing::Size(596, 23);
			this->Query_LabelError->TabIndex = 10;
			this->Query_LabelError->Text = L" ";
			// 
			// Lab2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->MainTabControl);
			this->Name = L"Lab2Form";
			this->Text = L"MyForm";
			this->MainTabControl->ResumeLayout(false);
			this->TablePage->ResumeLayout(false);
			this->TableTabControl->ResumeLayout(false);
			this->FT_Page->ResumeLayout(false);
			this->FT_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FT_DataGridView))->EndInit();
			this->FT_PanelUPDEL->ResumeLayout(false);
			this->FT_PanelUPDEL->PerformLayout();
			this->FT_PanelAdd->ResumeLayout(false);
			this->FT_PanelAdd->PerformLayout();
			this->PF_Page->ResumeLayout(false);
			this->PF_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PF_DataGridView))->EndInit();
			this->PF_PanelUPDEL->ResumeLayout(false);
			this->PF_PanelUPDEL->PerformLayout();
			this->PF_PanelAdd->ResumeLayout(false);
			this->PF_PanelAdd->PerformLayout();
			this->PS_Page->ResumeLayout(false);
			this->PS_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PS_DataGridView))->EndInit();
			this->PS_PanelUPDEL->ResumeLayout(false);
			this->PS_PanelUPDEL->PerformLayout();
			this->PS_PanelAdd->ResumeLayout(false);
			this->PS_PanelAdd->PerformLayout();
			this->Co_Page->ResumeLayout(false);
			this->Co_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Co_DataGridView))->EndInit();
			this->Co_PanelUPDEL->ResumeLayout(false);
			this->Co_PanelUPDEL->PerformLayout();
			this->Co_PanelAdd->ResumeLayout(false);
			this->Co_PanelAdd->PerformLayout();
			this->Cl_Page->ResumeLayout(false);
			this->Cl_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cl_DataGridView))->EndInit();
			this->Cl_PanelUPDEL->ResumeLayout(false);
			this->Cl_PanelUPDEL->PerformLayout();
			this->Cl_PanelAdd->ResumeLayout(false);
			this->Cl_PanelAdd->PerformLayout();
			this->Pa_Page->ResumeLayout(false);
			this->Pa_PanelList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pa_DataGridView))->EndInit();
			this->Pa_PanelUPDEL->ResumeLayout(false);
			this->Pa_PanelUPDEL->PerformLayout();
			this->Pa_PanelAdd->ResumeLayout(false);
			this->Pa_PanelAdd->PerformLayout();
			this->QueryPage->ResumeLayout(false);
			this->QueryPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Query_DataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region FacilityType
	private: Void FT_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void FT_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void FT_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void FT_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void FT_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void FT_Update();
	private: Void FT_DataGridViewUpdate();
#pragma endregion

#pragma region PostalFacility
	private: Void PF_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void PF_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void PF_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void PF_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void PF_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void PF_Update();
	private: Void PF_DataGridViewUpdate();
#pragma endregion

#pragma region ParcelStatus
	private: Void PS_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void PS_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void PS_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void PS_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void PS_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void PS_Update();
	private: Void PS_DataGridViewUpdate();
#pragma endregion

#pragma region Courier
	private: Void Co_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void Co_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void Co_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void Co_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void Co_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void Co_Update();
	private: Void Co_DataGridViewUpdate();
#pragma endregion

#pragma region Client
	private: Void Cl_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void Cl_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void Cl_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void Cl_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void Cl_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void Cl_Update();
	private: Void Cl_DataGridViewUpdate();
#pragma endregion

#pragma region Parcel
	private: Void Pa_ButtonAdd_Click(Object^ sender, EventArgs^ e);
	private: Void Pa_ButtonUPDELSave_Click(Object^ sender, EventArgs^ e);
	private: Void Pa_ButtonUPDELRollBack_Click(Object^ sender, EventArgs^ e);
	private: Void Pa_ButtonUPDELDelete_Click(Object^ sender, EventArgs^ e);
	private: Void Pa_ComboBoxUPDELId_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void Pa_Update();
	private: Void Pa_DataGridViewUpdate();
#pragma endregion

#pragma region Query
	private: Void Query_ComboBoxChose_SelectedIndexChanged(Object^ sender, EventArgs^ e);
	private: Void Query_ButtonComplete_Click(Object^ sender, EventArgs^ e);
	private: Void Query_Update();
#pragma endregion
private: System::Void Query_TextBoxAboutQuery_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
