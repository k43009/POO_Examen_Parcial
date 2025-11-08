#pragma once


template <typename T>
class DoubleLinkedList
{
public:
	DoubleLinkedList()
	{
		first = nullptr;
		last = nullptr;
		count = 0;
	}

	void Append(T value)
	{
		// checamos si está vacía
		if (first == nullptr) // o lo podríamos hacer con el count if(count == 0)
		{
			// si sí está vacía creamos el nuevo nodo, 
			Node* newNode = new Node(value);
			first = newNode;
			// Como es el único nodo, no solo es el primero, también es el último
			last = newNode;
			count++;
			return;
		}

		// tomamos last y hacemos la conexión de este nuevo nodo
		Node* newNode = new Node(value);
		// este nuevo nodo, hacia atrás tiene al último actual
		newNode->prev = last;
		// el siguiente del último actual ahora es el nuevo nodo
		last->next = newNode;
		// finalmente, el apuntador al último nodo ahora apunta al nuevo nodo.
		last = newNode;
	}

private:
	// clase anidada.
	// Sirve para que este node en específico solo exista dentro de las funciones de la clase LinkedList.
	class Node
	{
	public:
		Node(T _data)
		{
			data = _data;
			next = nullptr;
			prev = nullptr;
		}

		T data; // los datos que realmente se guardan en la lista
		Node* next; // cuál nodo sigue de este nodo, en la lista ligada.
		// si next == nullptr, entonces este nodo es el último de la lista.
		Node* prev; // cuál nodo va antes de este nodo en la lista ligada.
	};

	Node* first;
	Node* last;
	int count;

};

