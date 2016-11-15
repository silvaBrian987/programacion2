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
		this->Anio = stoi(fecha.substr(0, 3));
		this->Mes = stoi(fecha.substr(3, 6));
		this->Dia = stoi(fecha.substr(6, 8));
	}

	string toString(bool formatted) {
		if (formatted) {
			return to_string(this->Dia) + "/" + to_string(this->Mes) + "/" + to_string(this->Anio);
		}else{
			return  to_string(this->Anio) + to_string(this->Mes) + to_string(this->Dia);
		}
	}
};

struct Alumno {
	string Nombre;
	string Apellido;
	Fecha FechaNacimiento;

	bool esMayorQue(Alumno alumno) {
		if (this->FechaNacimiento.Anio > alumno.FechaNacimiento.Anio) {
			return true;
		}
		else if (this->FechaNacimiento.Anio < alumno.FechaNacimiento.Anio) {
			return false;
		}
		else {
			if (this->FechaNacimiento.Mes > alumno.FechaNacimiento.Mes) {
				return true;
			}
			else if (this->FechaNacimiento.Mes < alumno.FechaNacimiento.Mes) {
				return false;
			}
			else {
				if (this->FechaNacimiento.Dia > alumno.FechaNacimiento.Dia) {
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
};