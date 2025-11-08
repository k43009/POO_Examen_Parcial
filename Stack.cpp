#include "Stack.h"

Stack::Stack(int in_capacity)
{
	capacity = in_capacity;
	if (capacity > 0)
		elements = new int[capacity];
	else
		elements = nullptr;
	count = 0;
}

Stack::~Stack()
{
	if (capacity > 0)
		delete[] elements;
}


