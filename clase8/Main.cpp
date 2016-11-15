#include "Ejercicios.h"

int main() {
	int opcion = 0;

	cout << "Ejercicios:\n0)Salir\n1)Ejercicio 1\n2)Ejercicio 2\n3)Ejercicio 3\n4)Ejercicio 4" << endl;

	cout << "Opcion: ";
	cin >> opcion;

	cout << endl << endl << endl;

	switch (opcion)
	{
	case 1:
		Ejercicio1();
		break;
	case 2:
		Ejercicio2();
		break;
	case 3:
		Ejercicio3();
		break;
	case 4:
		Ejercicio4();
		break;
	case 5:
		//Ejercicio5();
		break;
	case 6:
		//Ejercicio6();
		break;
	case 7:
		//Ejercicio7();
		break;
	case 8:
		//Ejercicio8();
		break;
	default:
		break;
	}

	system("pause");

	return 0;
}