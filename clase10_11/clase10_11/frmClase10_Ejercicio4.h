#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase10_Ejercicio4
	/// </summary>
	public ref class frmClase10_Ejercicio4 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio4(void)
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
		~frmClase10_Ejercicio4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtNro1;
	protected:
	private: System::Windows::Forms::TextBox^  txtNro2;
	private: System::Windows::Forms::TextBox^  txtResultado;
	private: System::Windows::Forms::Label^  lblResultado;
	private: System::Windows::Forms::Button^  btnSumar;
	private: System::Windows::Forms::Button^  btnRestar;
	private: System::Windows::Forms::Button^  btnDividir;
	private: System::Windows::Forms::Button^  btnMultiplicar;

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
			this->txtNro1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNro2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->btnSumar = (gcnew System::Windows::Forms::Button());
			this->btnRestar = (gcnew System::Windows::Forms::Button());
			this->btnDividir = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNro1
			// 
			this->txtNro1->Location = System::Drawing::Point(16, 16);
			this->txtNro1->Name = L"txtNro1";
			this->txtNro1->Size = System::Drawing::Size(104, 20);
			this->txtNro1->TabIndex = 0;
			// 
			// txtNro2
			// 
			this->txtNro2->Location = System::Drawing::Point(16, 48);
			this->txtNro2->Name = L"txtNro2";
			this->txtNro2->Size = System::Drawing::Size(104, 20);
			this->txtNro2->TabIndex = 1;
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::SystemColors::Info;
			this->txtResultado->Enabled = false;
			this->txtResultado->Location = System::Drawing::Point(16, 136);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(104, 20);
			this->txtResultado->TabIndex = 2;
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(16, 80);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(0, 40);
			this->lblResultado->TabIndex = 3;
			// 
			// btnSumar
			// 
			this->btnSumar->Location = System::Drawing::Point(136, 16);
			this->btnSumar->Name = L"btnSumar";
			this->btnSumar->Size = System::Drawing::Size(24, 23);
			this->btnSumar->TabIndex = 4;
			this->btnSumar->Text = L"+";
			this->btnSumar->UseVisualStyleBackColor = true;
			this->btnSumar->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio4::btnSumar_Click);
			// 
			// btnRestar
			// 
			this->btnRestar->Location = System::Drawing::Point(136, 48);
			this->btnRestar->Name = L"btnRestar";
			this->btnRestar->Size = System::Drawing::Size(24, 23);
			this->btnRestar->TabIndex = 5;
			this->btnRestar->Text = L"-";
			this->btnRestar->UseVisualStyleBackColor = true;
			this->btnRestar->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio4::btnRestar_Click);
			// 
			// btnDividir
			// 
			this->btnDividir->Location = System::Drawing::Point(136, 80);
			this->btnDividir->Name = L"btnDividir";
			this->btnDividir->Size = System::Drawing::Size(24, 23);
			this->btnDividir->TabIndex = 6;
			this->btnDividir->Text = L"/";
			this->btnDividir->UseVisualStyleBackColor = true;
			this->btnDividir->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio4::btnDividir_Click);
			// 
			// btnMultiplicar
			// 
			this->btnMultiplicar->Location = System::Drawing::Point(136, 112);
			this->btnMultiplicar->Name = L"btnMultiplicar";
			this->btnMultiplicar->Size = System::Drawing::Size(24, 23);
			this->btnMultiplicar->TabIndex = 7;
			this->btnMultiplicar->Text = L"*";
			this->btnMultiplicar->UseVisualStyleBackColor = true;
			this->btnMultiplicar->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio4::btnMultiplicar_Click);
			// 
			// frmClase10_Ejercicio4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(173, 168);
			this->Controls->Add(this->btnMultiplicar);
			this->Controls->Add(this->btnDividir);
			this->Controls->Add(this->btnRestar);
			this->Controls->Add(this->btnSumar);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txtNro2);
			this->Controls->Add(this->txtNro1);
			this->Name = L"frmClase10_Ejercicio4";
			this->Text = L"frmClase10_Ejercicio4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Double calcular(int operacion) {
			Double nro1 = Double::Parse(txtNro1->Text);
			Double nro2 = Double::Parse(txtNro2->Text);

			Double resultado;

			if (operacion == 1) {
				resultado = nro1 + nro2;
			}
			else if (operacion == 2) {
				resultado = nro1 - nro2;
			}
			else if (operacion == 3) {
				resultado = nro1 / nro2;
			}
			else if (operacion == 4) {
				resultado = nro1 * nro2;
			}

			return resultado;
		}
	private: System::Void btnSumar_Click(System::Object^  sender, System::EventArgs^  e) {
		Double resultado = calcular(1);

		lblResultado->Text = resultado.ToString();
		txtResultado->Text = resultado.ToString();
	}
	private: System::Void btnRestar_Click(System::Object^  sender, System::EventArgs^  e) {
		Double resultado = calcular(2);

		lblResultado->Text = resultado.ToString();
		txtResultado->Text = resultado.ToString();
	}
	private: System::Void btnDividir_Click(System::Object^  sender, System::EventArgs^  e) {
		Double resultado = calcular(3);

		lblResultado->Text = resultado.ToString();
		txtResultado->Text = resultado.ToString();
	}
	private: System::Void btnMultiplicar_Click(System::Object^  sender, System::EventArgs^  e) {
		Double resultado = calcular(4);

		lblResultado->Text = resultado.ToString();
		txtResultado->Text = resultado.ToString();
	}
	};
}
