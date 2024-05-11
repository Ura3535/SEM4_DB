#pragma once

#include "Repository.h"

namespace Lab1 {
	namespace rep = repository;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			FT_UPDDataGridView();
			FT_UPDComboBoxId();
			PF_UPDDataGridView();
			PF_UPDComboBoxId();
			PF_UPDComboBoxFTId();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ FT_Page;
	private: System::Windows::Forms::TabPage^ PF_Page;
	private: System::Windows::Forms::Panel^ FT_PanelAdd;
	private: System::Windows::Forms::Label^ FT_LableAddType;
	private: System::Windows::Forms::Label^ FT_LableAdd;
	private: System::Windows::Forms::TextBox^ FT_TextBoxAddType;
	private: System::Windows::Forms::Button^ FT_ButtonAdd;
	private: System::Windows::Forms::Panel^ FT_PanelUPDEL;
	private: System::Windows::Forms::Label^ PF_LabelUPDEL;
	private: System::Windows::Forms::Label^ PF_LabelUPDELId;
	private: System::Windows::Forms::Label^ FT_LableUPDELType;
	private: System::Windows::Forms::ComboBox^ FT_ComboBoxUPDELId;
	private: System::Windows::Forms::TextBox^ FT_TextBoxUPDELType;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELSave;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ FT_ButtonUPDELDelete;
	private: System::Windows::Forms::Panel^ FT_PanelList;
	private: System::Windows::Forms::Label^ FT_LabelList;
	private: System::Windows::Forms::DataGridView^ FT_DataGridView;
	private: System::Windows::Forms::Panel^ PF_PanelAdd;
	private: System::Windows::Forms::Button^ PF_ButtonAdd;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddName;
	private: System::Windows::Forms::Label^ PF_LableAddName;
	private: System::Windows::Forms::Label^ PF_LabelAdd;
	private: System::Windows::Forms::Label^ PF_LableAddFTId;
	private: System::Windows::Forms::ComboBox^ PF_ComboBoxAddFTId;
	private: System::Windows::Forms::Label^ PF_LableAddAddress;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddAddress;
	private: System::Windows::Forms::Label^ PF_LableAddWorkSchedule;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddWorkSchedule;
	private: System::Windows::Forms::TextBox^ PF_TextBoxAddWeightRestrictions;
	private: System::Windows::Forms::Label^ PF_LableAddWeightRestrictions;
	private: System::Windows::Forms::Panel^ PF_PanelUPDEL;
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FT_ListId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FT_ListType;
	private: System::Windows::Forms::ComboBox^ PF_ComboBoxUPDELId;
	private: System::Windows::Forms::Label^ PF_LableUPDELId;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELDelete;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELRollBack;
	private: System::Windows::Forms::Button^ PF_ButtonUPDELSave;
	private: System::Windows::Forms::Panel^ PF_PanelList;
	private: System::Windows::Forms::DataGridView^ PF_DataGridView;
	private: System::Windows::Forms::Label^ PF_LabelList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListFTId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListWorkSchedule;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PF_ListWeightRestrictions;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->FT_Page = (gcnew System::Windows::Forms::TabPage());
			this->FT_PanelList = (gcnew System::Windows::Forms::Panel());
			this->FT_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->FT_ListId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FT_ListType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FT_LabelList = (gcnew System::Windows::Forms::Label());
			this->FT_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->FT_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxUPDELType = (gcnew System::Windows::Forms::TextBox());
			this->FT_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->FT_LableUPDELType = (gcnew System::Windows::Forms::Label());
			this->PF_LabelUPDELId = (gcnew System::Windows::Forms::Label());
			this->PF_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->FT_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->FT_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxAddType = (gcnew System::Windows::Forms::TextBox());
			this->FT_LableAddType = (gcnew System::Windows::Forms::Label());
			this->FT_LableAdd = (gcnew System::Windows::Forms::Label());
			this->PF_Page = (gcnew System::Windows::Forms::TabPage());
			this->PF_PanelList = (gcnew System::Windows::Forms::Panel());
			this->PF_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->PF_ListId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_ListName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_ListFTId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_ListAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_ListWorkSchedule = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_ListWeightRestrictions = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PF_LabelList = (gcnew System::Windows::Forms::Label());
			this->PF_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PF_PanelAdd = (gcnew System::Windows::Forms::Panel());
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
			this->tabControl1->SuspendLayout();
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
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->FT_Page);
			this->tabControl1->Controls->Add(this->PF_Page);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(760, 537);
			this->tabControl1->TabIndex = 0;
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
			this->FT_Page->Size = System::Drawing::Size(752, 511);
			this->FT_Page->TabIndex = 0;
			this->FT_Page->Text = L"FacilityType";
			// 
			// FT_PanelList
			// 
			this->FT_PanelList->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelList->Controls->Add(this->FT_DataGridView);
			this->FT_PanelList->Controls->Add(this->FT_LabelList);
			this->FT_PanelList->Location = System::Drawing::Point(6, 288);
			this->FT_PanelList->Name = L"FT_PanelList";
			this->FT_PanelList->Size = System::Drawing::Size(740, 217);
			this->FT_PanelList->TabIndex = 2;
			// 
			// FT_DataGridView
			// 
			this->FT_DataGridView->AllowUserToAddRows = false;
			this->FT_DataGridView->AllowUserToDeleteRows = false;
			this->FT_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FT_DataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->FT_ListId,
					this->FT_ListType
			});
			this->FT_DataGridView->Location = System::Drawing::Point(4, 44);
			this->FT_DataGridView->Name = L"FT_DataGridView";
			this->FT_DataGridView->ReadOnly = true;
			this->FT_DataGridView->Size = System::Drawing::Size(733, 170);
			this->FT_DataGridView->TabIndex = 3;
			// 
			// FT_ListId
			// 
			this->FT_ListId->HeaderText = L"Id";
			this->FT_ListId->Name = L"FT_ListId";
			this->FT_ListId->ReadOnly = true;
			this->FT_ListId->Width = 200;
			// 
			// FT_ListType
			// 
			this->FT_ListType->HeaderText = L"Тип відділення";
			this->FT_ListType->Name = L"FT_ListType";
			this->FT_ListType->ReadOnly = true;
			this->FT_ListType->Width = 480;
			// 
			// FT_LabelList
			// 
			this->FT_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LabelList->Location = System::Drawing::Point(10, 10);
			this->FT_LabelList->Name = L"FT_LabelList";
			this->FT_LabelList->Size = System::Drawing::Size(727, 30);
			this->FT_LabelList->TabIndex = 2;
			this->FT_LabelList->Text = L"Усі типи віділень";
			// 
			// FT_PanelUPDEL
			// 
			this->FT_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELDelete);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELRollBack);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ButtonUPDELSave);
			this->FT_PanelUPDEL->Controls->Add(this->FT_TextBoxUPDELType);
			this->FT_PanelUPDEL->Controls->Add(this->FT_ComboBoxUPDELId);
			this->FT_PanelUPDEL->Controls->Add(this->FT_LableUPDELType);
			this->FT_PanelUPDEL->Controls->Add(this->PF_LabelUPDELId);
			this->FT_PanelUPDEL->Controls->Add(this->PF_LabelUPDEL);
			this->FT_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->FT_PanelUPDEL->Name = L"FT_PanelUPDEL";
			this->FT_PanelUPDEL->Size = System::Drawing::Size(740, 135);
			this->FT_PanelUPDEL->TabIndex = 1;
			// 
			// FT_ButtonUPDELDelete
			// 
			this->FT_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->FT_ButtonUPDELDelete->Name = L"FT_ButtonUPDELDelete";
			this->FT_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELDelete->TabIndex = 8;
			this->FT_ButtonUPDELDelete->Text = L"Видалити";
			this->FT_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &MyForm::FT_ButtonUPDELDelete_Click);
			// 
			// FT_ButtonUPDELRollBack
			// 
			this->FT_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->FT_ButtonUPDELRollBack->Name = L"FT_ButtonUPDELRollBack";
			this->FT_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELRollBack->TabIndex = 7;
			this->FT_ButtonUPDELRollBack->Text = L"Відмінити";
			this->FT_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &MyForm::FT_ButtonUPDELRollBack_Click);
			// 
			// FT_ButtonUPDELSave
			// 
			this->FT_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->FT_ButtonUPDELSave->Name = L"FT_ButtonUPDELSave";
			this->FT_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonUPDELSave->TabIndex = 6;
			this->FT_ButtonUPDELSave->Text = L"Зберегти";
			this->FT_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->FT_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &MyForm::FT_ButtonUPDELSave_Click);
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
			this->FT_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FT_ComboBoxUPDELId_SelectedIndexChanged);
			// 
			// FT_LableUPDELType
			// 
			this->FT_LableUPDELType->Location = System::Drawing::Point(66, 40);
			this->FT_LableUPDELType->Name = L"FT_LableUPDELType";
			this->FT_LableUPDELType->Size = System::Drawing::Size(150, 20);
			this->FT_LableUPDELType->TabIndex = 3;
			this->FT_LableUPDELType->Text = L"Тип відділення";
			// 
			// PF_LabelUPDELId
			// 
			this->PF_LabelUPDELId->Location = System::Drawing::Point(10, 40);
			this->PF_LabelUPDELId->Name = L"PF_LabelUPDELId";
			this->PF_LabelUPDELId->Size = System::Drawing::Size(50, 20);
			this->PF_LabelUPDELId->TabIndex = 2;
			this->PF_LabelUPDELId->Text = L"Id";
			// 
			// PF_LabelUPDEL
			// 
			this->PF_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->PF_LabelUPDEL->Name = L"PF_LabelUPDEL";
			this->PF_LabelUPDEL->Size = System::Drawing::Size(727, 30);
			this->PF_LabelUPDEL->TabIndex = 1;
			this->PF_LabelUPDEL->Text = L"Редагувати/видалити тип відділення";
			// 
			// FT_PanelAdd
			// 
			this->FT_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FT_PanelAdd->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelAdd->Controls->Add(this->FT_ButtonAdd);
			this->FT_PanelAdd->Controls->Add(this->FT_TextBoxAddType);
			this->FT_PanelAdd->Controls->Add(this->FT_LableAddType);
			this->FT_PanelAdd->Controls->Add(this->FT_LableAdd);
			this->FT_PanelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_PanelAdd->Location = System::Drawing::Point(6, 6);
			this->FT_PanelAdd->Name = L"FT_PanelAdd";
			this->FT_PanelAdd->Size = System::Drawing::Size(737, 135);
			this->FT_PanelAdd->TabIndex = 0;
			// 
			// FT_ButtonAdd
			// 
			this->FT_ButtonAdd->Location = System::Drawing::Point(10, 100);
			this->FT_ButtonAdd->Name = L"FT_ButtonAdd";
			this->FT_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->FT_ButtonAdd->TabIndex = 3;
			this->FT_ButtonAdd->Text = L"Додати";
			this->FT_ButtonAdd->UseVisualStyleBackColor = true;
			this->FT_ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::FT_ButtonAdd_Click);
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
			this->FT_LableAddType->Text = L"Тип відділення";
			// 
			// FT_LableAdd
			// 
			this->FT_LableAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LableAdd->Location = System::Drawing::Point(10, 10);
			this->FT_LableAdd->Name = L"FT_LableAdd";
			this->FT_LableAdd->Size = System::Drawing::Size(681, 30);
			this->FT_LableAdd->TabIndex = 0;
			this->FT_LableAdd->Text = L"Додати новий тип відділення";
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
			this->PF_Page->Size = System::Drawing::Size(752, 511);
			this->PF_Page->TabIndex = 1;
			this->PF_Page->Text = L"PostalFacility";
			// 
			// PF_PanelList
			// 
			this->PF_PanelList->BackColor = System::Drawing::Color::Silver;
			this->PF_PanelList->Controls->Add(this->PF_DataGridView);
			this->PF_PanelList->Controls->Add(this->PF_LabelList);
			this->PF_PanelList->Location = System::Drawing::Point(6, 288);
			this->PF_PanelList->Name = L"PF_PanelList";
			this->PF_PanelList->Size = System::Drawing::Size(740, 217);
			this->PF_PanelList->TabIndex = 13;
			// 
			// PF_DataGridView
			// 
			this->PF_DataGridView->AllowUserToAddRows = false;
			this->PF_DataGridView->AllowUserToDeleteRows = false;
			this->PF_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PF_DataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PF_ListId,
					this->PF_ListName, this->PF_ListFTId, this->PF_ListAddress, this->PF_ListWorkSchedule, this->PF_ListWeightRestrictions
			});
			this->PF_DataGridView->Location = System::Drawing::Point(4, 44);
			this->PF_DataGridView->Name = L"PF_DataGridView";
			this->PF_DataGridView->ReadOnly = true;
			this->PF_DataGridView->Size = System::Drawing::Size(733, 170);
			this->PF_DataGridView->TabIndex = 3;
			// 
			// PF_ListId
			// 
			this->PF_ListId->HeaderText = L"Id";
			this->PF_ListId->Name = L"PF_ListId";
			this->PF_ListId->ReadOnly = true;
			this->PF_ListId->Width = 50;
			// 
			// PF_ListName
			// 
			this->PF_ListName->HeaderText = L"Назва";
			this->PF_ListName->Name = L"PF_ListName";
			this->PF_ListName->ReadOnly = true;
			this->PF_ListName->Width = 130;
			// 
			// PF_ListFTId
			// 
			this->PF_ListFTId->HeaderText = L"Тип відділення";
			this->PF_ListFTId->Name = L"PF_ListFTId";
			this->PF_ListFTId->ReadOnly = true;
			// 
			// PF_ListAddress
			// 
			this->PF_ListAddress->HeaderText = L"Адреса";
			this->PF_ListAddress->Name = L"PF_ListAddress";
			this->PF_ListAddress->ReadOnly = true;
			this->PF_ListAddress->Width = 150;
			// 
			// PF_ListWorkSchedule
			// 
			this->PF_ListWorkSchedule->HeaderText = L"Графік роботи";
			this->PF_ListWorkSchedule->Name = L"PF_ListWorkSchedule";
			this->PF_ListWorkSchedule->ReadOnly = true;
			this->PF_ListWorkSchedule->Width = 150;
			// 
			// PF_ListWeightRestrictions
			// 
			this->PF_ListWeightRestrictions->HeaderText = L"Обмеження по вазі";
			this->PF_ListWeightRestrictions->Name = L"PF_ListWeightRestrictions";
			this->PF_ListWeightRestrictions->ReadOnly = true;
			// 
			// PF_LabelList
			// 
			this->PF_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelList->Location = System::Drawing::Point(10, 10);
			this->PF_LabelList->Name = L"PF_LabelList";
			this->PF_LabelList->Size = System::Drawing::Size(727, 30);
			this->PF_LabelList->TabIndex = 2;
			this->PF_LabelList->Text = L"Усі віділення";
			// 
			// PF_PanelUPDEL
			// 
			this->PF_PanelUPDEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PF_PanelUPDEL->BackColor = System::Drawing::Color::Silver;
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
			this->PF_PanelUPDEL->Controls->Add(this->label6);
			this->PF_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_PanelUPDEL->Location = System::Drawing::Point(6, 147);
			this->PF_PanelUPDEL->Name = L"PF_PanelUPDEL";
			this->PF_PanelUPDEL->Size = System::Drawing::Size(740, 135);
			this->PF_PanelUPDEL->TabIndex = 12;
			// 
			// PF_ButtonUPDELDelete
			// 
			this->PF_ButtonUPDELDelete->Location = System::Drawing::Point(224, 95);
			this->PF_ButtonUPDELDelete->Name = L"PF_ButtonUPDELDelete";
			this->PF_ButtonUPDELDelete->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELDelete->TabIndex = 16;
			this->PF_ButtonUPDELDelete->Text = L"Видалити";
			this->PF_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELDelete->Click += gcnew System::EventHandler(this, &MyForm::PF_ButtonUPDELDelete_Click);
			// 
			// PF_ButtonUPDELRollBack
			// 
			this->PF_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 95);
			this->PF_ButtonUPDELRollBack->Name = L"PF_ButtonUPDELRollBack";
			this->PF_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELRollBack->TabIndex = 15;
			this->PF_ButtonUPDELRollBack->Text = L"Відмінити";
			this->PF_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELRollBack->Click += gcnew System::EventHandler(this, &MyForm::PF_ButtonUPDELRollBack_Click);
			// 
			// PF_ButtonUPDELSave
			// 
			this->PF_ButtonUPDELSave->Location = System::Drawing::Point(10, 95);
			this->PF_ButtonUPDELSave->Name = L"PF_ButtonUPDELSave";
			this->PF_ButtonUPDELSave->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonUPDELSave->TabIndex = 14;
			this->PF_ButtonUPDELSave->Text = L"Зберегти";
			this->PF_ButtonUPDELSave->UseVisualStyleBackColor = true;
			this->PF_ButtonUPDELSave->Click += gcnew System::EventHandler(this, &MyForm::PF_ButtonUPDELSave_Click);
			// 
			// PF_ComboBoxUPDELId
			// 
			this->PF_ComboBoxUPDELId->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PF_ComboBoxUPDELId->FormattingEnabled = true;
			this->PF_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->PF_ComboBoxUPDELId->Name = L"PF_ComboBoxUPDELId";
			this->PF_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->PF_ComboBoxUPDELId->TabIndex = 13;
			this->PF_ComboBoxUPDELId->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::PF_ComboBoxUPDELId_SelectedIndexChanged);
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
			this->PF_LableUPDELWeightRestrictions->Text = L"Обмеження по вазі";
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
			this->PF_LableUPDELWorkSchedule->Text = L"Графік роботи";
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
			this->PF_LableUPDELAddress->Text = L"Адреса";
			// 
			// PF_ComboBoxUPDELFTId
			// 
			this->PF_ComboBoxUPDELFTId->FormattingEnabled = true;
			this->PF_ComboBoxUPDELFTId->Location = System::Drawing::Point(172, 63);
			this->PF_ComboBoxUPDELFTId->Name = L"PF_ComboBoxUPDELFTId";
			this->PF_ComboBoxUPDELFTId->Size = System::Drawing::Size(120, 24);
			this->PF_ComboBoxUPDELFTId->TabIndex = 5;
			this->PF_ComboBoxUPDELFTId->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::PF_ComboBoxUPDELFTId_SelectedIndexChanged);
			// 
			// PF_LableUPDELFTId
			// 
			this->PF_LableUPDELFTId->Location = System::Drawing::Point(174, 40);
			this->PF_LableUPDELFTId->Name = L"PF_LableUPDELFTId";
			this->PF_LableUPDELFTId->Size = System::Drawing::Size(120, 20);
			this->PF_LableUPDELFTId->TabIndex = 4;
			this->PF_LableUPDELFTId->Text = L"Тип відділення";
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
			this->PF_LableUPDELName->Text = L"Назва";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(10, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(727, 30);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Редагувати/видалити відділення";
			// 
			// PF_PanelAdd
			// 
			this->PF_PanelAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PF_PanelAdd->BackColor = System::Drawing::Color::Silver;
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
			this->PF_PanelAdd->Size = System::Drawing::Size(740, 135);
			this->PF_PanelAdd->TabIndex = 1;
			// 
			// PF_LableAddWeightRestrictions
			// 
			this->PF_LableAddWeightRestrictions->Location = System::Drawing::Point(474, 40);
			this->PF_LableAddWeightRestrictions->Name = L"PF_LableAddWeightRestrictions";
			this->PF_LableAddWeightRestrictions->Size = System::Drawing::Size(150, 20);
			this->PF_LableAddWeightRestrictions->TabIndex = 11;
			this->PF_LableAddWeightRestrictions->Text = L"Обмеження по вазі";
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
			this->PF_LableAddWorkSchedule->Text = L"Графік роботи";
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
			this->PF_LableAddAddress->Text = L"Адреса";
			// 
			// PF_ComboBoxAddFTId
			// 
			this->PF_ComboBoxAddFTId->FormattingEnabled = true;
			this->PF_ComboBoxAddFTId->Location = System::Drawing::Point(116, 63);
			this->PF_ComboBoxAddFTId->Name = L"PF_ComboBoxAddFTId";
			this->PF_ComboBoxAddFTId->Size = System::Drawing::Size(120, 24);
			this->PF_ComboBoxAddFTId->TabIndex = 5;
			this->PF_ComboBoxAddFTId->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::PF_ComboBoxAddFTId_SelectedIndexChanged);
			// 
			// PF_LableAddFTId
			// 
			this->PF_LableAddFTId->Location = System::Drawing::Point(117, 40);
			this->PF_LableAddFTId->Name = L"PF_LableAddFTId";
			this->PF_LableAddFTId->Size = System::Drawing::Size(120, 20);
			this->PF_LableAddFTId->TabIndex = 4;
			this->PF_LableAddFTId->Text = L"Тип відділення";
			// 
			// PF_ButtonAdd
			// 
			this->PF_ButtonAdd->Location = System::Drawing::Point(10, 101);
			this->PF_ButtonAdd->Name = L"PF_ButtonAdd";
			this->PF_ButtonAdd->Size = System::Drawing::Size(100, 25);
			this->PF_ButtonAdd->TabIndex = 3;
			this->PF_ButtonAdd->Text = L"Додати";
			this->PF_ButtonAdd->UseVisualStyleBackColor = true;
			this->PF_ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::PF_ButtonAdd_Click);
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
			this->PF_LableAddName->Text = L"Назва";
			// 
			// PF_LabelAdd
			// 
			this->PF_LabelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PF_LabelAdd->Location = System::Drawing::Point(10, 10);
			this->PF_LabelAdd->Name = L"PF_LabelAdd";
			this->PF_LabelAdd->Size = System::Drawing::Size(727, 30);
			this->PF_LabelAdd->TabIndex = 0;
			this->PF_LabelAdd->Text = L"Додати новий тип відділення";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void FT_UPDDataGridView();
	private: void FT_UPDComboBoxId();
	private: void PF_UPDDataGridView();
	private: void PF_UPDComboBoxId();
	private: void PF_UPDComboBoxFTId();
	private: Void FT_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void FT_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void FT_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void FT_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void FT_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ButtonUPDELSave_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ButtonUPDELRollBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ButtonUPDELDelete_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ComboBoxAddFTId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ComboBoxUPDELId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void PF_ComboBoxUPDELFTId_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	};
}
