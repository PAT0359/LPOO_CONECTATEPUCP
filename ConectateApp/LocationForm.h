#pragma once

namespace ConectateApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ConectateController;
	using namespace ConectateModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de LocationForm
	/// </summary>
	public ref class LocationForm : public System::Windows::Forms::Form
	{
	public:
		LocationForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LocationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtLocationName;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLocationId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvLocation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ locationId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ locationName;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtLocationName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLocationId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvLocation = (gcnew System::Windows::Forms::DataGridView());
			this->locationId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->locationName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLocation))->BeginInit();
			this->SuspendLayout();
			// 
			// txtLocationName
			// 
			this->txtLocationName->Location = System::Drawing::Point(160, 118);
			this->txtLocationName->Name = L"txtLocationName";
			this->txtLocationName->Size = System::Drawing::Size(313, 20);
			this->txtLocationName->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			// 
			// txtLocationId
			// 
			this->txtLocationId->Location = System::Drawing::Point(160, 74);
			this->txtLocationId->Name = L"txtLocationId";
			this->txtLocationId->Size = System::Drawing::Size(143, 20);
			this->txtLocationId->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Location Id";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(121, 200);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &LocationForm::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(277, 200);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 10;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &LocationForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(425, 200);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &LocationForm::btnDelete_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(662, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->UseWaitCursor = true;
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// dgvLocation
			// 
			this->dgvLocation->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLocation->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->locationId,
					this->locationName
			});
			this->dgvLocation->Location = System::Drawing::Point(0, 251);
			this->dgvLocation->Name = L"dgvLocation";
			this->dgvLocation->Size = System::Drawing::Size(662, 133);
			this->dgvLocation->TabIndex = 13;
			this->dgvLocation->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &LocationForm::dgvLocation_CellClick);
			// 
			// locationId
			// 
			this->locationId->HeaderText = L"Id";
			this->locationId->Name = L"locationId";
			this->locationId->Width = 200;
			// 
			// locationName
			// 
			this->locationName->HeaderText = L"Name";
			this->locationName->Name = L"locationName";
			this->locationName->Width = 200;
			// 
			// LocationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 384);
			this->Controls->Add(this->dgvLocation);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtLocationName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLocationId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LocationForm";
			this->Text = L"LocationForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLocation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void RefreshGrid() {
				/*List<Location^>^ locationList = Controller::QueryAllLocation();
				dgvLocation->Rows->Clear();
				for (int i = 0; i < locationList->Count; i++) {
					dgvLocation->Rows->Add(gcnew array<String^>{
						"" + locationList[i]->LocationId,
							locationList[i]->LocationName});
				}*/
			}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Location^ l = gcnew Location();
		l->LocationId = Int32::Parse(txtLocationId->Text);
		l->LocationName = txtLocationName->Text;

		Controller::AddLocation(l);
		RefreshGrid();*/
	}
private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Location^ l = gcnew Location();
	l->LocationId = Int32::Parse(txtLocationId->Text);
	l->LocationName = txtLocationName->Text;

	Controller::UpdateLocation(l);
	RefreshGrid();*/
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int locationId = Int32::Parse(txtLocationId->Text);
	Controller::DeleteUser(locationId);
	RefreshGrid();*/
}
private: System::Void dgvLocation_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*int selectedRowIndex = dgvLocation->SelectedCells[0]->RowIndex;
	int locationId = Int32::Parse(dgvLocation->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Location^ l = Controller::QueryLocationById(locationId);

	txtLocationId->Text = "" + l->LocationId;
	txtLocationName->Text = l->LocationName;*/
}
	};
}
