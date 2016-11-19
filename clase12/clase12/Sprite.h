using namespace System;
using namespace System::Drawing;

ref struct SPRITE{
	Point Ubicacion;
	Size Tamanio;
	Image ^ Textura;

	void CargarTextura(String ^ archivo){
		Textura = Image::FromFile(archivo);
	}

	void Actualizar(){
	}

	void Dibujar(Graphics ^ g){
		g->DrawImage(Textura, Ubicacion.X, Ubicacion.Y, Tamanio.Width, Tamanio.Height);
	}

	bool DetectarColision(SPRITE ^ sp){
		if ((this->Ubicacion.X <= sp->Ubicacion.X) && (this->Ubicacion.Y >= sp->Ubicacion.Y)){
			return true;
		}
		return false;
	}
};