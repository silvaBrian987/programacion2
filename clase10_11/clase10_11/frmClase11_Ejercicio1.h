#pragma once
#include <iostream>
#include <fstream>

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase11_Ejercicio1
	/// </summary>
	public ref class frmClase11_Ejercicio1 : public System::Windows::Forms::Form
	{

	private: System::IO::FileStream^ txtProductos;

	public:
		frmClase11_Ejercicio1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			txtProductos = gcnew System::IO::FileStream("productos.dat", System::IO::FileMode::OpenOrCreate);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmClase11_Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// frmClase11_Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 329);
			this->Name = L"frmClase11_Ejercicio1";
			this->Text = L"frmClase11_Ejercicio1";
			this->Load += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::frmClase11_Ejercicio1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: ref struct Producto{
		String^ Nombre;
		bool Estado;
	};
	private: System::Void frmClase11_Ejercicio1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 
	};
}
