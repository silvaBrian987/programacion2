#pragma once
#include <iostream>
#include <fstream>
#include <time.h>
#include "Estructuras.h"

using namespace std;

void Ejercicio1() {
	cout << "*****************" << endl;
	cout << "*Aprendiendo C++*" << endl;
	cout << "*****************" << endl;

	cout << endl << endl;

	int cantidadEmpleados = 0;

	cout << "Cantidad de empleados a procesar: ";
	cin >> cantidadEmpleados;
	cin.ignore();

	struct Empleado * empleados;
	empleados = new Empleado[cantidadEmpleados];

	cout << endl << endl << endl;

	string auxStr;
	for (int i = 0; i < cantidadEmpleados; i++) {
		cout << "Empleado nro " << i << endl << endl;

		cout << "Nombre: ";
		getline(cin, auxStr);
		empleados[i].Nombre = auxStr;

		cout << "Sexo: ";
		getline(cin, auxStr);
		empleados[i].Sexo = auxStr;

		cout << "Edad: ";
		cin >> empleados[i].Edad;

		cout << endl;
	}

	cout << endl;
	cout << "Empleados cargados: " << endl;
	cout << endl;

	for (int i = 0; i < cantidadEmpleados; i++) {
		cout << "Empleado nro " << i << endl << endl;

		cout << "Nombre: " << empleados[i].Nombre << endl;
		cout << "Sexo: " << empleados[i].Sexo << endl;
		cout << "Edad: " << empleados[i].Edad << endl;
	}

	delete[] empleados;
}


void Ejercicio2() {
	int cantidadAlumnos = 0;

	cout << "Cantidad de alumnos a procesar: ";
	cin >> cantidadAlumnos;
	cin.ignore();

	struct Alumno * alumnos;
	alumnos = new Alumno[cantidadAlumnos];

	cout << endl << endl << endl;

	string auxStr;
	for (int i = 0; i < cantidadAlumnos; i++) {
		cout << "***Alumno nro " << i + 1 << "***" << endl << endl;

		cout << "Nombre: ";
		getline(cin, auxStr);
		alumnos[i].Nombre = auxStr;

		cout << "Apellido: ";
		getline(cin, auxStr);
		alumnos[i].Apellido = auxStr;

		cout << "Fecha de nacimiento (YYYYMMDD): ";
		getline(cin, auxStr);
		alumnos[i].FechaNacimiento.cargarDesdeString_YYYYMMDD(auxStr);

		cout << endl;
	}

	cout << endl;
	cout << "Alumnos cargados:" << endl;
	cout << endl;

	for (int i = 0; i < cantidadAlumnos; i++) {
		cout << "***Alumno nro " << i + 1 << "***" << endl << endl;
		cout << "Nombre: " << alumnos[i].Nombre << endl;
		cout << "Apellido: " << alumnos[i].Apellido << endl;
		cout << "Fecha de nacimiento: " << alumnos[i].FechaNacimiento.toString(true) << endl;
		cout << endl;
	}

	if (cantidadAlumnos > 1) {
		/*for (int i = 1; i < cantidadAlumnos; i++) {
			for (int j = 0; j < (cantidadAlumnos - i); j++){
			if (alumnos[j].esMayorQue(alumnos[j + 1])){
			struct Alumno aux = alumnos[j + 1];
			alumnos[j + 1] = alumnos[j];
			alumnos[j] = aux;
			}
			}
			}*/
		alumnos[0].ordenarPorEdad(alumnos, cantidadAlumnos, false);
	}

	cout << endl << endl;

	cout << "El alumno de menor edad es " << alumnos[0].Nombre << " " << alumnos[0].Apellido << endl;
	cout << "El alumno de mayor edad es " << alumnos[cantidadAlumnos - 1].Nombre << " " << alumnos[cantidadAlumnos - 1].Apellido << endl;

	delete[] alumnos;
}

void Ejercicio3() {
	Ejercicio2();
}


const int PPT_PIEDRA = 1;
const int PPT_PAPEL = 2;
const int PPT_TIJERA = 3;
void procesarJugada(Juego &piedraPapelTijera);
void imprimirDatosJuego(Juego piedraPapelTijera);
bool jugar(Juego &piedraPapelTijera);
void Ejercicio4() {
	cin.ignore();

	struct Juego piedraPapelTijera;

	piedraPapelTijera.Nombre = "Piedra, Papel, Tijera";
	piedraPapelTijera.Descripcion = "\n1-Piedra\n2-Papel\n3-Tijera";

	imprimirDatosJuego(piedraPapelTijera);

	cout << endl << endl;

	string auxNombre;

	cout << "Nombre jugador nro 1: ";
	getline(cin, auxNombre);
	piedraPapelTijera.Jugadores[0].Nombre = auxNombre;

	cout << "Nombre jugador nro 2: ";
	getline(cin, auxNombre);
	piedraPapelTijera.Jugadores[1].Nombre = auxNombre;

	cout << endl << endl;

	while (jugar(piedraPapelTijera)) {
		system("cls");
	}
}
bool jugar(Juego &piedraPapelTijera) {
	cout << piedraPapelTijera.Jugadores[0].Nombre << ", ingrese su jugada: ";
	cin >> piedraPapelTijera.Jugadores[0].Jugada;

	system("cls");

	imprimirDatosJuego(piedraPapelTijera);
	cout << endl << endl;

	cout << piedraPapelTijera.Jugadores[1].Nombre << ", ingrese su jugada: ";
	cin >> piedraPapelTijera.Jugadores[1].Jugada;

	procesarJugada(piedraPapelTijera);

	if (piedraPapelTijera.Empate) {
		cout << "EMPATE!!" << endl;
	}
	else {
		cout << "El ganador es: " << piedraPapelTijera.Ganador.Nombre << endl;
		cout << "Puntos: " << piedraPapelTijera.Ganador.Puntos << endl;
	}

	cout << endl << endl;

	int opcion = 0;
	cout << "¿Desea jugar de nuevo?\n1) Si\nOpcion: ";
	cin >> opcion;
	if (opcion == 1) {
		return true;
	}
	return false;
}
void imprimirDatosJuego(Juego piedraPapelTijera) {
	cout << "Juego: " << piedraPapelTijera.Nombre << endl;
	cout << "Descripcion: " << piedraPapelTijera.Descripcion << endl;
}
void procesarJugada(Juego &piedraPapelTijera) {
	int jugadaJugador1 = piedraPapelTijera.Jugadores[0].Jugada;
	int jugadaJugador2 = piedraPapelTijera.Jugadores[1].Jugada;

	if (jugadaJugador1 == PPT_PIEDRA) {
		if (jugadaJugador2 == PPT_PIEDRA) {
			piedraPapelTijera.Empate;
		}
		else if (jugadaJugador2 == PPT_PAPEL) {
			piedraPapelTijera.Jugadores[1].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[1];
		}
		else if (jugadaJugador2 == PPT_TIJERA) {
			piedraPapelTijera.Jugadores[0].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[0];
		}
	}
	else if (jugadaJugador1 == PPT_PAPEL) {
		if (jugadaJugador2 == PPT_PAPEL) {
			piedraPapelTijera.Empate = true;
		}
		else if (jugadaJugador2 == PPT_TIJERA) {
			piedraPapelTijera.Jugadores[1].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[1];
		}
		else if (jugadaJugador2 == PPT_PIEDRA) {
			piedraPapelTijera.Jugadores[0].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[0];
		}
	}
	else if (jugadaJugador1 == PPT_TIJERA) {
		if (jugadaJugador2 == PPT_TIJERA) {
			piedraPapelTijera.Empate;
		}
		else if (jugadaJugador2 == PPT_PIEDRA) {
			piedraPapelTijera.Jugadores[1].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[1];
		}
		else if (jugadaJugador2 == PPT_PAPEL) {
			piedraPapelTijera.Jugadores[0].Puntos += 1;
			piedraPapelTijera.Ganador = piedraPapelTijera.Jugadores[0];
		}
	}
}

void cargarAtletas(Atleta Ats[], int cant);
Atleta obtenerAtletaMayorCantidadMedallas(Atleta * Ats, int cant);
void Ejercicio5() {
	const int cantidadAtletas = 4;
	Atleta Ats[cantidadAtletas];

	cargarAtletas(Ats, cantidadAtletas);

	Atleta ganador = obtenerAtletaMayorCantidadMedallas(Ats, cantidadAtletas);

	cout << "El atleta con mayor cantidad de medallas es " << ganador.Pers.Nombre << " de " << ganador.Pers.Pais << " en " << ganador.Deporte << " con un total de " << ganador.Medallas << " medallas" << endl;
}
void cargarAtletas(Atleta Ats[], int cant) {
	srand(time(NULL));
	for (int i = 0; i < cant; i++) {
		Ats[i].Pers.Nombre = "Atleta " + to_string(i);
		Ats[i].Pers.Pais = "Pais " + to_string(i);
		Ats[i].Deporte = "Deporte " + to_string(i);
		Ats[i].Medallas = (rand() % 100) + 1;
	}
}
Atleta obtenerAtletaMayorCantidadMedallas(Atleta * Ats, int cant) {
	Atleta ganador = Ats[0];

	for (int i = 1; i < cant; i++) {
		for (int j = 1; j < (cant - i); j++) {
			if (Ats[j].Medallas > ganador.Medallas) {
				ganador = Ats[j];
			}
		}
	}

	return ganador;
}

Gerente * cargarDatos(int cantidadGerentes);
Gerente * cargarDatosDemo(int cantidadGerentes);
void mostrarOrganigrama(Gerente * gerentes, int cantGerentes);
void Ejercicio6() {

	int cantGerentes = 0;
	cout << "*Cantidad de gerentes: ";
	cin >> cantGerentes;
	cout << endl;

	Gerente * gerentes = cargarDatosDemo(1);

	cout << endl << endl;

	mostrarOrganigrama(gerentes, cantGerentes);

	delete[] gerentes;
}
Gerente * cargarDatosDemo(int cantidadGerentes) {
	int cantJefes = 1;
	int cantEmpleados = 1;

	Gerente * gerentes = new Gerente[cantidadGerentes];
	gerentes[0].Persona.Nombre = "Brian";
	gerentes[0].Persona.Apellido = "Silva";
	gerentes[0].Persona.Cargo = "Gerente de sistemas";
	gerentes[0].CantidadJefes = cantJefes;
	gerentes[0].Jefes = new Jefe[cantJefes];
	gerentes[0].Jefes[0].Persona.Nombre = "Martin";
	gerentes[0].Jefes[0].Persona.Apellido = "Cirillo";
	gerentes[0].Jefes[0].Persona.Cargo = "Lider Funcional";
	gerentes[0].Jefes[0].CantidadEmpleados = cantEmpleados;
	gerentes[0].Jefes[0].Empleados = new Empleado_ejercicio6[cantEmpleados];
	gerentes[0].Jefes[0].Empleados[0].Persona.Nombre = "Andrea";
	gerentes[0].Jefes[0].Empleados[0].Persona.Apellido = "Gonzalez";
	gerentes[0].Jefes[0].Empleados[0].Persona.Cargo = "Desarrollador";

	return gerentes;
}
Gerente * cargarDatos(int cantGerentes) {
	int cantJefes;
	int cantEmpleados;

	Gerente * gerentes = new Gerente[cantGerentes];

	for (int g = 0; g < cantGerentes; g++) {
		Gerente gerente;
		
		cout << "*******Gerente nro " << g << endl << endl;
		cin.ignore();

		cout << "Nombre: ";
		getline(cin, gerente.Persona.Nombre);
		cout << "Apellido: ";
		getline(cin, gerente.Persona.Apellido);
		cout << "Cargo: ";
		getline(cin, gerente.Persona.Cargo);

		cout << endl << endl;

		cout << "*Cantidad de jefes: ";
		cin >> cantJefes;
		cout << endl;

		gerentes[g].Jefes = new Jefe[cantJefes];
		gerentes[g].CantidadJefes = cantJefes;

		for (int j = 0; j < cantJefes; j++) {
			Jefe jefe;

			cout << "*******Jefe nro " << g << endl << endl;
			cin.ignore();

			cout << "Nombre: ";
			getline(cin, jefe.Persona.Nombre);
			cout << "Apellido: ";
			getline(cin, jefe.Persona.Apellido);
			cout << "Cargo: ";
			getline(cin, jefe.Persona.Cargo);

			cout << endl << endl;

			cout << "*Cantidad de empleados: ";
			cin >> cantEmpleados;
			cout << endl;

			gerentes[g].Jefes[j].Empleados = new Empleado_ejercicio6[cantEmpleados];
			gerentes[g].Jefes[j].CantidadEmpleados = cantEmpleados;

			for (int e = 0; e < cantEmpleados; e++) {
				Empleado_ejercicio6 empleado;

				cout << "*******Empleado nro " << g << endl << endl;
				cin.ignore();

				cout << "Nombre: ";
				getline(cin, jefe.Empleados[e].Persona.Nombre);
				cout << "Apellido: ";
				getline(cin, empleado.Persona.Apellido);
				cout << "Cargo: ";
				getline(cin, empleado.Persona.Cargo);

				cout << endl << endl;

				jefe.Empleados[e] = empleado;
			}
			gerente.Jefes[j] = jefe;
		}
		gerentes[g] = gerente;
	}

	return gerentes;
}
void mostrarOrganigrama(Gerente * gerentes, int cantGerentes) {
	int cantJefes = 0;
	int cantEmpleados = 0;
	for (int g = 0; g < cantGerentes; g++) {
		Gerente gerente = gerentes[g];
		cantJefes = gerente.CantidadJefes;
		cout << "*" << gerente.Persona.Nombre << " " << gerente.Persona.Apellido << " - " << gerente.Persona.Cargo << endl;
		for (int j = 0; j < cantJefes; j++) {
			Jefe jefe = gerente.Jefes[j];
			cantEmpleados = jefe.CantidadEmpleados;
			cout << "***" << jefe.Persona.Nombre << " " << jefe.Persona.Apellido << " - " << jefe.Persona.Cargo << endl;
			for (int e = 0; e < cantEmpleados; e++) {
				Empleado_ejercicio6 empleado = jefe.Empleados[e];
				cout << "******" << empleado.Persona.Nombre << " " << empleado.Persona.Apellido << " - " << empleado.Persona.Cargo << endl;
			}
		}
	}
}

void Ejercicio7() {
	
}

void Ejercicio8() {

}