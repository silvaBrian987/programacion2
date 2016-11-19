using namespace System;
using namespace System::Drawing;

ref struct FONDO{
	Point Ubicacion;
	Size Tamanio;
	Image ^ Textura;
	Bitmap ^ Textura2;

	int velocidadHorizontal;

	Rectangle Limite;

	void CargarTextura(String ^ archivo){
		Textura = Image::FromFile(archivo);
		//Textura2 = gcnew Bitmap(archivo);
	}

	void Dibujar(Graphics ^ g){
		g->DrawImage(this->Textura, this->Ubicacion.X, this->Ubicacion.Y, this->Tamanio.Width, this->Tamanio.Height);
		//g->DrawImage(this->Textura2, this->Ubicacion.X, this->Ubicacion.Y, this->Tamanio.Width, this->Tamanio.Height);
	}

	void Actualizar(){
		Ubicacion.X -= velocidadHorizontal;
		int x2 = Ubicacion.X + Tamanio.Width;

		//Si voy hacia la izquierda u x2 esta en 0, la imagen salio de la pantalla y la reubico al final
		if (velocidadHorizontal > 0 && x2 <= Limite.X){
			Ubicacion.X = Tamanio.Width;
		}
	}
};