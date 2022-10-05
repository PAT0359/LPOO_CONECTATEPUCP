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
	/// Resumen de UserForm
	/// </summary>
	public ref class CreatorForm : public System::Windows::Forms::Form
	{
	public:
		CreatorForm(void)
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
		~CreatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAccount;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPucpId;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtState;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvCreator;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ creatorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ creatorName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ creatorPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ creatorState;























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
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAccount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPucpId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtState = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvCreator = (gcnew System::Windows::Forms::DataGridView());
			this->creatorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->creatorName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->creatorPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->creatorState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCreator))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(766, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Account";
			this->label1->Click += gcnew System::EventHandler(this, &CreatorForm::label1_Click);
			// 
			// txtAccount
			// 
			this->txtAccount->Location = System::Drawing::Point(148, 98);
			this->txtAccount->Name = L"txtAccount";
			this->txtAccount->Size = System::Drawing::Size(244, 20);
			this->txtAccount->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Creator Id";
			// 
			// txtPucpId
			// 
			this->txtPucpId->Location = System::Drawing::Point(151, 62);
			this->txtPucpId->Name = L"txtPucpId";
			this->txtPucpId->Size = System::Drawing::Size(144, 20);
			this->txtPucpId->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(148, 136);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(182, 20);
			this->txtPassword->TabIndex = 6;
			// 
			// txtState
			// 
			this->txtState->Location = System::Drawing::Point(148, 175);
			this->txtState->Name = L"txtState";
			this->txtState->Size = System::Drawing::Size(100, 20);
			this->txtState->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"State";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(148, 265);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CreatorForm::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(275, 265);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 10;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &CreatorForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(411, 265);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CreatorForm::btnDelete_Click);
			// 
			// dgvCreator
			// 
			this->dgvCreator->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCreator->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->creatorId,
					this->creatorName, this->creatorPassword, this->creatorState
			});
			this->dgvCreator->Location = System::Drawing::Point(0, 336);
			this->dgvCreator->Name = L"dgvCreator";
			this->dgvCreator->Size = System::Drawing::Size(766, 130);
			this->dgvCreator->TabIndex = 12;
			this->dgvCreator->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CreatorForm::dgvUser_CellClick);
			// 
			// creatorId
			// 
			this->creatorId->HeaderText = L"Creator Id";
			this->creatorId->Name = L"creatorId";
			// 
			// creatorName
			// 
			this->creatorName->HeaderText = L"Account";
			this->creatorName->Name = L"creatorName";
			// 
			// creatorPassword
			// 
			this->creatorPassword->HeaderText = L"Password";
			this->creatorPassword->Name = L"creatorPassword";
			// 
			// creatorState
			// 
			this->creatorState->HeaderText = L"State";
			this->creatorState->Name = L"creatorState";
			// 
			// CreatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 466);
			this->Controls->Add(this->dgvCreator);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtState);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPucpId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtAccount);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CreatorForm";
			this->Text = L"Mantenimiento de creadores";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCreator))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void RefreshGrid() {
			List<Creator^>^ creatorList = Controller::QueryAllCreators();
			dgvCreator->Rows->Clear();
			for (int i = 0; i < creatorList->Count; i++) {
				dgvCreator->Rows->Add(gcnew array<String^>{
					"" + creatorList[i]->PucpId,
						creatorList[i]->Account,
						creatorList[i]->Password,
						creatorList[i]->StateUser});
			}
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Creator^ c = gcnew Creator();
		c->PucpId = Int32::Parse(txtPucpId->Text);
		c->Account = txtAccount->Text;
		c->Password = txtPassword->Text;
		c->StateUser = txtState->Text;

		Controller::AddCreator(c);
		RefreshGrid();
	}
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		Creator^ c = gcnew Creator();
		c->PucpId = Int32::Parse(txtPucpId->Text);
		c->Account = txtAccount->Text;
		c->Password = txtPassword->Text;
		c->StateUser = txtState->Text;

		Controller::UpdateCreator(c);
		RefreshGrid();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int creatorId = Int32::Parse(txtPucpId->Text);
		Controller::DeleteCreator(creatorId);
		RefreshGrid();
	}

	private: System::Void dgvUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvCreator->SelectedCells[0]->RowIndex;
		int creatorId = Int32::Parse(dgvCreator->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Creator^ c = Controller::QueryCreatorById(creatorId);

		txtPucpId->Text = "" + c->PucpId;
		txtAccount->Text = c->Account;
		txtPassword->Text = c->Password;
		txtState->Text = c->StateUser;
	}
	};
}
