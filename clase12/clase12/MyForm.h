#pragma once
#include "Sprite.h"
#include "Fondo.h"

namespace clase12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//this->SetStyle(System::Windows::Forms::ControlStyles::UserPaint | System::Windows::Forms::ControlStyles::AllPaintingInWmPaint | System::Windows::Forms::ControlStyles::OptimizedDoubleBuffer, true);
			this->SetStyle(System::Windows::Forms::ControlStyles::UserPaint, true);
			this->SetStyle(System::Windows::Forms::ControlStyles::AllPaintingInWmPaint, true);
			this->SetStyle(System::Windows::Forms::ControlStyles::OptimizedDoubleBuffer, true);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"MyForm";
			this->Text = L"Juego";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion

		Graphics ^ graficador;
		FONDO ^ fondo1;
		FONDO ^ fondo2;
		SPRITE ^ p1;
		Color backColor;

		void Dibujar(){
			fondo1->Dibujar(graficador);
			fondo2->Dibujar(graficador);
			p1->Dibujar(graficador);
		}

		void Actualizar(){
			fondo1->Actualizar();
			fondo2->Actualizar();
			p1->Actualizar();

			//Basicamente: borra todo el contenido del control (formulario en este caso) y llama al evento Paint
			Invalidate();
		}

		void MoverP1(SPRITE ^ image, int keyCode){
			int deltaX = 5;
			int deltaY = 10;
			int vel = 1;

			int pos = 0;

			switch (keyCode)
			{
			case 83:
				pos = image->Ubicacion.Y + (vel * deltaY);
				if (pos < this->Height) image->Ubicacion.Y = pos;
				break;
			case 87:
				pos = image->Ubicacion.Y - (vel * deltaY);
				if (pos > 0) image->Ubicacion.Y = pos;
				break;
			case 68:
				image->Ubicacion.X += (vel * deltaX);
				break;
			case 65:
				image->Ubicacion.X -= (vel * deltaX);
				break;
			default:
				break;
			}
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //graficador = this->CreateGraphics();

				 timer1->Interval = 1;
				 timer1->Enabled = true;

				 //Fondo
				 fondo1 = gcnew FONDO();
				 fondo1->CargarTextura("fondo.gif");
				 fondo1->Tamanio.Width = this->Width;
				 fondo1->Tamanio.Height = this->Height;
				 fondo1->Ubicacion.X = 0;
				 fondo1->Ubicacion.Y = 0;

				 fondo2 = gcnew FONDO();
				 fondo2->CargarTextura("fondo2.gif");
				 fondo2->Tamanio.Width = this->Width;
				 fondo2->Tamanio.Height = this->Height;
				 //fondo2->Ubicacion.X = 0;
				 //fondo2->Ubicacion.Y = 0;

				 //Personaje
				 p1 = gcnew SPRITE();
				 p1->CargarTextura("angery.jpg");
				 p1->Tamanio.Width = 100;
				 p1->Tamanio.Height = 100;
				 p1->Ubicacion.X = 50;
				 p1->Ubicacion.Y = 50;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Actualizar();
	}
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 int keyCode = e->KeyValue;
				 MoverP1(this->p1, keyCode);
	}
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 /*int keyCode = e->KeyValue;
				 Mover(this->imagen, keyCode);*/
	}
	private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 int keyCode = e->KeyValue;
				 MoverP1(this->p1, keyCode);
	}
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 graficador = e->Graphics;
				 Dibujar();
	}
};
}
