#pragma once

#include "MyForm.h"

namespace clase12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMDIContainer
	/// </summary>
	public ref class frmMDIContainer : public System::Windows::Forms::Form
	{
	public:
		frmMDIContainer(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmMDIContainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  juegoToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->juegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->juegoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// juegoToolStripMenuItem
			// 
			this->juegoToolStripMenuItem->Name = L"juegoToolStripMenuItem";
			this->juegoToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->juegoToolStripMenuItem->Text = L"Juego";
			this->juegoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::juegoToolStripMenuItem_Click);
			// 
			// frmMDIContainer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMDIContainer";
			this->Text = L"Contenedor MDI";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void juegoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 /*creo un formulario del tipo MyFORM*/
				 MyForm^ FormControls = gcnew MyForm;
				 /* El formulario que creo es el Hijo del MDI (MdiParent)*/
				 FormControls->MdiParent = this;
				 FormControls->Show();
	}
	};
}
