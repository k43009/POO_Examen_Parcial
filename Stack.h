#pragma once
#include<iostream>
using namespace std;

class Stack
{
public:
	Stack(int in_capacity = 0);

	~Stack();

	// Inserta un elemento en el tope de la pila
	void Push(int value)
	{
		int oldCapacity = capacity;

		// checamos si alcanza la capacidad
		if (count == capacity)
		{
			if (capacity == 0)
				capacity = 1;
			else
				capacity *= 2;
			// entonces necesitamos el resize:
			// 1) pedimos más memoria dinámica
			int* arrayConMasMemoria = new int[capacity];
			// 2) copiamos todo del array original al nuevo
			for (int i = 0; i < oldCapacity; i++)
			{
				arrayConMasMemoria[i] = elements[i];
			}
			// 3) borramos el array original
			delete[] elements;
			// 4) reasignamos elements al arrayConMasMemoria
			elements = arrayConMasMemoria;
		}

		elements[count] = value;
		count++; // y ahora tiene dentro 1 elementos más. Que el tope de la pila está un elemento más arriba.
	}

	// saca y regresa el elemento del tope de la pila.
	int Pop()
	{
		// si sí hay al menos un elemento, entonces sí lo podemos sacar.
		if (count > 0)
		{
			count--; // nos basta hacer esto para que ese último elemento ya no se pueda acceder.
			return elements[count];
		}
		
		// no se necesita el else porque si entró al if de arriba entonces ya va a hacer return y no
		// llegaría a esta parte del código.
		cout << "ERROR la pila estaba vacía pero se intentó sacar un elemento de ella." << endl;
		return -INFINITY;
	}

	// te regresa el elemento del tope de la pila PERO sin sacarlo de la pila.
	int Peek()
	{
		if (count > 0)
		{
			return elements[count - 1];
		}

		cout << "ERROR la pila estaba vacía pero se intentó hacer Peek de ella." << endl;
		return -INFINITY;
	}

	void PrintStack()
	{
		cout << "imprimiendo stack: " << endl;
		for (int i = 0; i < count; i++)
			cout << elements[i] << ", ";
		cout << endl;
	}

private:
	// los datos que realmente almacena la pila.
	int* elements;

	// número de elementos actualmente en la pila. Además, count representa el tope de tu pila.
	int count; 

	// cuántos elementos caben en la pila antes de hacer un resize.
	int capacity;
};

