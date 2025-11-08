#include "EjerciciosMemoriaDinamica.h"

#include<iostream>
using namespace std;

void MainEjemplosMemoriaDinamica()
{
	// me da memoria del tamaño de un int, en alguna dirección de memoria aleatoria.
	// la variable myNewInt es la que nos dice cuál fue esa dirección de memoria.
	int* myNewInt = new int;

	// acá le damos un valor a la variable que está en esa dirección de memoria.
	*myNewInt = 5;

	int* myIntPointer = myNewInt; // estas dos variables apuntan a la misma dirección de memoria.

	// cuando ya no la necesites, tienes que liberar esa memoria de la variable
	delete myNewInt;
	// lo que hay que hacer es poner el valor del puntero DE TODOS LOS PUNTEROS QUE APUNTABA A ESA DIRECCIÓN, como nullptr.
	myIntPointer = nullptr;
	myNewInt = nullptr;

	// *myNewInt = 10; // truena porque no tienes permiso de escritura en esa dirección porque ya hiciste delete.


	// este sigue apuntando a la dirección de memoria que se había obtenido con el new, pero ahí dentro de esa dirección
	// ya no hay datos válidos, se borraron al hacer el delete.
	// Dangling pointer = puntero colgante, significa que un puntero cree que todavía apunta a algo válido, pero ya no lo es.
	if (myIntPointer == nullptr)
		return;

	*myIntPointer = 10; // ? sí te deja escribir, porque la dirección de memoria NO está reservada, pero no deberías!


	// NO SE PUEDE HACER DELETE A MEMORIA ESTÁTICA
	int myNormalInt = 10;
	int* ptrToNormalInt = &myNormalInt; // esto de aquí no es memoria dinámica, no se le necesita hacer delete
	// delete ptrToNormalInt; // esto apunta a una variable de memoria estática, y por lo tanto truena tu programa si le intentas hacer delete.
	cout << "myNormalInt" << myNormalInt << endl;

	myNormalInt = NULL;
	ptrToNormalInt = nullptr;
	// if (myNormalInt == nullptr) // una variable no-puntero no se puede comparar contra nullptr.

}

void ParOImparParaEnteros(int intArray[], int tamano)
{
	// usen un puntero auxiliar para manejar las direcciones de memoria y no modificar a array directamente.
	int* ptrAuxiliar = intArray;
	// iterar por todos los elementos del array y le pongamos el resultado de %2 a cada elemento.
	for (int i = 0; i < tamano; i++)
	{
		*ptrAuxiliar = *ptrAuxiliar % 2;
		ptrAuxiliar++;
	}

	for (int i = 0; i < tamano; i++)
	{
		// estas dos líneas son exactamente igual de válidas.
		*(ptrAuxiliar + i) = *(ptrAuxiliar + i) % 2;
		ptrAuxiliar[i] = ptrAuxiliar[i] % 2;
	}

}
