#pragma once
#include "DynamicArray.h"

// Composición de clases es meter clases dentro de otras clases
// para proveer ciertas capacidades.

class StackComposicion
{
public:
	StackComposicion(int in_capacity = 0);

	~StackComposicion();

	void Push(int value);

	int Peek();

	int Pop();

	void Print();

private:
	DynamicArray data;
};

