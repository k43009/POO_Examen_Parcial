#include "Queue.h"


void MainQueues()
{
	// cuando les dice: "falta la lista de argumentos para plantilla"
	// quiere decir que no le han puesto los <> con el tipo de dato. Por ejemplo <int>

	// declaramos una queue
	Queue<float> myQueue = Queue<float>(5);


	// va a meter 1.1, 2.2, 3.3, 4.4 y 5.5
	for (int i = 0; i < 5; i++)
	{
		myQueue.Enqueue(1 + i * 1.1f);
	}

	myQueue.Print();
	cout << "el elemento al frente de la fila es: " << myQueue.Front() << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "atendiendo al elemento: " << myQueue.Dequeue() << endl;
	}

	// probamos sacar elementos o checar elementos cuando está vacío.
	myQueue.Front();
	myQueue.Dequeue();

	// ya probamos lo básico, ahora probamos el ciclado de head y tail.
	cout << "probando que tail se cicla correctamente: \n";
	// va a meter 1.1, 2.2, 3.3, 4.4 y 5.5
	for (int i = 0; i < 5; i++)
	{
		myQueue.Enqueue( 1 + i * 1.1f);
	}

	// ahora borro 1.1 que es del frente para que head se mueva, y tail pueda insertar en la posición 0.
	myQueue.Dequeue();
	myQueue.Enqueue(6.6f);
	myQueue.Print();

	// para el resize, nos basta con encolar un elemento más:
	myQueue.Enqueue(7.7f);
	myQueue.Print();

}