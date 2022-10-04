#pragma once

namespace ConectateApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace ConectateModel;
	using namespace ConectateController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de TagsForm
	/// </summary>
	public ref class TagsForm : public System::Windows::Forms::Form
	{
	public:
		TagsForm(void)
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
		~TagsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;



	private: System::Windows::Forms::TextBox^ txtSportName;
	private: System::Windows::Forms::TextBox^ txtClubName;
	private: System::Windows::Forms::TextBox^ txtClassName;
	private: System::Windows::Forms::TextBox^ txtProfessorName;

	private: System::Windows::Forms::TextBox^ txtEventName;






	private: System::Windows::Forms::DataGridView^ dgvTags;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TagId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeTag;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TagName;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->txtSportName = (gcnew System::Windows::Forms::TextBox());
			this->txtClubName = (gcnew System::Windows::Forms::TextBox());
			this->txtClassName = (gcnew System::Windows::Forms::TextBox());
			this->txtProfessorName = (gcnew System::Windows::Forms::TextBox());
			this->txtEventName = (gcnew System::Windows::Forms::TextBox());
			this->dgvTags = (gcnew System::Windows::Forms::DataGridView());
			this->TagId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeTag = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TagName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTags))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(697, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 22);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &TagsForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(121, 37);
			this->txtId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtId->Multiline = true;
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(165, 18);
			this->txtId->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 70);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Sport";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 103);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Club";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 136);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Class";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 169);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Professor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 202);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Event";
			this->label6->Click += gcnew System::EventHandler(this, &TagsForm::label6_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(121, 244);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(72, 28);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &TagsForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(261, 244);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(82, 28);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &TagsForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(411, 244);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(84, 28);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &TagsForm::btnDelete_Click);
			// 
			// txtSportName
			// 
			this->txtSportName->Location = System::Drawing::Point(121, 67);
			this->txtSportName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSportName->Name = L"txtSportName";
			this->txtSportName->Size = System::Drawing::Size(165, 20);
			this->txtSportName->TabIndex = 11;
			// 
			// txtClubName
			// 
			this->txtClubName->Location = System::Drawing::Point(121, 100);
			this->txtClubName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtClubName->Name = L"txtClubName";
			this->txtClubName->Size = System::Drawing::Size(165, 20);
			this->txtClubName->TabIndex = 12;
			// 
			// txtClassName
			// 
			this->txtClassName->Location = System::Drawing::Point(121, 133);
			this->txtClassName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtClassName->Name = L"txtClassName";
			this->txtClassName->Size = System::Drawing::Size(165, 20);
			this->txtClassName->TabIndex = 13;
			// 
			// txtProfessorName
			// 
			this->txtProfessorName->Location = System::Drawing::Point(121, 166);
			this->txtProfessorName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtProfessorName->Name = L"txtProfessorName";
			this->txtProfessorName->Size = System::Drawing::Size(165, 20);
			this->txtProfessorName->TabIndex = 14;
			// 
			// txtEventName
			// 
			this->txtEventName->Location = System::Drawing::Point(121, 199);
			this->txtEventName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtEventName->Name = L"txtEventName";
			this->txtEventName->Size = System::Drawing::Size(165, 20);
			this->txtEventName->TabIndex = 15;
			// 
			// dgvTags
			// 
			this->dgvTags->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTags->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->TagId, this->TypeTag,
					this->TagName
			});
			this->dgvTags->Location = System::Drawing::Point(0, 307);
			this->dgvTags->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvTags->Name = L"dgvTags";
			this->dgvTags->RowHeadersWidth = 62;
			this->dgvTags->RowTemplate->Height = 28;
			this->dgvTags->Size = System::Drawing::Size(562, 140);
			this->dgvTags->TabIndex = 16;
			this->dgvTags->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TagsForm::dgvTags_CellClick);
			// 
			// TagId
			// 
			this->TagId->HeaderText = L"Id";
			this->TagId->MinimumWidth = 8;
			this->TagId->Name = L"TagId";
			this->TagId->Width = 150;
			// 
			// TypeTag
			// 
			this->TypeTag->HeaderText = L"Tipo de Tag";
			this->TypeTag->MinimumWidth = 8;
			this->TypeTag->Name = L"TypeTag";
			this->TypeTag->Width = 200;
			// 
			// TagName
			// 
			this->TagName->HeaderText = L"Nombre";
			this->TagName->MinimumWidth = 8;
			this->TagName->Name = L"TagName";
			this->TagName->Width = 200;
			// 
			// TagsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 447);
			this->Controls->Add(this->dgvTags);
			this->Controls->Add(this->txtEventName);
			this->Controls->Add(this->txtProfessorName);
			this->Controls->Add(this->txtClassName);
			this->Controls->Add(this->txtClubName);
			this->Controls->Add(this->txtSportName);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"TagsForm";
			this->Text = L"Mantenimiento de Tags";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTags))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void RefreshGrid() {
			List<Tags^>^ tagList = Controller::QueryAllTags();
			dgvTags->Rows->Clear();
			for (int i = 0; i < tagList->Count; i++) {
				dgvTags->Rows->Add(gcnew array<String^>{
					"" + tagList[i]->TagId,
						tagList[i]->TagType,
						tagList[i]->TagName
				});
			}
		}
		void ClearControls() {
			txtId->Clear();
			txtSportName->Clear();
			txtClubName->Clear();
			txtClassName->Clear();
			txtProfessorName->Clear();
			txtEventName->Clear();
		}

	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		bool x = true;
		Tags^ t = gcnew Tags();
		t->TagId = Int32::Parse(txtId->Text);
		if (txtSportName->Text->Trim() != "") {
			//t->SportTag = txtSportName->Text;
			t->TagType = "Sport";
			t->TagName = txtSportName->Text;
		}
		else if (txtClubName->Text->Trim() != "") {
			//t->ClubTag = txtClubName->Text;
			t->TagType = "Club";
			t->TagName = txtClubName->Text;
		}
		else if (txtClassName->Text->Trim() != "") {
			//t->ClassTag = txtClassName->Text;
			t->TagType = "Class";
			t->TagName = txtClassName->Text;
		}
		else if (txtProfessorName->Text->Trim() != "") {
			//t->ProfessorTag = txtProfessorName->Text;
			t->TagType = "Professor";
			t->TagName = txtProfessorName->Text;
		}
		else if (txtEventName->Text->Trim() != "") {
			//t->EventTag = txtEventName->Text;
			t->TagType = "Event";
			t->TagName = txtEventName->Text;
		}
		else {
			x = false;
		}
		if (x) {
			Controller::CreateTags(t);
			RefreshGrid();
			ClearControls();
		}

	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		bool x = true;
		Tags^ t = gcnew Tags();
		t->TagId = Int32::Parse(txtId->Text);
		if (txtSportName->Text->Trim() != "") {
			//t->SportTag = txtSportName->Text;
			t->TagType = "Sport";
			t->TagName = txtSportName->Text;
		}
		else if (txtClubName->Text->Trim() != "") {
			//t->ClubTag = txtClubName->Text;
			t->TagType = "Club";
			t->TagName = txtClubName->Text;
		}
		else if (txtClassName->Text->Trim() != "") {
			//t->ClassTag = txtClassName->Text;
			t->TagType = "Class";
			t->TagName = txtClassName->Text;
		}
		else if (txtProfessorName->Text->Trim() != "") {
			//t->ProfessorTag = txtProfessorName->Text;
			t->TagType = "Professor";
			t->TagName = txtProfessorName->Text;
		}
		else if (txtEventName->Text->Trim() != "") {
			//t->EventTag = txtEventName->Text;
			t->TagType = "Event";
			t->TagName = txtEventName->Text;
		}
		else {
			x = false;
		}
		if (x) {
			Controller::UpdateTag(t);
			RefreshGrid();
		}

	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		int tagId = Int32::Parse(txtId->Text);
		Controller::DeleteTags(tagId);
		RefreshGrid();
		ClearControls();
	}
	private: System::Void dgvTags_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvTags->SelectedCells[0]->RowIndex;
		int tagId = Int32::Parse(dgvTags->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Tags^ t = Controller::QueryTagsById(tagId);

		ClearControls();
		txtId->Text = "" + t->TagId;
		if (t->TagType == "Sport") {
			txtSportName->Text = t->TagName;
		}
		else if (t->TagType == "Club") {
			txtClubName->Text = t->TagName;
		}
		else if (t->TagType == "Class") {
			txtClassName->Text = t->TagName;
		}
		else if (t->TagType == "Club") {
			txtClubName->Text = t->TagName;
		}
		else if (t->TagType == "Professor") {
			txtProfessorName->Text = t->TagName;
		}
		else if (t->TagType == "Event") {
			txtEventName->Text = t->TagName;
		}

	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}