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

	public: ref struct Producto{
		String^ Nombre;
		bool Estado;
	};

	public:
		System::Collections::Generic::List<Producto^>^ productos;
		System::IO::Stream^ archivoProductos;
		System::IO::StreamReader^ reader;
		System::IO::StreamWriter^ writer;

	private: System::Windows::Forms::Button^  btnCargarProducto;
	private: System::Windows::Forms::TextBox^  txtProducto_Nombre;

	private: System::Windows::Forms::Button^  btnGuardarEnArchivo;
	private: System::Windows::Forms::ListBox^  lblProductos;
	private: System::Windows::Forms::ListBox^  lblProductosInactivos;
	private: System::Windows::Forms::CheckBox^  cbProducto_Estado;

	private: System::Windows::Forms::GroupBox^  gBoxProducto;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  btnRecargarArchivo;

	private:
		void AbrirStreams(){
			archivoProductos = gcnew System::IO::FileStream("productos.txt", System::IO::FileMode::OpenOrCreate);
			reader = gcnew System::IO::StreamReader(archivoProductos);
			writer = gcnew System::IO::StreamWriter(archivoProductos);
		}
		void PosicionarArchivoAlPrincipio(){
			archivoProductos->Seek(0, System::IO::SeekOrigin::Begin);
		}

	private: void RecargarArchivoEnMemoria(){
		productos->Clear();

		String^ aux = reader->ReadToEnd();
		array<String^, 1>^ strProductos = aux->Split('\n');
		for (int i = 0; i < strProductos->Length - 1; i++){
			array<String^, 1>^ strProducto = strProductos[i]->Split('|');

			Producto^ producto = gcnew Producto;
			producto->Nombre = strProducto[0];
			producto->Estado = Boolean::Parse(strProducto[1]);

			productos->Add(producto);
		}
		PosicionarArchivoAlPrincipio();
		reader->DiscardBufferedData();
	}
	public:
		frmClase11_Ejercicio1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AbrirStreams();
			productos = gcnew System::Collections::Generic::List < Producto^ > ;
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
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnCargarProducto = (gcnew System::Windows::Forms::Button());
			this->txtProducto_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardarEnArchivo = (gcnew System::Windows::Forms::Button());
			this->btnRecargarArchivo = (gcnew System::Windows::Forms::Button());
			this->lblProductos = (gcnew System::Windows::Forms::ListBox());
			this->lblProductosInactivos = (gcnew System::Windows::Forms::ListBox());
			this->cbProducto_Estado = (gcnew System::Windows::Forms::CheckBox());
			this->gBoxProducto = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->gBoxProducto->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ver cargados";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::button1_Click);
			// 
			// btnCargarProducto
			// 
			this->btnCargarProducto->Location = System::Drawing::Point(168, 40);
			this->btnCargarProducto->Name = L"btnCargarProducto";
			this->btnCargarProducto->Size = System::Drawing::Size(80, 23);
			this->btnCargarProducto->TabIndex = 1;
			this->btnCargarProducto->Text = L"Cargar";
			this->btnCargarProducto->UseVisualStyleBackColor = true;
			this->btnCargarProducto->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::btnCargarProducto_Click);
			// 
			// txtProducto_Nombre
			// 
			this->txtProducto_Nombre->Location = System::Drawing::Point(8, 24);
			this->txtProducto_Nombre->Name = L"txtProducto_Nombre";
			this->txtProducto_Nombre->Size = System::Drawing::Size(100, 20);
			this->txtProducto_Nombre->TabIndex = 2;
			// 
			// btnGuardarEnArchivo
			// 
			this->btnGuardarEnArchivo->Location = System::Drawing::Point(264, 40);
			this->btnGuardarEnArchivo->Name = L"btnGuardarEnArchivo";
			this->btnGuardarEnArchivo->Size = System::Drawing::Size(104, 23);
			this->btnGuardarEnArchivo->TabIndex = 3;
			this->btnGuardarEnArchivo->Text = L"Persistir en archivo";
			this->btnGuardarEnArchivo->UseVisualStyleBackColor = true;
			this->btnGuardarEnArchivo->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::btnGuardarEnArchivo_Click);
			// 
			// btnRecargarArchivo
			// 
			this->btnRecargarArchivo->Location = System::Drawing::Point(264, 88);
			this->btnRecargarArchivo->Name = L"btnRecargarArchivo";
			this->btnRecargarArchivo->Size = System::Drawing::Size(136, 23);
			this->btnRecargarArchivo->TabIndex = 4;
			this->btnRecargarArchivo->Text = L"Recargar desde archivo";
			this->btnRecargarArchivo->UseVisualStyleBackColor = true;
			this->btnRecargarArchivo->Click += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::btnRecargarArchivo_Click);
			// 
			// lblProductos
			// 
			this->lblProductos->FormattingEnabled = true;
			this->lblProductos->Location = System::Drawing::Point(16, 16);
			this->lblProductos->Name = L"lblProductos";
			this->lblProductos->Size = System::Drawing::Size(120, 95);
			this->lblProductos->TabIndex = 5;
			this->lblProductos->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::lblProductos_SelectedIndexChanged);
			// 
			// lblProductosInactivos
			// 
			this->lblProductosInactivos->FormattingEnabled = true;
			this->lblProductosInactivos->Location = System::Drawing::Point(16, 16);
			this->lblProductosInactivos->Name = L"lblProductosInactivos";
			this->lblProductosInactivos->Size = System::Drawing::Size(120, 95);
			this->lblProductosInactivos->TabIndex = 6;
			this->lblProductosInactivos->SelectedIndexChanged += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::lblProductosInactivos_SelectedIndexChanged);
			// 
			// cbProducto_Estado
			// 
			this->cbProducto_Estado->AutoSize = true;
			this->cbProducto_Estado->Location = System::Drawing::Point(8, 56);
			this->cbProducto_Estado->Name = L"cbProducto_Estado";
			this->cbProducto_Estado->Size = System::Drawing::Size(59, 17);
			this->cbProducto_Estado->TabIndex = 7;
			this->cbProducto_Estado->Text = L"Estado";
			this->cbProducto_Estado->UseVisualStyleBackColor = true;
			// 
			// gBoxProducto
			// 
			this->gBoxProducto->Controls->Add(this->cbProducto_Estado);
			this->gBoxProducto->Controls->Add(this->txtProducto_Nombre);
			this->gBoxProducto->Location = System::Drawing::Point(24, 32);
			this->gBoxProducto->Name = L"gBoxProducto";
			this->gBoxProducto->Size = System::Drawing::Size(128, 88);
			this->gBoxProducto->TabIndex = 8;
			this->gBoxProducto->TabStop = false;
			this->gBoxProducto->Text = L"Producto";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblProductos);
			this->groupBox1->Location = System::Drawing::Point(16, 152);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(152, 120);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Productos";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblProductosInactivos);
			this->groupBox2->Location = System::Drawing::Point(200, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(152, 120);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Productos inactivos";
			// 
			// frmClase11_Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 329);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->gBoxProducto);
			this->Controls->Add(this->btnRecargarArchivo);
			this->Controls->Add(this->btnGuardarEnArchivo);
			this->Controls->Add(this->btnCargarProducto);
			this->Controls->Add(this->button1);
			this->Name = L"frmClase11_Ejercicio1";
			this->Text = L"Ejercicio 11";
			this->Load += gcnew System::EventHandler(this, &frmClase11_Ejercicio1::frmClase11_Ejercicio1_Load);
			this->gBoxProducto->ResumeLayout(false);
			this->gBoxProducto->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Producto^ productoSeleccionado;

	private: Producto^ BuscarProductoPorNombre(String^ Nombre, int &index){
		for (int i = 0; i < productos->Count; i++){
			if (productos[i]->Nombre->ToUpper()->Equals(Nombre->ToUpper())){
				index = i;
				return productos[i];
			}
		}
	}

	private: void CargarListasPantalla(){
		lblProductos->Items->Clear();
		lblProductosInactivos->Items->Clear();

		for (int i = 0; i < productos->Count; i++){
			lblProductos->Items->Add(productos[i]->Nombre);
			if (!productos[i]->Estado){
				lblProductosInactivos->Items->Add(productos[i]->Nombre);
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ mensaje = "";
		for (int i = 0; i < productos->Count; i++){
			mensaje += "Nombre: " + productos[i]->Nombre + "; Estado: " + productos[i]->Estado + "\n";
		}
		MessageBox::Show(mensaje);
	}

	private: System::Void frmClase11_Ejercicio1_Load(System::Object^  sender, System::EventArgs^  e) {
		RecargarArchivoEnMemoria();
		CargarListasPantalla();
	}

	private: System::Void btnCargarProducto_Click(System::Object^  sender, System::EventArgs^  e) {
		int index = -1;
		Producto^ producto = BuscarProductoPorNombre(txtProducto_Nombre->Text, index);
		if (producto != nullptr && !String::IsNullOrEmpty(producto->Nombre)){
			producto->Nombre = txtProducto_Nombre->Text;
			producto->Estado = cbProducto_Estado->Checked;
			productos[index] = producto;
		}else{
			producto = gcnew Producto;
			producto->Nombre = txtProducto_Nombre->Text;
			producto->Estado = cbProducto_Estado->Checked;
			productos->Add(producto);
		}

		CargarListasPantalla();
	}

	private: System::Void btnGuardarEnArchivo_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < productos->Count; i++){
			writer->WriteLine("{0}|{1}", productos[i]->Nombre, productos[i]->Estado);
		}
		writer->Flush();
		PosicionarArchivoAlPrincipio();
	}

	private: System::Void btnRecargarArchivo_Click(System::Object^  sender, System::EventArgs^  e) {
		RecargarArchivoEnMemoria();
	}

	private: System::Void lblProductos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index = 0;
		Producto^ prod = BuscarProductoPorNombre(lblProductos->SelectedItem->ToString(), index);
		txtProducto_Nombre->Text = prod->Nombre;
		cbProducto_Estado->Checked = prod->Estado;
	}
	private: System::Void lblProductosInactivos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int index = 0;
		Producto^ prod = BuscarProductoPorNombre(lblProductosInactivos->SelectedItem->ToString(), index);
		txtProducto_Nombre->Text = prod->Nombre;
		cbProducto_Estado->Checked = prod->Estado;
	}
	};
}
