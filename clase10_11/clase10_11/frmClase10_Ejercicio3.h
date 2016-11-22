#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase10_Ejercicio3
	/// </summary>
	public ref class frmClase10_Ejercicio3 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio3(void)
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
		~frmClase10_Ejercicio3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  rbtnSi;
	private: System::Windows::Forms::RadioButton^  rbtnNo;
	private: System::Windows::Forms::RadioButton^  rbtnNoSe;
	protected:

	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnVotar;
	private: System::Windows::Forms::Button^  btnVerTotales;

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
			this->rbtnSi = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNoSe = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnVotar = (gcnew System::Windows::Forms::Button());
			this->btnVerTotales = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rbtnSi
			// 
			this->rbtnSi->AutoSize = true;
			this->rbtnSi->Location = System::Drawing::Point(24, 40);
			this->rbtnSi->Name = L"rbtnSi";
			this->rbtnSi->Size = System::Drawing::Size(34, 17);
			this->rbtnSi->TabIndex = 0;
			this->rbtnSi->TabStop = true;
			this->rbtnSi->Text = L"Si";
			this->rbtnSi->UseVisualStyleBackColor = true;
			// 
			// rbtnNo
			// 
			this->rbtnNo->AutoSize = true;
			this->rbtnNo->Location = System::Drawing::Point(24, 64);
			this->rbtnNo->Name = L"rbtnNo";
			this->rbtnNo->Size = System::Drawing::Size(39, 17);
			this->rbtnNo->TabIndex = 1;
			this->rbtnNo->TabStop = true;
			this->rbtnNo->Text = L"No";
			this->rbtnNo->UseVisualStyleBackColor = true;
			// 
			// rbtnNoSe
			// 
			this->rbtnNoSe->AutoSize = true;
			this->rbtnNoSe->Location = System::Drawing::Point(24, 88);
			this->rbtnNoSe->Name = L"rbtnNoSe";
			this->rbtnNoSe->Size = System::Drawing::Size(53, 17);
			this->rbtnNoSe->TabIndex = 2;
			this->rbtnNoSe->TabStop = true;
			this->rbtnNoSe->Text = L"No se";
			this->rbtnNoSe->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"¿Usted ve el noticiero a la mañana\?";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnVotar);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->rbtnNoSe);
			this->panel1->Controls->Add(this->rbtnNo);
			this->panel1->Controls->Add(this->rbtnSi);
			this->panel1->Location = System::Drawing::Point(16, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(208, 120);
			this->panel1->TabIndex = 4;
			// 
			// btnVotar
			// 
			this->btnVotar->Location = System::Drawing::Point(120, 88);
			this->btnVotar->Name = L"btnVotar";
			this->btnVotar->Size = System::Drawing::Size(75, 23);
			this->btnVotar->TabIndex = 5;
			this->btnVotar->Text = L"Votar";
			this->btnVotar->UseVisualStyleBackColor = true;
			this->btnVotar->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio3::btnVotar_Click);
			// 
			// btnVerTotales
			// 
			this->btnVerTotales->Location = System::Drawing::Point(16, 144);
			this->btnVerTotales->Name = L"btnVerTotales";
			this->btnVerTotales->Size = System::Drawing::Size(208, 23);
			this->btnVerTotales->TabIndex = 5;
			this->btnVerTotales->Text = L"Ver totales";
			this->btnVerTotales->UseVisualStyleBackColor = true;
			this->btnVerTotales->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio3::btnVerTotales_Click);
			// 
			// frmClase10_Ejercicio3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(239, 171);
			this->Controls->Add(this->btnVerTotales);
			this->Controls->Add(this->panel1);
			this->Name = L"frmClase10_Ejercicio3";
			this->Text = L"frmClase10_Ejercicio3";
			this->Load += gcnew System::EventHandler(this, &frmClase10_Ejercicio3::frmClase10_Ejercicio3_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int totalVotantes = 0;
		int totalSi = 0;
		int totalNo = 0;
		int totalNoSe = 0;

	private: System::Void btnVotar_Click(System::Object^  sender, System::EventArgs^  e) {
		totalVotantes += 1;

		if (rbtnSi->Checked) totalSi += 1;
		if (rbtnNo->Checked) totalNo += 1;
		if (rbtnNoSe->Checked) totalNoSe += 1;

	}
	private: System::Void frmClase10_Ejercicio3_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void btnVerTotales_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(this, "Totales:\n*Votantes: " + totalVotantes + "\n*Si: " + totalSi + "\n*No: " + totalNo + "\n*No se: " + totalNoSe, "Totales");
	}
	};
}
