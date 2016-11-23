#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmDialogBox
	/// </summary>
	public ref class frmDialogBox : public System::Windows::Forms::Form
	{
	public:
		frmDialogBox(void)
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
		~frmDialogBox()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  btnAceptar;
	protected:
	public: System::Windows::Forms::Button^  btnCancelar;
	public: System::Windows::Forms::TextBox^  txtDialog;

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
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->txtDialog = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnAceptar
			// 
			this->btnAceptar->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnAceptar->Location = System::Drawing::Point(336, 16);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(75, 23);
			this->btnAceptar->TabIndex = 0;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &frmDialogBox::btnAceptar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancelar->Location = System::Drawing::Point(424, 16);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 1;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmDialogBox::btnCancelar_Click);
			// 
			// txtDialog
			// 
			this->txtDialog->Location = System::Drawing::Point(16, 16);
			this->txtDialog->Name = L"txtDialog";
			this->txtDialog->Size = System::Drawing::Size(312, 20);
			this->txtDialog->TabIndex = 2;
			// 
			// frmDialogBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 51);
			this->Controls->Add(this->txtDialog);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnAceptar);
			this->Name = L"frmDialogBox";
			this->Text = L"Cuadro de dialogo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) {
		//btnAceptar->DialogResult == System::Windows::Forms::DialogResult::OK;
	}
	private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		//btnAceptar->DialogResult == System::Windows::Forms::DialogResult::Cancel;
	}
	};
}
