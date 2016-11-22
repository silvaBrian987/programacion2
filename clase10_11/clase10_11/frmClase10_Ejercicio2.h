#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase10_Ejercicio2
	/// </summary>
	public ref class frmClase10_Ejercicio2 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio2(void)
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
		~frmClase10_Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  btnAgregarNro;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btnVerPromedio;
	private: System::Windows::Forms::Label^  label1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarNro = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnVerPromedio = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 0;
			// 
			// btnAgregarNro
			// 
			this->btnAgregarNro->Location = System::Drawing::Point(192, 16);
			this->btnAgregarNro->Name = L"btnAgregarNro";
			this->btnAgregarNro->Size = System::Drawing::Size(80, 23);
			this->btnAgregarNro->TabIndex = 1;
			this->btnAgregarNro->Text = L"Agregar Nro";
			this->btnAgregarNro->UseVisualStyleBackColor = true;
			this->btnAgregarNro->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio2::btnAgregarNro_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(56, 48);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 2;
			// 
			// btnVerPromedio
			// 
			this->btnVerPromedio->Location = System::Drawing::Point(192, 56);
			this->btnVerPromedio->Name = L"btnVerPromedio";
			this->btnVerPromedio->Size = System::Drawing::Size(80, 23);
			this->btnVerPromedio->TabIndex = 3;
			this->btnVerPromedio->Text = L"Ver promedio";
			this->btnVerPromedio->UseVisualStyleBackColor = true;
			this->btnVerPromedio->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio2::btnVerPromedio_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nota";
			// 
			// frmClase10_Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 169);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnVerPromedio);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnAgregarNro);
			this->Controls->Add(this->textBox1);
			this->Name = L"frmClase10_Ejercicio2";
			this->Text = L"frmClase10_Ejercicio2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAgregarNro_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ texto = textBox1->Text;
		if (texto->Contains(".")) texto->Replace(".", ",");
		listBox1->Items->Add(Double::Parse(texto));
	}
	private: System::Void btnVerPromedio_Click(System::Object^  sender, System::EventArgs^  e) {
		Double total = 0.0;
		Double promedio = 0.0;

		for (int i = 0; i < listBox1->Items->Count; i++) {
			total += (Double)listBox1->Items[i];
		}

		if (listBox1->Items->Count > 0) promedio = total / listBox1->Items->Count;

		MessageBox::Show(this, "El promedio es " + promedio, "Promedio");
	}
};
}
