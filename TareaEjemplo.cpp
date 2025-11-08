#include "TareaEjemplo.h"


int Funcion1()
{
	cout << "Hola mundo desde Funcion1 \n";
	return 1;
}

float Funcion2()
{
	cout << "Hola soy la función 2 \n";
	return 0.0f;
}

bool Funcion3(int a, int b)
{
	cout << "Hola soy la función 2 \n";
	if (a == b)
		return true;
	return false;
}

void MainTareaEjemplo()
{
	// Aquí van a poner que el código que hicieron para esa tarea funciona.
	// Mandan a llamar las funciones que hicieron, las clases que hicieron, declarar las variables necesarias, etc.
	Funcion1();

	Funcion2();

	int int1 = 12;
	int int2 = 12;
	Funcion3(int1, int2);

}