#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for clase10_Ejercicio6
	/// </summary>
	public ref class frmClase10_Ejercicio6 : public System::Windows::Forms::Form
	{
	public:
		frmClase10_Ejercicio6(void)
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
		~frmClase10_Ejercicio6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtNombre;
	protected:
	private: System::Windows::Forms::TextBox^  txtApellido;
	private: System::Windows::Forms::DateTimePicker^  dtpFechaNacimiento;
	private: System::Windows::Forms::TextBox^  txtDomicilio;
	private: System::Windows::Forms::ComboBox^  cbLocalidad;
	private: System::Windows::Forms::CheckedListBox^  clbEstadoCivil;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnGuardar;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lblEstadoCivil;
	private: System::Windows::Forms::Label^  lblLocalidad;
	private: System::Windows::Forms::Label^  lblDomicilio;
	private: System::Windows::Forms::Label^  lblFechaNacimiento;
	private: System::Windows::Forms::Label^  lblApellido;
	private: System::Windows::Forms::Label^  lblNombre;

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
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->dtpFechaNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtDomicilio = (gcnew System::Windows::Forms::TextBox());
			this->cbLocalidad = (gcnew System::Windows::Forms::ComboBox());
			this->clbEstadoCivil = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblEstadoCivil = (gcnew System::Windows::Forms::Label());
			this->lblLocalidad = (gcnew System::Windows::Forms::Label());
			this->lblDomicilio = (gcnew System::Windows::Forms::Label());
			this->lblFechaNacimiento = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(152, 24);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 0;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(152, 64);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(100, 20);
			this->txtApellido->TabIndex = 1;
			// 
			// dtpFechaNacimiento
			// 
			this->dtpFechaNacimiento->Location = System::Drawing::Point(152, 104);
			this->dtpFechaNacimiento->Name = L"dtpFechaNacimiento";
			this->dtpFechaNacimiento->Size = System::Drawing::Size(200, 20);
			this->dtpFechaNacimiento->TabIndex = 2;
			// 
			// txtDomicilio
			// 
			this->txtDomicilio->Location = System::Drawing::Point(152, 144);
			this->txtDomicilio->Name = L"txtDomicilio";
			this->txtDomicilio->Size = System::Drawing::Size(100, 20);
			this->txtDomicilio->TabIndex = 3;
			// 
			// cbLocalidad
			// 
			this->cbLocalidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbLocalidad->FormattingEnabled = true;
			this->cbLocalidad->Items->AddRange(gcnew cli::array< System::Object^  >(96) {
				L"Aguas Verdes (Argentina)", L"Alejandro Petión",
					L"Alto Los Cardales", L"Arribeños (Buenos Aires)", L"Ascensión (Buenos Aires)", L"Batán (Buenos Aires)", L"Cabildo (Buenos Aires)",
					L"Cacharí", L"Campos Salles", L"Casbas", L"Chapadmalal", L"Chascomús Country Club", L"Chillar", L"Claromecó", L"Comandante Nicanor Otamendi",
					L"Costa Azul (Argentina)", L"Costa Chica (Argentina)", L"Costa del Este (Argentina)", L"Country Club Bosque Real-Barrio Morabo",
					L"Country Los Médanos", L"Darregueira", L"Dudignac", L"El Marquesado", L"El Remanso (barrio parque)", L"Empalme Lobos", L"Estación Camet",
					L"Ferré (Buenos Aires)", L"General Mansilla", L"General O\'Brien", L"General Pirán", L"General Rojo", L"Gobernador Castro", L"Grünbein",
					L"Henderson (Buenos Aires)", L"Hilario Ascasubi (Buenos Aires)", L"Hinojo (Buenos Aires)", L"Huanguelén", L"Ingeniero White",
					L"Jeppener", L"José María Jáuregui", L"Juan Bautista Alberdi (Buenos Aires)", L"Juan Cousté (Buenos Aires)", L"Juan José Paso (Buenos Aires)",
					L"Juan Nepomuceno Fernández (Buenos Aires)", L"La Dulce", L"La Lonja (Buenos Aires)", L"Las Toninas", L"Leandro N. Alem (Buenos Aires)",
					L"Lima (Buenos Aires)", L"Loma Negra", L"Los Cardales", L"Luján", L"Mar de Ajó", L"Mar de Ostende", L"Mayor Buratovich", L"Moquehuá",
					L"Nicolás Levalle (Buenos Aires)", L"Norberto de la Riestra (Buenos Aires)", L"Nueva Atlantis", L"Open Door", L"Orense (Buenos Aires)",
					L"Ostende (Argentina)", L"Palemón Huergo", L"Parada Robles", L"Paraje Vallimanca", L"Pavón (Exaltación de la Cruz)", L"Pedro Luro (Argentina)",
					L"Piedritas", L"Pérez Millán", L"Quequén", L"Rawson (Buenos Aires)", L"Rivera (Buenos Aires)", L"Roberts (Buenos Aires)", L"Saavedra (ciudad)",
					L"San José (Coronel Suárez)", L"Santa Clara del Mar", L"Santa Lucía (Buenos Aires)", L"Santa Rosa (Buenos Aires)", L"Santa Teresita (Buenos Aires)",
					L"Sierra Chica (Buenos Aires)", L"Sierra de la Ventana", L"Sierra de los Padres", L"Sierras Bayas", L"Torres (Buenos Aires)",
					L"Treinta de Agosto", L"Tres Algarrobos", L"Urdampilleta", L"Valeria del Mar", L"Villa Arcadia", L"Villa Bordeu", L"Villa Cacique",
					L"Villa Campi", L"Villa Canto", L"Villa Espora", L"Villa Ramallo", L"Villalonga (Buenos Aires)"
			});
			this->cbLocalidad->Location = System::Drawing::Point(152, 184);
			this->cbLocalidad->Name = L"cbLocalidad";
			this->cbLocalidad->Size = System::Drawing::Size(121, 21);
			this->cbLocalidad->TabIndex = 4;
			// 
			// clbEstadoCivil
			// 
			this->clbEstadoCivil->FormattingEnabled = true;
			this->clbEstadoCivil->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Soltero", L"Casado", L"Separado", L"Viudo" });
			this->clbEstadoCivil->Location = System::Drawing::Point(152, 224);
			this->clbEstadoCivil->Name = L"clbEstadoCivil";
			this->clbEstadoCivil->Size = System::Drawing::Size(120, 94);
			this->clbEstadoCivil->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Fecha de nacimiento";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Domicilio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Localidad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Estado civil";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->clbEstadoCivil);
			this->groupBox1->Controls->Add(this->cbLocalidad);
			this->groupBox1->Controls->Add(this->txtDomicilio);
			this->groupBox1->Controls->Add(this->dtpFechaNacimiento);
			this->groupBox1->Controls->Add(this->txtApellido);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Location = System::Drawing::Point(16, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(360, 328);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(384, 24);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 13;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &frmClase10_Ejercicio6::btnGuardar_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblEstadoCivil);
			this->groupBox2->Controls->Add(this->lblLocalidad);
			this->groupBox2->Controls->Add(this->lblDomicilio);
			this->groupBox2->Controls->Add(this->lblFechaNacimiento);
			this->groupBox2->Controls->Add(this->lblApellido);
			this->groupBox2->Controls->Add(this->lblNombre);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Location = System::Drawing::Point(16, 360);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(360, 128);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Preview";
			// 
			// lblEstadoCivil
			// 
			this->lblEstadoCivil->AutoSize = true;
			this->lblEstadoCivil->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblEstadoCivil->Location = System::Drawing::Point(136, 104);
			this->lblEstadoCivil->Name = L"lblEstadoCivil";
			this->lblEstadoCivil->Size = System::Drawing::Size(0, 14);
			this->lblEstadoCivil->TabIndex = 23;
			// 
			// lblLocalidad
			// 
			this->lblLocalidad->AutoSize = true;
			this->lblLocalidad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblLocalidad->Location = System::Drawing::Point(136, 88);
			this->lblLocalidad->Name = L"lblLocalidad";
			this->lblLocalidad->Size = System::Drawing::Size(0, 14);
			this->lblLocalidad->TabIndex = 22;
			// 
			// lblDomicilio
			// 
			this->lblDomicilio->AutoSize = true;
			this->lblDomicilio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDomicilio->Location = System::Drawing::Point(136, 72);
			this->lblDomicilio->Name = L"lblDomicilio";
			this->lblDomicilio->Size = System::Drawing::Size(0, 14);
			this->lblDomicilio->TabIndex = 21;
			// 
			// lblFechaNacimiento
			// 
			this->lblFechaNacimiento->AutoSize = true;
			this->lblFechaNacimiento->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblFechaNacimiento->Location = System::Drawing::Point(136, 56);
			this->lblFechaNacimiento->Name = L"lblFechaNacimiento";
			this->lblFechaNacimiento->Size = System::Drawing::Size(0, 14);
			this->lblFechaNacimiento->TabIndex = 20;
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblApellido->Location = System::Drawing::Point(136, 40);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(0, 14);
			this->lblApellido->TabIndex = 19;
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(136, 24);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(0, 14);
			this->lblNombre->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Estado civil";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Localidad";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Domicilio";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Fecha de nacimiento";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Apellido";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 24);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Nombre";
			// 
			// frmClase10_Ejercicio6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 498);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmClase10_Ejercicio6";
			this->Text = L"Ejercicio6";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		ref struct Datos{
			String ^ Nombre;
			String ^ Apellido;
			String ^ FechaNacimiento;
			String ^ Domicilio;
			String ^ Localidad;
			String ^ EstadoCivil;
		};

		Datos datos;


	private:
		System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
			datos.Nombre = txtNombre->Text;
			datos.Apellido = txtApellido->Text;
			datos.FechaNacimiento = dtpFechaNacimiento->Value.ToString();
			datos.Domicilio = txtDomicilio->Text;
			datos.Localidad = cbLocalidad->SelectedItem->ToString();
			datos.EstadoCivil = "";
			for (int i = 0; i < clbEstadoCivil->CheckedItems->Count; i++){
				datos.EstadoCivil += clbEstadoCivil->CheckedItems[i]->ToString() + ", ";
			}
			datos.EstadoCivil = datos.EstadoCivil->Substring(0, datos.EstadoCivil->Length - 2);

			MostrarEnMessageBox();
			MostrarEnFormulario();
		}

		void MostrarEnMessageBox(){
			String ^ mensaje = "";
			mensaje += "Nombre: " + datos.Nombre + "\n";
			mensaje += "Apellido: " + datos.Apellido + "\n";
			mensaje += "Fecha de nacimiento: " + datos.FechaNacimiento + "\n";
			mensaje += "Domicilio: " + datos.Domicilio + "\n";
			mensaje += "Localidad: " + datos.Localidad + "\n";
			mensaje += "Estado civil: " + datos.EstadoCivil + "\n";

			MessageBox::Show(this, mensaje, "Datos");
		}

		void MostrarEnFormulario(){
			lblNombre->Text = datos.Nombre;
			lblApellido->Text = datos.Apellido;
			lblFechaNacimiento->Text = datos.FechaNacimiento;
			lblDomicilio->Text = datos.Domicilio;
			lblLocalidad->Text = datos.Localidad;
			lblEstadoCivil->Text = datos.EstadoCivil;
		}
	};
}
