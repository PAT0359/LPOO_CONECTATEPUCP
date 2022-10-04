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
	/// Resumen de ActivityForm
	/// </summary>
	public ref class ActivityForm : public System::Windows::Forms::Form
	{
	public:
		ActivityForm(void)
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
		~ActivityForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevaActividadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarActividadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtTitle;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLocationId;

	private: System::Windows::Forms::TextBox^ txtStarDate;
	private: System::Windows::Forms::TextBox^ txtEndDate;
	private: System::Windows::Forms::TextBox^ txtDescription;



	private: System::Windows::Forms::TextBox^ txtCreatorId;

	private: System::Windows::Forms::TextBox^ txtActivityId;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtDeadLine;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtState;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtTotalParticipants;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvActivity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityCreatorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityStartDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityEndDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityDeadLine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityLocationId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityState;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ activityTotalParticipants;

























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
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevaActividadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarActividadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLocationId = (gcnew System::Windows::Forms::TextBox());
			this->txtStarDate = (gcnew System::Windows::Forms::TextBox());
			this->txtEndDate = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtCreatorId = (gcnew System::Windows::Forms::TextBox());
			this->txtActivityId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtDeadLine = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtState = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtTotalParticipants = (gcnew System::Windows::Forms::TextBox());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvActivity = (gcnew System::Windows::Forms::DataGridView());
			this->activityId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityCreatorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityStartDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityEndDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityDeadLine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityLocationId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->activityTotalParticipants = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActivity))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(967, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevaActividadToolStripMenuItem,
					this->editarActividadToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevaActividadToolStripMenuItem
			// 
			this->nuevaActividadToolStripMenuItem->Name = L"nuevaActividadToolStripMenuItem";
			this->nuevaActividadToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->nuevaActividadToolStripMenuItem->Text = L"Crear Actividad";
			this->nuevaActividadToolStripMenuItem->Click += gcnew System::EventHandler(this, &ActivityForm::nuevaActividadToolStripMenuItem_Click);
			// 
			// editarActividadToolStripMenuItem
			// 
			this->editarActividadToolStripMenuItem->Name = L"editarActividadToolStripMenuItem";
			this->editarActividadToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->editarActividadToolStripMenuItem->Text = L"Editar Actividad";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Activity Id";
			this->label1->Click += gcnew System::EventHandler(this, &ActivityForm::label1_Click);
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(132, 80);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(100, 20);
			this->txtTitle->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Title";
			this->label2->Click += gcnew System::EventHandler(this, &ActivityForm::label2_Click);
			// 
			// txtLocationId
			// 
			this->txtLocationId->Location = System::Drawing::Point(132, 262);
			this->txtLocationId->Name = L"txtLocationId";
			this->txtLocationId->Size = System::Drawing::Size(100, 20);
			this->txtLocationId->TabIndex = 4;
			// 
			// txtStarDate
			// 
			this->txtStarDate->Location = System::Drawing::Point(132, 106);
			this->txtStarDate->Name = L"txtStarDate";
			this->txtStarDate->Size = System::Drawing::Size(100, 20);
			this->txtStarDate->TabIndex = 5;
			// 
			// txtEndDate
			// 
			this->txtEndDate->Location = System::Drawing::Point(132, 132);
			this->txtEndDate->Name = L"txtEndDate";
			this->txtEndDate->Size = System::Drawing::Size(100, 20);
			this->txtEndDate->TabIndex = 6;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(132, 184);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(279, 72);
			this->txtDescription->TabIndex = 7;
			// 
			// txtCreatorId
			// 
			this->txtCreatorId->Location = System::Drawing::Point(132, 54);
			this->txtCreatorId->Name = L"txtCreatorId";
			this->txtCreatorId->Size = System::Drawing::Size(100, 20);
			this->txtCreatorId->TabIndex = 8;
			// 
			// txtActivityId
			// 
			this->txtActivityId->Location = System::Drawing::Point(132, 28);
			this->txtActivityId->Name = L"txtActivityId";
			this->txtActivityId->Size = System::Drawing::Size(100, 20);
			this->txtActivityId->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Location Id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Creator Id";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Description";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Start Date";
			this->label6->Click += gcnew System::EventHandler(this, &ActivityForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"End Date";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Deadline";
			// 
			// txtDeadLine
			// 
			this->txtDeadLine->Location = System::Drawing::Point(132, 158);
			this->txtDeadLine->Name = L"txtDeadLine";
			this->txtDeadLine->Size = System::Drawing::Size(100, 20);
			this->txtDeadLine->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 291);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"State";
			// 
			// txtState
			// 
			this->txtState->Location = System::Drawing::Point(132, 288);
			this->txtState->Name = L"txtState";
			this->txtState->Size = System::Drawing::Size(100, 20);
			this->txtState->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 318);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Total Participants";
			// 
			// txtTotalParticipants
			// 
			this->txtTotalParticipants->Location = System::Drawing::Point(132, 315);
			this->txtTotalParticipants->Name = L"txtTotalParticipants";
			this->txtTotalParticipants->Size = System::Drawing::Size(100, 20);
			this->txtTotalParticipants->TabIndex = 20;
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(552, 31);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(238, 252);
			this->pbPhoto->TabIndex = 21;
			this->pbPhoto->TabStop = false;
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(390, 341);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(121, 23);
			this->btnCreate->TabIndex = 22;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &ActivityForm::btnCreate_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(581, 341);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(121, 25);
			this->btnEdit->TabIndex = 23;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &ActivityForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(765, 341);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(121, 25);
			this->btnDelete->TabIndex = 24;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ActivityForm::btnDelete_Click);
			// 
			// dgvActivity
			// 
			this->dgvActivity->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvActivity->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->activityId,
					this->activityCreatorId, this->activityTitle, this->activityStartDate, this->activityEndDate, this->activityDeadLine, this->activityDescription,
					this->activityLocationId, this->activityState, this->activityTotalParticipants
			});
			this->dgvActivity->Location = System::Drawing::Point(0, 396);
			this->dgvActivity->Name = L"dgvActivity";
			this->dgvActivity->Size = System::Drawing::Size(967, 136);
			this->dgvActivity->TabIndex = 25;
			this->dgvActivity->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ActivityForm::dgvActivity_CellClick);
			this->dgvActivity->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ActivityForm::dataGridView1_CellContentClick);
			// 
			// activityId
			// 
			this->activityId->HeaderText = L"Activity Id";
			this->activityId->Name = L"activityId";
			this->activityId->Width = 80;
			// 
			// activityCreatorId
			// 
			this->activityCreatorId->HeaderText = L"Creator Id";
			this->activityCreatorId->Name = L"activityCreatorId";
			this->activityCreatorId->Width = 80;
			// 
			// activityTitle
			// 
			this->activityTitle->HeaderText = L"Title";
			this->activityTitle->Name = L"activityTitle";
			// 
			// activityStartDate
			// 
			this->activityStartDate->HeaderText = L"Start Date";
			this->activityStartDate->Name = L"activityStartDate";
			this->activityStartDate->Width = 90;
			// 
			// activityEndDate
			// 
			this->activityEndDate->HeaderText = L"End Date";
			this->activityEndDate->Name = L"activityEndDate";
			this->activityEndDate->Width = 80;
			// 
			// activityDeadLine
			// 
			this->activityDeadLine->HeaderText = L"Deadline";
			this->activityDeadLine->Name = L"activityDeadLine";
			this->activityDeadLine->Width = 75;
			// 
			// activityDescription
			// 
			this->activityDescription->HeaderText = L"Description";
			this->activityDescription->Name = L"activityDescription";
			this->activityDescription->Width = 177;
			// 
			// activityLocationId
			// 
			this->activityLocationId->HeaderText = L"Location Id";
			this->activityLocationId->Name = L"activityLocationId";
			this->activityLocationId->Width = 90;
			// 
			// activityState
			// 
			this->activityState->HeaderText = L"State";
			this->activityState->Name = L"activityState";
			this->activityState->Width = 80;
			// 
			// activityTotalParticipants
			// 
			this->activityTotalParticipants->HeaderText = L"Total Participants";
			this->activityTotalParticipants->Name = L"activityTotalParticipants";
			this->activityTotalParticipants->Width = 70;
			// 
			// ActivityForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 531);
			this->Controls->Add(this->dgvActivity);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtTotalParticipants);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtState);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtDeadLine);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtActivityId);
			this->Controls->Add(this->txtCreatorId);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtEndDate);
			this->Controls->Add(this->txtStarDate);
			this->Controls->Add(this->txtLocationId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ActivityForm";
			this->Text = L"Mantenimiento de actividades";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActivity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			void RefreshGrid() {
				List<Activity^>^activityList = Controller::QueryAllActivities();
				dgvActivity->Rows->Clear();
				for (int i = 0; i < activityList->Count; i++) {
					dgvActivity->Rows->Add(gcnew array<String^>{
						"" + activityList[i]->ActivityId,
							"" + activityList[i]->CreatorId,
							activityList[i]->Title,
							activityList[i]->StartDate,
							activityList[i]->EndDate,
							activityList[i]->DeadLine,
							activityList[i]->Description,
							"" + activityList[i]->LocationId,
							activityList[i]->State,
							"" + activityList[i]->TotalParticipants});
				}
			}
	private: System::Void nuevaActividadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		Activity^ a = gcnew Activity();
		a->ActivityId = Int32::Parse(txtActivityId->Text);
		a->CreatorId = Int32::Parse(txtCreatorId->Text);
		a->Title = txtTitle->Text;
		a->StartDate = txtStarDate->Text;
		a->EndDate = txtEndDate->Text;
		a->DeadLine = txtDeadLine->Text;
		a->Description = txtDescription->Text;
		a->LocationId = Int32::Parse(txtLocationId->Text);
		a->State = "Active";
		a->TotalParticipants = Int32::Parse(txtTotalParticipants->Text);

		Controller::CreateActivity(a);
		RefreshGrid();
}
private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	Activity^ a = gcnew Activity();
	a->ActivityId = Int32::Parse(txtActivityId->Text);
	a->CreatorId = Int32::Parse(txtCreatorId->Text);
	a->Title = txtTitle->Text;
	a->StartDate = txtStarDate->Text;
	a->EndDate = txtEndDate->Text;
	a->DeadLine = txtDeadLine->Text;
	a->Description = txtDescription->Text;
	a->LocationId = Int32::Parse(txtLocationId->Text);
	a->State = "Active";
	a->TotalParticipants = Int32::Parse(txtTotalParticipants->Text);

	Controller::UpdateActivity(a);
	RefreshGrid();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int activityId = Int32::Parse(txtActivityId->Text);
	Controller::DeleteActivity(activityId);
	RefreshGrid();
}
private: System::Void dgvActivity_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvActivity->SelectedCells[0]->RowIndex;
	int activityId = Int32::Parse(dgvActivity->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Activity^ a = Controller::QueryActivityById(activityId);

	txtActivityId->Text = "" + a->ActivityId;
	txtCreatorId->Text = "" + a->CreatorId;
	txtTitle->Text = a->Title;
	txtStarDate->Text = a->StartDate;
	txtEndDate->Text = a->EndDate;
	txtDeadLine->Text = a->DeadLine;
	txtDescription->Text = a->Description;
	txtLocationId->Text = "" + a->LocationId;
	txtTotalParticipants->Text= "" + a->TotalParticipants;
}
};
}