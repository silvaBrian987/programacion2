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
		cout << "Alumno nro " << i << endl << endl;

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
		cout << "Alumno nro " << i << endl << endl;
		cout << "Nombre: " << alumnos[i].Nombre << endl;
		cout << "Apellido: " << alumnos[i].Apellido << endl;
		cout << "Fecha de nacimiento: " << alumnos[i].FechaNacimiento.toString(true) << endl;
	}

}