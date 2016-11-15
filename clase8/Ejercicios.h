#pragma once
#include <iostream>
#include <fstream>
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

	if (cantidadAlumnos > 1){
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

void Ejercicio3(){
	Ejercicio2();
}


void Ejercicio4(){
	cin.ignore();

	struct Juego piedraPapelTijera;

	piedraPapelTijera.Nombre = "Piedra, Papel, Tijera";
	piedraPapelTijera.Descripcion = "\n1-Piedra\n2-Papel\n3-Tijera";
	piedraPapelTijera.Jugadores = new Jugador[2];

	cout << "Juego: " << piedraPapelTijera.Nombre << endl;
	cout << "Descripcion: " << piedraPapelTijera.Descripcion << endl;

	cout << endl << endl;

	string auxNombre;

	cout << "Nombre jugador nro 1: ";
	getline(cin, auxNombre);
	piedraPapelTijera.Jugadores[0].Nombre = auxNombre;

	cout << "Nombre jugador nro 2: ";
	getline(cin, auxNombre);
	piedraPapelTijera.Jugadores[1].Nombre = auxNombre;

	cout << endl << endl;
	

	delete[] piedraPapelTijera.Jugadores;
}