#pragma once

#include <iostream>
using namespace std;



class WebPacket
{
	int payload[10]; // datos útiles de este paquete web
	
	// datos del header (encabezado del paquete)
	int origen;
	string direccionIP;

public:
	void Inicializar(int in_origen, string in_direccionIP)
	{
		origen = origen;
		direccionIP = direccionIP;
	}

	void Inicializar(int in_origen, string in_direccionIP, int in_payload[10])
	{
		Inicializar(in_origen, in_direccionIP);
		// payload = in_payload; // esto no nos deja.
		payload[0] = in_payload[0]; // esto sí, 
		payload[1] = in_payload[1]; // esto también
		// y este for también
		for (int i = 0; i < 10; i++)
		{
			payload[i] = in_payload[i];
		}
	
		// un valor 'L' se refiere a lo que está a la izquierda de un operador, 
		// por ejemplo a la izquierda de un '='
	}

	// al recibir el array como in_payload[], es decir, sin un número entre los [], el array puede ser de cualquier tamaño
	void Inicializar(int in_origen, string in_direccionIP, int in_payload[], int tamanio_payload)
	{
		if (tamanio_payload > 10)
		{
			cout << "error, el tamaño del payload recibido es mayor que la capacidad del payload del Packet" << endl;
			return; // le damos return para salirnos de la función y no hacer nada más, porque si no daría error.
		}

		Inicializar(in_origen, in_direccionIP);
		for (int i = 0; i < tamanio_payload; i++)
		{
			payload[i] = in_payload[i];
		}
	}

	// inicioDeEscritura es en qué posición de nuestro payload se va a comenzar a poner lo del in_payload recibido.
	void SetearPayload(int in_payload[], int tamanio_payload, int inicioDeEscritura)
	{
		if (tamanio_payload + inicioDeEscritura > 10)
		{
			cout << "error, el tamaño del payload recibido más el inicio de escritura es mayor que la capacidad del payload del Packet" << endl;
			return; // le damos return para salirnos de la función y no hacer nada más, porque si no daría error.
		}

		// las direcciones de memoria también son bits/bytes, entonces también se les puede hacer aritmética.
		//payload += 1 = payload[1]
		//payload += 2 = payload[2]

		// como queremos que empiece a escribir a partir de inicioDeEscritura, pues ponemos el valor inicial de 'i' igual a ello.
		for (int i = inicioDeEscritura; i < tamanio_payload; i++)
		{
			// a la dirección de memoria que está i*(tamaño de entero en bytes) a la derecha del origen, asígnale in_payload[i]
			*(payload + i) = in_payload[i]; // va entre paréntesis porque primero queremos que mueva la dirección de memoria, y después que nos dé lo que hay dentro.
			// el operador de indirección '*' nos permite acceder al valor que está almacenado en la dirección de memoria dada.
			// *payload = in_payload[0];
			// sin el punto, lo que tú estás manejando es la pura dirección de memoria.
			// payload = in_payload
		}
	}


};

void MainWebPacket();