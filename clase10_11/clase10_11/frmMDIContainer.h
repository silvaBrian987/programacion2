#pragma once
#include "frmClase10_Ejercicio1.h"
#include "frmClase10_Ejercicio2.h"
#include "frmClase10_Ejercicio3.h"
#include "frmClase10_Ejercicio4.h"
#include "frmClase10_Ejercicio5.h"

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMDIContainer
	/// </summary>
	public ref class frmMDIContainer : public System::Windows::Forms::Form
	{
	public:
		frmMDIContainer(void)
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
		~frmMDIContainer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  clase10ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clase11ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio6ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejercicio7ToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clase10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio6ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejercicio7ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clase11ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clase10ToolStripMenuItem,
					this->clase11ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clase10ToolStripMenuItem
			// 
			this->clase10ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->ejercicio1ToolStripMenuItem,
					this->ejercicio2ToolStripMenuItem, this->ejercicio3ToolStripMenuItem, this->ejercicio4ToolStripMenuItem, this->ejercicio5ToolStripMenuItem,
					this->ejercicio6ToolStripMenuItem, this->ejercicio7ToolStripMenuItem
			});
			this->clase10ToolStripMenuItem->Name = L"clase10ToolStripMenuItem";
			this->clase10ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->clase10ToolStripMenuItem->Text = L"Clase 10";
			// 
			// ejercicio1ToolStripMenuItem
			// 
			this->ejercicio1ToolStripMenuItem->Name = L"ejercicio1ToolStripMenuItem";
			this->ejercicio1ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio1ToolStripMenuItem->Text = L"Ejercicio 1";
			this->ejercicio1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::ejercicio1ToolStripMenuItem_Click);
			// 
			// ejercicio2ToolStripMenuItem
			// 
			this->ejercicio2ToolStripMenuItem->Name = L"ejercicio2ToolStripMenuItem";
			this->ejercicio2ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio2ToolStripMenuItem->Text = L"Ejercicio 2";
			this->ejercicio2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::ejercicio2ToolStripMenuItem_Click);
			// 
			// ejercicio3ToolStripMenuItem
			// 
			this->ejercicio3ToolStripMenuItem->Name = L"ejercicio3ToolStripMenuItem";
			this->ejercicio3ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio3ToolStripMenuItem->Text = L"Ejercicio 3";
			this->ejercicio3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::ejercicio3ToolStripMenuItem_Click);
			// 
			// ejercicio4ToolStripMenuItem
			// 
			this->ejercicio4ToolStripMenuItem->Name = L"ejercicio4ToolStripMenuItem";
			this->ejercicio4ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio4ToolStripMenuItem->Text = L"Ejercicio 4";
			this->ejercicio4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::ejercicio4ToolStripMenuItem_Click);
			// 
			// ejercicio5ToolStripMenuItem
			// 
			this->ejercicio5ToolStripMenuItem->Name = L"ejercicio5ToolStripMenuItem";
			this->ejercicio5ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio5ToolStripMenuItem->Text = L"Ejercicio 5";
			this->ejercicio5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMDIContainer::ejercicio5ToolStripMenuItem_Click);
			// 
			// ejercicio6ToolStripMenuItem
			// 
			this->ejercicio6ToolStripMenuItem->Name = L"ejercicio6ToolStripMenuItem";
			this->ejercicio6ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio6ToolStripMenuItem->Text = L"Ejercicio 6";
			// 
			// ejercicio7ToolStripMenuItem
			// 
			this->ejercicio7ToolStripMenuItem->Name = L"ejercicio7ToolStripMenuItem";
			this->ejercicio7ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ejercicio7ToolStripMenuItem->Text = L"Ejercicio 7";
			// 
			// clase11ToolStripMenuItem
			// 
			this->clase11ToolStripMenuItem->Name = L"clase11ToolStripMenuItem";
			this->clase11ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->clase11ToolStripMenuItem->Text = L"Clase 11";
			// 
			// frmMDIContainer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMDIContainer";
			this->Text = L"Ejercicios";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ejercicio1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmClase10_Ejercicio1 ^ form = gcnew frmClase10_Ejercicio1();
		form->MdiParent = this;
		form->Show();
	}
	private: System::Void ejercicio2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmClase10_Ejercicio2 ^ form = gcnew frmClase10_Ejercicio2();
		form->MdiParent = this;
		form->Show();
	}
	private: System::Void ejercicio3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmClase10_Ejercicio3 ^ form = gcnew frmClase10_Ejercicio3();
		form->MdiParent = this;
		form->Show();
	}
	private: System::Void ejercicio4ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmClase10_Ejercicio4 ^ form = gcnew frmClase10_Ejercicio4();
		form->MdiParent = this;
		form->Show();
	}
	private: System::Void ejercicio5ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmClase10_Ejercicio5 ^ form = gcnew frmClase10_Ejercicio5();
		form->MdiParent = this;
		form->Show();
	}
	};
}
