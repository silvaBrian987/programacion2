#pragma once

namespace clase12 {
#include "Sprite.h"

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
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion

		Graphics ^ graficador;
		SPRITE ^ imagen;
		Color backColor;

		void Dibujar(){
			imagen->Dibujar(graficador);
		}

		void Actualizar(){
			graficador->Clear(backColor);
			
			//Sleep 0.25seg
		}

		void Mover(SPRITE ^ image, int keyCode){
			int deltaX = 5;
			int deltaY = 10;
			int vel = 1;

			int pos = 0;

			switch (keyCode)
			{
			case 40:
				pos = image->Ubicacion.Y + (vel * deltaY);
				if (pos < this->Height) image->Ubicacion.Y = pos;
				break;
			case 38:
				pos = image->Ubicacion.Y - (vel * deltaY);
				if(pos > 0) image->Ubicacion.Y = pos;
				break;
			case 39:
				image->Ubicacion.X += (vel * deltaX);
				break;
			case 37:
				image->Ubicacion.X -= (vel * deltaX);
				break;
			default:
				break;
			}
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 graficador = this->CreateGraphics();
				 backColor = this->BackColor;

				 timer1->Interval = 100;
				 timer1->Enabled = true;

				 imagen = gcnew SPRITE();
				 imagen->CargarTextura("F:\\Facultad\\assets\\angery.jpg");
				 imagen->Tamanio.Width = 100;
				 imagen->Tamanio.Height = 100;
				 imagen->Ubicacion.X = 50;
				 imagen->Ubicacion.Y = 50;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 Actualizar();
				 Dibujar();
	}
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 int keyCode = e->KeyValue;
				 Mover(this->imagen, keyCode);
	}
	};
}
