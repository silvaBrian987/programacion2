#pragma once
#include "frmDialogBox.h"

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase10_Ejercicio7
	/// </summary>
	public ref class frmClase10_Ejercicio7 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio7(void)
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
		~frmClase10_Ejercicio7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCalcularPromedio;
	protected:

	private: System::Windows::Forms::TextBox^  txtAlumno;
	protected:

	protected:

	private: System::Windows::Forms::ListBox^  lbNotas;

	private: System::Windows::Forms::Button^  btnAgregarNota;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnDefinirAlumno;
	private: System::Windows::Forms::GroupBox^  gbNotas;



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
			this->btnCalcularPromedio = (gcnew System::Windows::Forms::Button());
			this->txtAlumno = (gcnew System::Windows::Forms::TextBox());
			this->lbNotas = (gcnew System::Windows::Forms::ListBox());
			this->btnAgregarNota = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDefinirAlumno = (gcnew System::Windows::Forms::Button());
			this->gbNotas = (gcnew System::Windows::Forms::GroupBox());
			this->gbNotas->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCalcularPromedio
			// 
			this->btnCalcularPromedio->Location = System::Drawing::Point(152, 64);
			this->btnCalcularPromedio->Name = L"btnCalcularPromedio";
			this->btnCalcularPromedio->Size = System::Drawing::Size(104, 23);
			this->btnCalcularPromedio->TabIndex = 0;
			this->btnCalcularPromedio->Text = L"Calcular promedio";
			this->btnCalcularPromedio->UseVisualStyleBackColor = true;
			this->btnCalcularPromedio->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio7::btnCalcularPromedio_Click);
			// 
			// txtAlumno
			// 
			this->txtAlumno->Location = System::Drawing::Point(72, 16);
			this->txtAlumno->Name = L"txtAlumno";
			this->txtAlumno->Size = System::Drawing::Size(120, 20);
			this->txtAlumno->TabIndex = 1;
			// 
			// lbNotas
			// 
			this->lbNotas->FormattingEnabled = true;
			this->lbNotas->Location = System::Drawing::Point(16, 32);
			this->lbNotas->Name = L"lbNotas";
			this->lbNotas->Size = System::Drawing::Size(120, 108);
			this->lbNotas->TabIndex = 2;
			// 
			// btnAgregarNota
			// 
			this->btnAgregarNota->Location = System::Drawing::Point(152, 32);
			this->btnAgregarNota->Name = L"btnAgregarNota";
			this->btnAgregarNota->Size = System::Drawing::Size(104, 23);
			this->btnAgregarNota->TabIndex = 3;
			this->btnAgregarNota->Text = L"Agregar nota";
			this->btnAgregarNota->UseVisualStyleBackColor = true;
			this->btnAgregarNota->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio7::btnAgregarNota_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Alumno:";
			// 
			// btnDefinirAlumno
			// 
			this->btnDefinirAlumno->Location = System::Drawing::Point(200, 16);
			this->btnDefinirAlumno->Name = L"btnDefinirAlumno";
			this->btnDefinirAlumno->Size = System::Drawing::Size(88, 23);
			this->btnDefinirAlumno->TabIndex = 5;
			this->btnDefinirAlumno->Text = L"Definir alumno";
			this->btnDefinirAlumno->UseVisualStyleBackColor = true;
			this->btnDefinirAlumno->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio7::btnDefinirAlumno_Click);
			// 
			// gbNotas
			// 
			this->gbNotas->Controls->Add(this->btnAgregarNota);
			this->gbNotas->Controls->Add(this->lbNotas);
			this->gbNotas->Controls->Add(this->btnCalcularPromedio);
			this->gbNotas->Enabled = false;
			this->gbNotas->Location = System::Drawing::Point(16, 48);
			this->gbNotas->Name = L"gbNotas";
			this->gbNotas->Size = System::Drawing::Size(272, 168);
			this->gbNotas->TabIndex = 6;
			this->gbNotas->TabStop = false;
			this->gbNotas->Text = L"Notas";
			// 
			// frmClase10_Ejercicio7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 225);
			this->Controls->Add(this->gbNotas);
			this->Controls->Add(this->btnDefinirAlumno);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlumno);
			this->Name = L"frmClase10_Ejercicio7";
			this->Text = L"frmClase10_Ejercicio7";
			this->gbNotas->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref struct NotasAlumno{
			String ^ Alumno;
			System::Collections::Generic::List<Double> ^ Notas = gcnew System::Collections::Generic::List < Double > ;

			Double ObtenerPromedio(){
				if (Notas->Count > 0){
					Double totalNotas = 0.0;
					for (int i = 0; i < Notas->Count; i++){
						totalNotas += Notas[i];
					}
					return totalNotas / Notas->Count;
				}
				else{
					return 0.0;
				}
			}

			String^ ObtenerEstadoSituacion(){
				Double promedio = ObtenerPromedio();

				if (promedio >= 7){
					return "Coloquio";
				}
				else if (promedio < 7 && promedio >= 4){
					return "Final";
				}
				else{
					return "Desaprobado";
				}
			}

			void LimpiarNotas(){
				Alumno = "";
				Notas = gcnew System::Collections::Generic::List < Double > ;
			}
		};

		NotasAlumno alumno;
	private: System::Void btnAgregarNota_Click(System::Object^  sender, System::EventArgs^  e) {
		clase10_11::frmDialogBox^ dialogBox = gcnew clase10_11::frmDialogBox;
		if (dialogBox->ShowDialog(this) == System::Windows::Forms::DialogResult::OK){
			Double nota = Double::Parse(dialogBox->txtDialog->Text);
			lbNotas->Items->Add(nota);
			alumno.Notas->Add(nota);
		}
		delete dialogBox;
	}
	private: System::Void btnCalcularPromedio_Click(System::Object^  sender, System::EventArgs^  e) {
		Double promedio = alumno.ObtenerPromedio();
		String^ estado = alumno.ObtenerEstadoSituacion();

		MessageBox::Show(this, "Promedio: " + promedio + "\nEstado de situacion: " + estado, "Notas");
	}
	private: System::Void btnDefinirAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!gbNotas->Enabled){
			txtAlumno->Enabled = false;
			alumno.Alumno = txtAlumno->Text;
			gbNotas->Enabled = true;
			btnDefinirAlumno->Text = "Cambiar alumno";
		}
		else{
			LimpiarFormulario();
			txtAlumno->Enabled = true;
			gbNotas->Enabled = false;
			btnDefinirAlumno->Text = "Definir alumno";
		}
	}
	private: void LimpiarFormulario(){
		txtAlumno->Text = "";
		lbNotas->Items->Clear();
		alumno.LimpiarNotas();
	}
	};
}
