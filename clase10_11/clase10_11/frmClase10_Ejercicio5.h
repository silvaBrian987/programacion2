#pragma once

namespace clase10_11 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase10_Ejercicio5
	/// </summary>
	public ref class frmClase10_Ejercicio5 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio5(void)
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
		~frmClase10_Ejercicio5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(16, 40);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(136, 109);
			this->checkedListBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¿Que sección del diario leé\?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Votar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio5::button1_Click);
			// 
			// frmClase10_Ejercicio5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(170, 193);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"frmClase10_Ejercicio5";
			this->Text = L"Ejercicio 5";
			this->Load += gcnew System::EventHandler(this, &frmClase10_Ejercicio5::frmClase10_Ejercicio5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^ LOG_PATH = "clase10_Ejercicio5.txt";
		Hashtable ^ secciones = gcnew Hashtable();
		int totalVotantes = 0;

	private: System::Void frmClase10_Ejercicio5_Load(System::Object^  sender, System::EventArgs^  e) {
		secciones->Add("Economía", 0);
		secciones->Add("Sociedad", 0);
		secciones->Add("Policial", 0);
		secciones->Add("Deportivo", 0);

		IEnumerator ^ keys = secciones->Keys->GetEnumerator();
		while (keys->MoveNext()) {
			checkedListBox1->Items->Add(keys->Current->ToString());
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		IEnumerator ^ seleccionados = checkedListBox1->CheckedItems->GetEnumerator();

		totalVotantes++;

		while (seleccionados->MoveNext()) {
			int contador = (int)secciones[seleccionados->Current->ToString()];
			contador++;
			secciones[seleccionados->Current->ToString()] = contador;
		}

		if (totalVotantes % 10 == 0) {
			String ^ mensaje = "Porcentajes";
			IEnumerator ^ keys = secciones->Keys->GetEnumerator();
			while (keys->MoveNext()) {
				//System::Console::WriteLine(keys->Current->ToString());
				//System::Console::WriteLine(secciones[keys->Current->ToString()]);
				//MessageBox::Show(keys->Current->ToString());
				//MessageBox::Show(secciones[keys->Current->ToString()]->ToString());

				int cantidad = Int16::Parse(secciones[keys->Current->ToString()]->ToString());
				double porcentaje = ((cantidad + 0.0)/ totalVotantes) * 100;
				mensaje += "\n" + keys->Current->ToString() + ": " + porcentaje + " %";
			}
			
			MessageBox::Show(this, mensaje, "Porcentajes");
		}

		for (int i = 0; i < checkedListBox1->Items->Count; ++i) {
			checkedListBox1->SetItemChecked(i, false);
		}
	}
	};
}
