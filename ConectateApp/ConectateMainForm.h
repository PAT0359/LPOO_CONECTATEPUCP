#pragma once
#include "ActivityForm.h"
#include "ReportForm.h"
#include "UserForm.h"
#include "TagsForm.h"

namespace ConectateApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConectateMainForm
	/// </summary>
	public ref class ConectateMainForm : public System::Windows::Forms::Form
	{
	public:
		ConectateMainForm(void)
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
		~ConectateMainForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ transacciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actividadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tagsToolStripMenuItem;

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
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transacciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actividadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tagsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->transacciónToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(920, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::salirToolStripMenuItem_Click);
			// 
			// transacciónToolStripMenuItem
			// 
			this->transacciónToolStripMenuItem->Name = L"transacciónToolStripMenuItem";
			this->transacciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->transacciónToolStripMenuItem->Text = L"Transacción";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->actividadesToolStripMenuItem,
					this->reportesToolStripMenuItem, this->lugaresToolStripMenuItem, this->usuariosToolStripMenuItem, this->tagsToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// actividadesToolStripMenuItem
			// 
			this->actividadesToolStripMenuItem->Name = L"actividadesToolStripMenuItem";
			this->actividadesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->actividadesToolStripMenuItem->Text = L"Actividades";
			this->actividadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::actividadesToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			this->reportesToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::reportesToolStripMenuItem_Click);
			// 
			// lugaresToolStripMenuItem
			// 
			/*this->lugaresToolStripMenuItem->Name = L"lugaresToolStripMenuItem";
			this->lugaresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lugaresToolStripMenuItem->Text = L"Lugares";
			this->lugaresToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::lugaresToolStripMenuItem_Click);
			//*/ 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::usuariosToolStripMenuItem_Click);
			// 
			// tagsToolStripMenuItem
			// 
			this->tagsToolStripMenuItem->Name = L"tagsToolStripMenuItem";
			this->tagsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tagsToolStripMenuItem->Text = L"Tags";
			this->tagsToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConectateMainForm::tagsToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// ConectateMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 485);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ConectateMainForm";
			this->Text = L"Aplicación de actividades";
			this->Load += gcnew System::EventHandler(this, &ConectateMainForm::ConectateMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConectateMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void actividadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ActivityForm^ activityForm = gcnew ActivityForm();
	activityForm->MdiParent = this;
	activityForm->Show();
}
private: System::Void reportesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportForm^ reportForm = gcnew ReportForm();
	reportForm->MdiParent = this;
	reportForm->Show();
}

private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UserForm^ userForm = gcnew UserForm();
	userForm->MdiParent = this;
	userForm->Show();
}
private: System::Void tagsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TagsForm^ tagsForm = gcnew TagsForm();
	tagsForm->MdiParent = this;
	tagsForm->Show();
}
private: System::Void lugaresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
