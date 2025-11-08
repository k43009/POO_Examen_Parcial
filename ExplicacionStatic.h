#pragma once

#include <iostream>
using namespace std;

// Static -> Estático, que no cambia.

// static para variables
// static para funciones
// static dentro de clases y structs

class ExplicacionStatic
{
public: 
	// static int myStaticInt; // solo se le puede modificar el valor una vez, y después de eso, ya no puede cambiar. 

	ExplicacionStatic()
	{
	}

	void CambiarMyStaticInt(int otroValor)
	{
		// myStaticInt = otroValor; // esto de aquí no haría nada, porque ya se le asignó un valor en el constructor, y solo se le puede asignar una vez.
	}

	// funciones static:
	// no le pertenecen a un objeto de la clase en sí, sino a toda la clase.
	static void ImprimirNombreDeClase()
	{
		cout << "ExplicacionStatic" << endl;
	}

};

class Archivo
{
	string datos;

public:
	static Archivo CargarArchivo()
	{
		Archivo miArchivo;
		miArchivo.datos = "datos cargados";
		return miArchivo;
	}

	// las funciones que dicen const después del nombre y parámetros, nos garantizan que la instancia 
	// que manda a llamar esta función no va a tener cambios en ninguno de sus valores.
	void ImprimirArchivo() const 
	{
		cout << "contenido del archivo: " << datos << endl;
	}

	// tú no puedes cambiar ninguna variable que sea miembro de la instancia.
	// en este caso, no podemos cambiar el valor de "datos" porque es una variable de la instancia.
	void BorrarDatos(); // const, por lo tanto, no puede ser const.


};

void PieDeCorreo(string nombreDelUsuario);



void MainExplicacionStatic();







// const -> constant -> constante, nunca cambia, ni una sola vez a diferencia del static.
class ExplicacionConst
{
public:
	// se les TIENE QUE asignar un valor dentro la clase, no dentro de una función.
	const int miConst = 5;
	const int classId = 3168173;

	// static const es muchas veces mejor que solo const, porque le pertence a la clase y no a las instancias,
	// entonces solo existe una variable de esas, y no una por cada instancia de dicha clase.
	static const int miStaticConstInt = 42;

	ExplicacionConst()
	{
	}

	// const como parámetros nos garantiza que el parámetro const no va a cambiar dentro de la función,
	// ni dentro de las funciones que esa función llame internamente.
	void EjemploConst(const Archivo& archivo) const
	{
		// para poder mandar a llamar funciones de alguien recibido como const, necesito que esas funciones
		// digan const.
		archivo.ImprimirArchivo();

		// archivo.BorrarDatos(); // como no puede ser const, no la podemos mandar a llamar porque archivo es recibido como parámetro const.
	}

};





// 2.6) 10 Puntos extra, usar la struct del otro ejercicio anterior para guardar los X, Y, Alto y Ancho.
//class Rect
//{
//private:
//	VectorDeValores datos; // remplaza a X, Y, Alto y Ancho.
//
//};