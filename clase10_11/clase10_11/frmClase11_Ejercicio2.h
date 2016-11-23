#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase11_Ejercicio2
	/// </summary>
	public ref class frmClase11_Ejercicio2 : public System::Windows::Forms::Form
	{
	private: ref struct Usuario{
	public:
		static const int ADMINISTRADOR = 1;
		static const int OPERADOR = 2;
		static const int CLIENTE = 3;
	public:
		String^ Nombre;
		int Rol;
	};

	private: System::Collections::Generic::List<Usuario^>^ usuarios;
	public:
		frmClase11_Ejercicio2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			usuarios = gcnew System::Collections::Generic::List < Usuario^ > ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmClase11_Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCargar;
	protected:
	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::RadioButton^  rbAdministrador;
	private: System::Windows::Forms::RadioButton^  rbOperador;
	private: System::Windows::Forms::RadioButton^  rbCliente;
	private: System::Windows::Forms::ListBox^  lbAdministrador;
	private: System::Windows::Forms::ListBox^  lbOperador;
	private: System::Windows::Forms::ListBox^  lbCliente;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  btnSalir;

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
			this->btnCargar = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->rbAdministrador = (gcnew System::Windows::Forms::RadioButton());
			this->rbOperador = (gcnew System::Windows::Forms::RadioButton());
			this->rbCliente = (gcnew System::Windows::Forms::RadioButton());
			this->lbAdministrador = (gcnew System::Windows::Forms::ListBox());
			this->lbOperador = (gcnew System::Windows::Forms::ListBox());
			this->lbCliente = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnCargar
			// 
			this->btnCargar->Location = System::Drawing::Point(192, 24);
			this->btnCargar->Name = L"btnCargar";
			this->btnCargar->Size = System::Drawing::Size(75, 23);
			this->btnCargar->TabIndex = 0;
			this->btnCargar->Text = L"Cargar";
			this->btnCargar->UseVisualStyleBackColor = true;
			this->btnCargar->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::btnCargar_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(72, 24);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(100, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// rbAdministrador
			// 
			this->rbAdministrador->AutoSize = true;
			this->rbAdministrador->Location = System::Drawing::Point(72, 56);
			this->rbAdministrador->Name = L"rbAdministrador";
			this->rbAdministrador->Size = System::Drawing::Size(88, 17);
			this->rbAdministrador->TabIndex = 2;
			this->rbAdministrador->TabStop = true;
			this->rbAdministrador->Text = L"Administrador";
			this->rbAdministrador->UseVisualStyleBackColor = true;
			this->rbAdministrador->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::rbAdministrador_Click);
			// 
			// rbOperador
			// 
			this->rbOperador->AutoSize = true;
			this->rbOperador->Location = System::Drawing::Point(72, 80);
			this->rbOperador->Name = L"rbOperador";
			this->rbOperador->Size = System::Drawing::Size(69, 17);
			this->rbOperador->TabIndex = 3;
			this->rbOperador->TabStop = true;
			this->rbOperador->Text = L"Operador";
			this->rbOperador->UseVisualStyleBackColor = true;
			this->rbOperador->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::rbOperador_Click);
			// 
			// rbCliente
			// 
			this->rbCliente->AutoSize = true;
			this->rbCliente->Location = System::Drawing::Point(72, 104);
			this->rbCliente->Name = L"rbCliente";
			this->rbCliente->Size = System::Drawing::Size(57, 17);
			this->rbCliente->TabIndex = 4;
			this->rbCliente->TabStop = true;
			this->rbCliente->Text = L"Cliente";
			this->rbCliente->UseVisualStyleBackColor = true;
			this->rbCliente->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::rbCliente_Click);
			// 
			// lbAdministrador
			// 
			this->lbAdministrador->FormattingEnabled = true;
			this->lbAdministrador->Location = System::Drawing::Point(16, 24);
			this->lbAdministrador->Name = L"lbAdministrador";
			this->lbAdministrador->Size = System::Drawing::Size(120, 95);
			this->lbAdministrador->TabIndex = 5;
			this->lbAdministrador->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::lbAdministrador_SelectedIndexChanged);
			// 
			// lbOperador
			// 
			this->lbOperador->FormattingEnabled = true;
			this->lbOperador->Location = System::Drawing::Point(16, 24);
			this->lbOperador->Name = L"lbOperador";
			this->lbOperador->Size = System::Drawing::Size(120, 95);
			this->lbOperador->TabIndex = 6;
			this->lbOperador->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::lbOperador_SelectedIndexChanged);
			// 
			// lbCliente
			// 
			this->lbCliente->FormattingEnabled = true;
			this->lbCliente->Location = System::Drawing::Point(16, 24);
			this->lbCliente->Name = L"lbCliente";
			this->lbCliente->Size = System::Drawing::Size(120, 95);
			this->lbCliente->TabIndex = 7;
			this->lbCliente->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::lbCliente_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Usuario:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->rbCliente);
			this->groupBox1->Controls->Add(this->rbOperador);
			this->groupBox1->Controls->Add(this->rbAdministrador);
			this->groupBox1->Controls->Add(this->txtUsuario);
			this->groupBox1->Controls->Add(this->btnCargar);
			this->groupBox1->Location = System::Drawing::Point(16, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 136);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Rol:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lbAdministrador);
			this->groupBox2->Location = System::Drawing::Point(312, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(152, 136);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Administradores";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lbOperador);
			this->groupBox3->Location = System::Drawing::Point(144, 168);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(152, 128);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Operadores";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lbCliente);
			this->groupBox4->Location = System::Drawing::Point(312, 168);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(152, 128);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Clientes";
			// 
			// btnSalir
			// 
			this->btnSalir->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnSalir->Location = System::Drawing::Point(32, 176);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 13;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio2::btnSalir_Click);
			// 
			// frmClase11_Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnSalir;
			this->ClientSize = System::Drawing::Size(474, 302);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmClase11_Ejercicio2";
			this->Text = L"Ejercicio2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void CargarListasPantalla(){
		lbAdministrador->Items->Clear();
		lbOperador->Items->Clear();
		lbCliente->Items->Clear();

		for (int i = 0; i < usuarios->Count; i++){
			if (usuarios[i]->Rol == Usuario::ADMINISTRADOR){
				lbAdministrador->Items->Add(usuarios[i]->Nombre);
			}
			else if (usuarios[i]->Rol == Usuario::OPERADOR){
				lbOperador->Items->Add(usuarios[i]->Nombre);
			}
			else{
				lbCliente->Items->Add(usuarios[i]->Nombre);
			}
		}
	}
	private: Usuario^ BuscarPorNombre(String^ Nombre, int &index){
		for (int i = 0; i < usuarios->Count; i++){
			if (usuarios[i]->Nombre->ToUpper()->Equals(Nombre->ToUpper())){
				index = i;
				return usuarios[i];
			}
		}
	}
	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void rbAdministrador_Click(System::Object^  sender, System::EventArgs^  e) {
		rbOperador->Checked = false;
		rbCliente->Checked = false;
	}
	private: System::Void rbOperador_Click(System::Object^  sender, System::EventArgs^  e) {
		rbAdministrador->Checked = false;
		rbCliente->Checked = false;
	}
	private: System::Void rbCliente_Click(System::Object^  sender, System::EventArgs^  e) {
		rbAdministrador->Checked = false;
		rbOperador->Checked = false;
	}
	private: System::Void btnCargar_Click(System::Object^  sender, System::EventArgs^  e) {
		int index;
		Usuario^ usuario = BuscarPorNombre(txtUsuario->Text, index);

		if (usuario != nullptr && !String::IsNullOrEmpty(usuario->Nombre)){
			if (rbAdministrador->Checked){
				usuario->Rol = Usuario::ADMINISTRADOR;
			}
			else if (rbOperador->Checked){
				usuario->Rol = Usuario::OPERADOR;
			}
			else{
				usuario->Rol = Usuario::CLIENTE;
			}

			usuarios[index] = usuario;
		}
		else{
			usuario = gcnew Usuario;
			usuario->Nombre = txtUsuario->Text;

			if (rbAdministrador->Checked){
				usuario->Rol = Usuario::ADMINISTRADOR;
			}
			else if (rbOperador->Checked){
				usuario->Rol = Usuario::OPERADOR;
			}
			else{
				usuario->Rol = Usuario::CLIENTE;
			}

			usuarios->Add(usuario);
		}

		CargarListasPantalla();
	}
	private: System::Void lbAdministrador_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index;
		Usuario^ usuario = BuscarPorNombre(lbAdministrador->SelectedItem->ToString(), index);
		if (usuario != nullptr && !String::IsNullOrEmpty(usuario->Nombre)){
			txtUsuario->Text = usuario->Nombre;

			if (usuario->Rol == Usuario::ADMINISTRADOR){
				rbAdministrador->Checked = true;
			}
			else if (usuario->Rol == Usuario::OPERADOR){
				rbOperador->Checked = true;
			}
			else{
				rbCliente->Checked = true;
			}
		}
	}
	private: System::Void lbCliente_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index;
		Usuario^ usuario = BuscarPorNombre(lbCliente->SelectedItem->ToString(), index);
		if (usuario != nullptr && !String::IsNullOrEmpty(usuario->Nombre)){
			txtUsuario->Text = usuario->Nombre;

			if (usuario->Rol == Usuario::ADMINISTRADOR){
				rbAdministrador->Checked = true;
			}
			else if (usuario->Rol == Usuario::OPERADOR){
				rbOperador->Checked = true;
			}
			else{
				rbCliente->Checked = true;
			}
		}
	}
private: System::Void lbOperador_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int index;
	Usuario^ usuario = BuscarPorNombre(lbOperador->SelectedItem->ToString(), index);
	if (usuario != nullptr && !String::IsNullOrEmpty(usuario->Nombre)){
		txtUsuario->Text = usuario->Nombre;

		if (usuario->Rol == Usuario::ADMINISTRADOR){
			rbAdministrador->Checked = true;
		}
		else if (usuario->Rol == Usuario::OPERADOR){
			rbOperador->Checked = true;
		}
		else{
			rbCliente->Checked = true;
		}
	}
}
};
}
