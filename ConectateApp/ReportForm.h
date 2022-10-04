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
	/// Resumen de ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		ReportForm(void)
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
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textId;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textDescription;
	private: System::Windows::Forms::TextBox^ textDate;
	private: System::Windows::Forms::Button^ btnReport;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridView^ dgvReport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReportId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ReportDate;






	protected:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textDescription = (gcnew System::Windows::Forms::TextBox());
			this->textDate = (gcnew System::Windows::Forms::TextBox());
			this->btnReport = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->dgvReport = (gcnew System::Windows::Forms::DataGridView());
			this->ReportId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReportDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReport))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &ReportForm::label1_Click);
			// 
			// textId
			// 
			this->textId->Location = System::Drawing::Point(149, 31);
			this->textId->Name = L"textId";
			this->textId->Size = System::Drawing::Size(66, 20);
			this->textId->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(149, 70);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(334, 20);
			this->textName->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Descripción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Fecha";
			// 
			// textDescription
			// 
			this->textDescription->Location = System::Drawing::Point(149, 126);
			this->textDescription->Multiline = true;
			this->textDescription->Name = L"textDescription";
			this->textDescription->Size = System::Drawing::Size(334, 55);
			this->textDescription->TabIndex = 7;
			// 
			// textDate
			// 
			this->textDate->Location = System::Drawing::Point(149, 198);
			this->textDate->Name = L"textDate";
			this->textDate->Size = System::Drawing::Size(130, 20);
			this->textDate->TabIndex = 8;
			// 
			// btnReport
			// 
			this->btnReport->Location = System::Drawing::Point(140, 264);
			this->btnReport->Name = L"btnReport";
			this->btnReport->Size = System::Drawing::Size(75, 23);
			this->btnReport->TabIndex = 9;
			this->btnReport->Text = L"Reportar";
			this->btnReport->UseVisualStyleBackColor = true;
			this->btnReport->Click += gcnew System::EventHandler(this, &ReportForm::btnReport_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(408, 264);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ReportForm::btnSearch_Click);
			// 
			// dgvReport
			// 
			this->dgvReport->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvReport->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ReportId, this->Name,
					this->ReportDate
			});
			this->dgvReport->Location = System::Drawing::Point(12, 317);
			this->dgvReport->Name = L"dgvReport";
			this->dgvReport->Size = System::Drawing::Size(557, 213);
			this->dgvReport->TabIndex = 12;
			this->dgvReport->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReportForm::dgvReport_CellClick);
			// 
			// ReportId
			// 
			this->ReportId->HeaderText = L"ID";
			this->ReportId->Name = L"ReportId";
			this->ReportId->Width = 50;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			this->Name->Width = 350;
			// 
			// ReportDate
			// 
			this->ReportDate->HeaderText = L"Fecha";
			this->ReportDate->Name = L"ReportDate";
			this->ReportDate->Width = 110;
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 542);
			this->Controls->Add(this->dgvReport);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnReport);
			this->Controls->Add(this->textDate);
			this->Controls->Add(this->textDescription);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textId);
			this->Controls->Add(this->label1);
			this->Text = L"ReportForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Reporte";
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvReport))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void RefreshGridReport() {
			List<Report^>^ reportList = Controller::QueryAllReports();
			dgvReport->Rows->Clear();
			for (int i = 0; i < reportList->Count; i++) {
				dgvReport->Rows->Add(gcnew array<String^>{
					"" + reportList[i]->ReportId,
						reportList[i]->Name,
						reportList[i]->ReportDate,
				});
			}
		}

	private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnReport_Click(System::Object^ sender, System::EventArgs^ e) {
		Report^ p = gcnew Report();
		p->ReportId = Int32::Parse(textId->Text);
		p->Name = textName->Text;
		p->ReportDescription = textDescription->Text;
		p->ReportDate = textDate->Text;
		p->ReportState = "Active";
		Controller::CreateReport(p);
		RefreshGridReport();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dgvReport_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvReport->SelectedCells[0]->RowIndex;
		int reportId = Int32::Parse(dgvReport->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Report^ p = Controller::QueryReportById(reportId);

		textId->Text = "" + p->ReportId;
		textName->Text = p->Name;
		textDescription->Text = p->ReportDescription;
		textDate->Text = p->ReportDate;
	}
	};
}

