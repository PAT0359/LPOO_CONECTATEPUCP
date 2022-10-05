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
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
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
	private: System::Windows::Forms::DataGridView^ dgvAdmin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adminId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adminName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adminCodename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adminPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adminState;
	private: System::Windows::Forms::TextBox^ txtCodename;
	private: System::Windows::Forms::Label^ label5;











	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->dgvAdmin = (gcnew System::Windows::Forms::DataGridView());
			this->adminId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adminName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adminCodename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adminPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adminState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtCodename = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdmin))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(58, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Account";
			this->label1->Click += gcnew System::EventHandler(this, &AdminForm::label1_Click);
			// 
			// txtAccount
			// 
			this->txtAccount->Location = System::Drawing::Point(151, 136);
			this->txtAccount->Name = L"txtAccount";
			this->txtAccount->Size = System::Drawing::Size(244, 20);
			this->txtAccount->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pucp Id";
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
			this->label3->Location = System::Drawing::Point(58, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(151, 174);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(182, 20);
			this->txtPassword->TabIndex = 6;
			// 
			// txtState
			// 
			this->txtState->Location = System::Drawing::Point(151, 213);
			this->txtState->Name = L"txtState";
			this->txtState->Size = System::Drawing::Size(100, 20);
			this->txtState->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 216);
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
			this->btnAdd->Click += gcnew System::EventHandler(this, &AdminForm::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(275, 265);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 10;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &AdminForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(411, 265);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AdminForm::btnDelete_Click);
			// 
			// dgvAdmin
			// 
			this->dgvAdmin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAdmin->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->adminId, this->adminName,
					this->adminCodename, this->adminPassword, this->adminState
			});
			this->dgvAdmin->Location = System::Drawing::Point(0, 336);
			this->dgvAdmin->Name = L"dgvAdmin";
			this->dgvAdmin->Size = System::Drawing::Size(766, 130);
			this->dgvAdmin->TabIndex = 12;
			this->dgvAdmin->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dgvUser_CellClick);
			// 
			// adminId
			// 
			this->adminId->HeaderText = L"Pucp Id";
			this->adminId->Name = L"adminId";
			// 
			// adminName
			// 
			this->adminName->HeaderText = L"Account";
			this->adminName->Name = L"adminName";
			// 
			// adminCodename
			// 
			this->adminCodename->HeaderText = L"Codename";
			this->adminCodename->Name = L"adminCodename";
			// 
			// adminPassword
			// 
			this->adminPassword->HeaderText = L"Password";
			this->adminPassword->Name = L"adminPassword";
			// 
			// adminState
			// 
			this->adminState->HeaderText = L"State";
			this->adminState->Name = L"adminState";
			// 
			// txtCodename
			// 
			this->txtCodename->Location = System::Drawing::Point(151, 100);
			this->txtCodename->Name = L"txtCodename";
			this->txtCodename->Size = System::Drawing::Size(144, 20);
			this->txtCodename->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Codename";
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 466);
			this->Controls->Add(this->txtCodename);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvAdmin);
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
			this->Name = L"AdminForm";
			this->Text = L"Mantenimiento de administradores";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void RefreshGrid() {
			List<Admin^>^ adminList = Controller::QueryAllAdmins();
			dgvAdmin->Rows->Clear();
			for (int i = 0; i < adminList->Count; i++) {
				dgvAdmin->Rows->Add(gcnew array<String^>{
					"" + adminList[i]->PucpId,
					adminList[i]->Account,
					adminList[i]->Password,
					adminList[i]->StateUser});
			}
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Admin^ ad = gcnew Admin();
	ad->PucpId = Int32::Parse(txtPucpId->Text);
	ad->CodeName = txtCodename->Text;
	ad->Account = txtAccount->Text;
	ad->Password = txtPassword->Text;
	ad->StateUser = txtState->Text;

	Controller::AddAdmin(ad);
	RefreshGrid();
	}
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin^ ad = gcnew Admin();
		ad->PucpId = Int32::Parse(txtPucpId->Text);
		ad->CodeName = txtCodename->Text;
		ad->Account = txtAccount->Text;
		ad->Password = txtPassword->Text;
		ad->StateUser = txtState->Text;

		Controller::UpdateAdmin(ad);
		RefreshGrid();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int adminId = Int32::Parse(txtPucpId->Text);
		Controller::DeleteAdmin(adminId);
		RefreshGrid();
	}
	
private: System::Void dgvUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvAdmin->SelectedCells[0]->RowIndex;
	int adminId = Int32::Parse(dgvAdmin->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Admin^ ad = Controller::QueryAdminById(adminId);

	txtPucpId->Text = "" + ad->PucpId;
	txtCodename->Text = ad->Account;
	txtAccount->Text = ad->Account;
	txtPassword->Text = ad->Password;
	txtState->Text = ad->StateUser;
}
};
}
