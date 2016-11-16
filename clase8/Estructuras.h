#pragma once
#include <string>

using namespace std;

struct Empleado {
	string Nombre;
	string Sexo;
	int Edad;
};

struct Fecha {
	int Anio;
	int Mes;
	int Dia;

	void cargarDesdeString_YYYYMMDD(string fecha) {
		this->Anio = stoi(fecha.substr(0, 4));
		this->Mes = stoi(fecha.substr(4, 2));
		this->Dia = stoi(fecha.substr(6, 2));
	}

	string toString(bool formatted) {
		if (formatted) {
			return to_string(this->Dia) + "/" + to_string(this->Mes) + "/" + to_string(this->Anio);
		}
		else{
			return  to_string(this->Anio) + to_string(this->Mes) + to_string(this->Dia);
		}
	}
};

struct Alumno {
	string Nombre;
	string Apellido;
	Fecha FechaNacimiento;

	bool esMayorQue(Alumno alumno) {
		if (this->FechaNacimiento.Anio < alumno.FechaNacimiento.Anio) {
			return true;
		}
		else if (this->FechaNacimiento.Anio > alumno.FechaNacimiento.Anio) {
			return false;
		}
		else {
			if (this->FechaNacimiento.Mes < alumno.FechaNacimiento.Mes) {
				return true;
			}
			else if (this->FechaNacimiento.Mes > alumno.FechaNacimiento.Mes) {
				return false;
			}
			else {
				if (this->FechaNacimiento.Dia < alumno.FechaNacimiento.Dia) {
					return true;
				}
				else if (this->FechaNacimiento.Dia > alumno.FechaNacimiento.Dia) {
					return false;
				}
				else {
					return false;
				}
			}
		}
	}

	void ordenarPorEdad(Alumno * alumnos, int cantidad, bool deMayorAMenor){
		for (int i = 1; i < cantidad; i++) {
			for (int j = 0; j < (cantidad - i); j++){
				if (deMayorAMenor){
					if (!alumnos[j].esMayorQue(alumnos[j + 1])){
						struct Alumno aux = alumnos[j];
						alumnos[j] = alumnos[j + 1];
						alumnos[j + 1] = aux;
					}
				}
				else{
					if (alumnos[j].esMayorQue(alumnos[j + 1])){
						struct Alumno aux = alumnos[j + 1];
						alumnos[j + 1] = alumnos[j];
						alumnos[j] = aux;
					}
				}
			}
		}
	}
};

struct Jugador{
	string Nombre;
	int Jugada;
	int Puntos = 0;
};

struct Juego{
	string Nombre;
	string Descripcion;
	Jugador Jugadores[2];
	Jugador Ganador;
	bool Empate = false;
};
