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
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
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
	private: System::Windows::Forms::DataGridView^ dgvUser;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userState;





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
			this->dgvUser = (gcnew System::Windows::Forms::DataGridView());
			this->userId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUser))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(709, 24);
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
			this->label1->Location = System::Drawing::Point(58, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Account";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// txtAccount
			// 
			this->txtAccount->Location = System::Drawing::Point(151, 40);
			this->txtAccount->Name = L"txtAccount";
			this->txtAccount->Size = System::Drawing::Size(244, 20);
			this->txtAccount->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pucp Id";
			// 
			// txtPucpId
			// 
			this->txtPucpId->Location = System::Drawing::Point(151, 84);
			this->txtPucpId->Name = L"txtPucpId";
			this->txtPucpId->Size = System::Drawing::Size(144, 20);
			this->txtPucpId->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(151, 126);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(182, 20);
			this->txtPassword->TabIndex = 6;
			// 
			// txtState
			// 
			this->txtState->Location = System::Drawing::Point(151, 165);
			this->txtState->Name = L"txtState";
			this->txtState->Size = System::Drawing::Size(100, 20);
			this->txtState->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"State";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(148, 218);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &UserForm::btnAdd_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(275, 218);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 10;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &UserForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(411, 218);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &UserForm::btnDelete_Click);
			// 
			// dgvUser
			// 
			this->dgvUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUser->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->userId, this->userName,
					this->userPassword, this->userState
			});
			this->dgvUser->Location = System::Drawing::Point(0, 268);
			this->dgvUser->Name = L"dgvUser";
			this->dgvUser->Size = System::Drawing::Size(709, 150);
			this->dgvUser->TabIndex = 12;
			this->dgvUser->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dgvUser_CellClick);
			// 
			// userId
			// 
			this->userId->HeaderText = L"Pucp Id";
			this->userId->Name = L"userId";
			// 
			// userName
			// 
			this->userName->HeaderText = L"Account";
			this->userName->Name = L"userName";
			// 
			// userPassword
			// 
			this->userPassword->HeaderText = L"Password";
			this->userPassword->Name = L"userPassword";
			// 
			// userState
			// 
			this->userState->HeaderText = L"State";
			this->userState->Name = L"userState";
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 393);
			this->Controls->Add(this->dgvUser);
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
			this->Name = L"UserForm";
			this->Text = L"Mantenimiento de usuarios";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUser))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void RefreshGrid() {
			List<User^>^ userList = Controller::QueryAllUsers();
			dgvUser->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				dgvUser->Rows->Add(gcnew array<String^>{
					"" + userList[i]->PucpId,
					userList[i]->Account,
					userList[i]->Password,
					userList[i]->StateUser});
			}
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ u = gcnew User();
	u->PucpId = Int32::Parse(txtPucpId->Text);
	u->Account = txtAccount->Text;
	u->Password = txtPassword->Text;
	u->StateUser = txtState->Text;

	Controller::AddUser(u);
	RefreshGrid();
	}
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ u = gcnew User();
		u->PucpId = Int32::Parse(txtPucpId->Text);
		u->Account = txtAccount->Text;
		u->Password = txtPassword->Text;
		u->StateUser = txtState->Text;

		Controller::UpdateUser(u);
		RefreshGrid();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int userId = Int32::Parse(txtPucpId->Text);
		Controller::DeleteUser(userId);
		RefreshGrid();
	}
	
private: System::Void dgvUser_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvUser->SelectedCells[0]->RowIndex;
	int userId = Int32::Parse(dgvUser->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	User^ u = Controller::QueryUserById(userId);

	txtPucpId->Text = "" + u->PucpId;
	txtAccount->Text = u->Account;
	txtPassword->Text = u->Password;
	txtState->Text = u->StateUser;
}
};
}
