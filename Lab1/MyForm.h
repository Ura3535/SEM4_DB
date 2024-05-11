#pragma once

namespace Lab1 {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ FT_LabelUPDEL;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FT_ListId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FT_ListType;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->FT_Page = (gcnew System::Windows::Forms::TabPage());
			this->FT_PanelList = (gcnew System::Windows::Forms::Panel());
			this->FT_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->FT_ListId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FT_LabelList = (gcnew System::Windows::Forms::Label());
			this->FT_PanelUPDEL = (gcnew System::Windows::Forms::Panel());
			this->FT_ButtonUPDELDelete = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELRollBack = (gcnew System::Windows::Forms::Button());
			this->FT_ButtonUPDELSave = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxUPDELType = (gcnew System::Windows::Forms::TextBox());
			this->FT_ComboBoxUPDELId = (gcnew System::Windows::Forms::ComboBox());
			this->FT_LableUPDELType = (gcnew System::Windows::Forms::Label());
			this->PF_LabelUPDELId = (gcnew System::Windows::Forms::Label());
			this->FT_LabelUPDEL = (gcnew System::Windows::Forms::Label());
			this->FT_PanelAdd = (gcnew System::Windows::Forms::Panel());
			this->FT_ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->FT_TextBoxAddType = (gcnew System::Windows::Forms::TextBox());
			this->FT_LableAddType = (gcnew System::Windows::Forms::Label());
			this->FT_LableAdd = (gcnew System::Windows::Forms::Label());
			this->PF_Page = (gcnew System::Windows::Forms::TabPage());
			this->FT_ListType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->FT_Page->SuspendLayout();
			this->FT_PanelList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FT_DataGridView))->BeginInit();
			this->FT_PanelUPDEL->SuspendLayout();
			this->FT_PanelAdd->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->FT_Page);
			this->tabControl1->Controls->Add(this->PF_Page);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(560, 537);
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
			this->FT_Page->Size = System::Drawing::Size(552, 511);
			this->FT_Page->TabIndex = 0;
			this->FT_Page->Text = L"FacilityType";
			// 
			// FT_PanelList
			// 
			this->FT_PanelList->BackColor = System::Drawing::Color::Silver;
			this->FT_PanelList->Controls->Add(this->FT_DataGridView);
			this->FT_PanelList->Controls->Add(this->FT_LabelList);
			this->FT_PanelList->Location = System::Drawing::Point(6, 260);
			this->FT_PanelList->Name = L"FT_PanelList";
			this->FT_PanelList->Size = System::Drawing::Size(540, 245);
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
			this->FT_DataGridView->Size = System::Drawing::Size(533, 198);
			this->FT_DataGridView->TabIndex = 3;
			// 
			// FT_ListId
			// 
			this->FT_ListId->HeaderText = L"Id";
			this->FT_ListId->Name = L"FT_ListId";
			this->FT_ListId->ReadOnly = true;
			// 
			// FT_LabelList
			// 
			this->FT_LabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LabelList->Location = System::Drawing::Point(10, 10);
			this->FT_LabelList->Name = L"FT_LabelList";
			this->FT_LabelList->Size = System::Drawing::Size(527, 30);
			this->FT_LabelList->TabIndex = 2;
			this->FT_LabelList->Text = L"Усі віділення";
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
			this->FT_PanelUPDEL->Controls->Add(this->FT_LabelUPDEL);
			this->FT_PanelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_PanelUPDEL->Location = System::Drawing::Point(6, 112);
			this->FT_PanelUPDEL->Name = L"FT_PanelUPDEL";
			this->FT_PanelUPDEL->Size = System::Drawing::Size(540, 142);
			this->FT_PanelUPDEL->TabIndex = 1;
			// 
			// FT_ButtonUPDELDelete
			// 
			this->FT_ButtonUPDELDelete->Location = System::Drawing::Point(224, 94);
			this->FT_ButtonUPDELDelete->Name = L"FT_ButtonUPDELDelete";
			this->FT_ButtonUPDELDelete->Size = System::Drawing::Size(100, 23);
			this->FT_ButtonUPDELDelete->TabIndex = 8;
			this->FT_ButtonUPDELDelete->Text = L"Видалити";
			this->FT_ButtonUPDELDelete->UseVisualStyleBackColor = true;
			// 
			// FT_ButtonUPDELRollBack
			// 
			this->FT_ButtonUPDELRollBack->Location = System::Drawing::Point(117, 94);
			this->FT_ButtonUPDELRollBack->Name = L"FT_ButtonUPDELRollBack";
			this->FT_ButtonUPDELRollBack->Size = System::Drawing::Size(100, 23);
			this->FT_ButtonUPDELRollBack->TabIndex = 7;
			this->FT_ButtonUPDELRollBack->Text = L"Відмінити";
			this->FT_ButtonUPDELRollBack->UseVisualStyleBackColor = true;
			// 
			// FT_ButtonUPDELSave
			// 
			this->FT_ButtonUPDELSave->Location = System::Drawing::Point(10, 94);
			this->FT_ButtonUPDELSave->Name = L"FT_ButtonUPDELSave";
			this->FT_ButtonUPDELSave->Size = System::Drawing::Size(100, 23);
			this->FT_ButtonUPDELSave->TabIndex = 6;
			this->FT_ButtonUPDELSave->Text = L"Зберегти";
			this->FT_ButtonUPDELSave->UseVisualStyleBackColor = true;
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
			this->FT_ComboBoxUPDELId->FormattingEnabled = true;
			this->FT_ComboBoxUPDELId->Location = System::Drawing::Point(10, 63);
			this->FT_ComboBoxUPDELId->Name = L"FT_ComboBoxUPDELId";
			this->FT_ComboBoxUPDELId->Size = System::Drawing::Size(50, 24);
			this->FT_ComboBoxUPDELId->TabIndex = 4;
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
			// FT_LabelUPDEL
			// 
			this->FT_LabelUPDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FT_LabelUPDEL->Location = System::Drawing::Point(10, 10);
			this->FT_LabelUPDEL->Name = L"FT_LabelUPDEL";
			this->FT_LabelUPDEL->Size = System::Drawing::Size(527, 30);
			this->FT_LabelUPDEL->TabIndex = 1;
			this->FT_LabelUPDEL->Text = L"Редагувати/видалити тип відділення";
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
			this->FT_PanelAdd->Size = System::Drawing::Size(540, 100);
			this->FT_PanelAdd->TabIndex = 0;
			// 
			// FT_ButtonAdd
			// 
			this->FT_ButtonAdd->Location = System::Drawing::Point(166, 63);
			this->FT_ButtonAdd->Name = L"FT_ButtonAdd";
			this->FT_ButtonAdd->Size = System::Drawing::Size(100, 22);
			this->FT_ButtonAdd->TabIndex = 3;
			this->FT_ButtonAdd->Text = L"Додати";
			this->FT_ButtonAdd->UseVisualStyleBackColor = true;
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
			this->FT_LableAdd->Size = System::Drawing::Size(527, 30);
			this->FT_LableAdd->TabIndex = 0;
			this->FT_LableAdd->Text = L"Додати новий тип відділення";
			// 
			// PF_Page
			// 
			this->PF_Page->Location = System::Drawing::Point(4, 22);
			this->PF_Page->Name = L"PF_Page";
			this->PF_Page->Padding = System::Windows::Forms::Padding(3);
			this->PF_Page->Size = System::Drawing::Size(552, 511);
			this->PF_Page->TabIndex = 1;
			this->PF_Page->Text = L"PostalFacility";
			this->PF_Page->UseVisualStyleBackColor = true;
			// 
			// FT_ListType
			// 
			this->FT_ListType->HeaderText = L"Тип відділення";
			this->FT_ListType->Name = L"FT_ListType";
			this->FT_ListType->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
