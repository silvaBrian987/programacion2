#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase11_Ejercicio3
	/// </summary>
	public ref class frmClase11_Ejercicio3 : public System::Windows::Forms::Form
	{
	public:
		frmClase11_Ejercicio3(void)
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
		~frmClase11_Ejercicio3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cbPaginas;
	private: System::Windows::Forms::Button^  btnVotar;
	private: System::Windows::Forms::TextBox^  txtVotaciones;
	private: System::Windows::Forms::TextBox^  txtMasVotado;
	private: System::Windows::Forms::Label^  label1;
	protected:

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
			this->cbPaginas = (gcnew System::Windows::Forms::ComboBox());
			this->btnVotar = (gcnew System::Windows::Forms::Button());
			this->txtVotaciones = (gcnew System::Windows::Forms::TextBox());
			this->txtMasVotado = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cbPaginas
			// 
			this->cbPaginas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPaginas->FormattingEnabled = true;
			this->cbPaginas->Location = System::Drawing::Point(16, 16);
			this->cbPaginas->Name = L"cbPaginas";
			this->cbPaginas->Size = System::Drawing::Size(121, 21);
			this->cbPaginas->TabIndex = 0;
			// 
			// btnVotar
			// 
			this->btnVotar->Location = System::Drawing::Point(152, 16);
			this->btnVotar->Name = L"btnVotar";
			this->btnVotar->Size = System::Drawing::Size(75, 23);
			this->btnVotar->TabIndex = 1;
			this->btnVotar->Text = L"Votar";
			this->btnVotar->UseVisualStyleBackColor = true;
			this->btnVotar->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio3::btnVotar_Click);
			// 
			// txtVotaciones
			// 
			this->txtVotaciones->Location = System::Drawing::Point(16, 56);
			this->txtVotaciones->Multiline = true;
			this->txtVotaciones->Name = L"txtVotaciones";
			this->txtVotaciones->ReadOnly = true;
			this->txtVotaciones->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtVotaciones->Size = System::Drawing::Size(208, 88);
			this->txtVotaciones->TabIndex = 2;
			// 
			// txtMasVotado
			// 
			this->txtMasVotado->Location = System::Drawing::Point(104, 160);
			this->txtMasVotado->Name = L"txtMasVotado";
			this->txtMasVotado->ReadOnly = true;
			this->txtMasVotado->Size = System::Drawing::Size(120, 20);
			this->txtMasVotado->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mas votado:";
			// 
			// frmClase11_Ejercicio3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(243, 194);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtMasVotado);
			this->Controls->Add(this->txtVotaciones);
			this->Controls->Add(this->btnVotar);
			this->Controls->Add(this->cbPaginas);
			this->Name = L"frmClase11_Ejercicio3";
			this->Text = L"Ejercicio3";
			this->Load += gcnew System::EventHandler(this, &frmClase11_Ejercicio3::frmClase11_Ejercicio3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Hashtable ^ paginas = gcnew Hashtable();

	private: void CargarPaginas(){
		paginas->Add("Facebook", 0);
		paginas->Add("Google", 0);
		paginas->Add("Yahoo", 0);
		paginas->Add("Youtube", 0);
		paginas->Add("TVTropes", 0);
		paginas->Add("KnowYourMeme", 0);
		paginas->Add("Taringa!", 0);
	}

	private: void CalcularTotales(){
		txtVotaciones->Clear();

		int maxVotos = 0;
		String^ masVotado = "";
		IEnumerator^ keys = paginas->Keys->GetEnumerator();
		while (keys->MoveNext()) {
			int cantVotos = (int)paginas[keys->Current->ToString()];
			txtVotaciones->AppendText(keys->Current->ToString() + ": " + cantVotos);
			txtVotaciones->AppendText(Environment::NewLine);

			if (cantVotos > maxVotos){
				maxVotos = cantVotos;
				masVotado = keys->Current->ToString();
			}
		}
		txtMasVotado->Text = masVotado;
	}

	private: System::Void frmClase11_Ejercicio3_Load(System::Object^  sender, System::EventArgs^  e) {
		CargarPaginas();

		IEnumerator^ keys = paginas->Keys->GetEnumerator();
		while (keys->MoveNext()) {
			cbPaginas->Items->Add(keys->Current->ToString());
		}
	}
	private: System::Void btnVotar_Click(System::Object^  sender, System::EventArgs^  e) {
		int c = (int)paginas[cbPaginas->SelectedItem->ToString()];
		c++;
		paginas[cbPaginas->SelectedItem->ToString()] = c;

		CalcularTotales();
	}
	};
}
