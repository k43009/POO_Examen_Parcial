#pragma once
#include <iostream>

using namespace std;


void ImprimirArray(int array[], int tamano);

void ImprimirArray(bool array[], int tamano);

void ImprimirArray(float array[], int tamano);

void ImprimirArray(char array[], int tamano);

template<typename T>
void ImprimirArrayTemplate(T array[], int tamano);


// cada que tú mandas a llamar un función template con un tipo de dato distinto
// el compilador/ preprocesador genera un instancia automáticamente en tu código de esa función pero con el 
// tipo específico que le pediste.

//
//void ImprimirArrayTemplate(int array[], int tamano)
//{
//	for (int i = 0; i < tamano; i++)
//		cout << array[i] << endl;
//}
//
//void ImprimirArrayTemplate(float array[], int tamano)
//{
//	for (int i = 0; i < tamano; i++)
//		cout << array[i] << endl;
//}
//void ImprimirArrayTemplate(Triangle array[], int tamano)
//{
//	for (int i = 0; i < tamano; i++)
//		cout << array[i] << endl;
//}