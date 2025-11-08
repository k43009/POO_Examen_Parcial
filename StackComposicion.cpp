#include "StackComposicion.h"
#include "DynamicArray.h"

StackComposicion::StackComposicion(int in_capacity)
{
	// data = DynamicArray(in_capacity);
}

StackComposicion::~StackComposicion()
{
	// aquí no necesitamos darle delete al DynamicArray data, porque no es un puntero,
	// se destruye automáticamente al salir del scope {} del destructor.
}

void StackComposicion::Push(int value)
{
	data.Append(value);
}

int StackComposicion::Peek()
{
	return data.ObtenerElemento(data.GetCount()-1);
}

int StackComposicion::Pop()
{
	return data.QuitarUltimoElemento();
}

void StackComposicion::Print()
{
	data.Print();
}
