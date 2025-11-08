#include "ExplicacionTemplates.h"

#include <iostream>
#include "ClaseConstructoresYDestructores.h"
using namespace std;


void ImprimirArray(int array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << array[i] << endl;
}

void ImprimirArray(bool array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << array[i] << endl;
}

void ImprimirArray(float array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << array[i] << endl;
}

void ImprimirArray(char array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << array[i] << endl;
}



template<typename T>
void ImprimirArrayTemplate(T array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << array[i] << endl;
}

template void ImprimirArrayTemplate<int>(int array[], int tamano);
template void ImprimirArrayTemplate<float>(float array[], int tamano);
template void ImprimirArrayTemplate<Triangle>(Triangle array[], int tamano);
template void ImprimirArrayTemplate<char>(char array[], int tamano);


