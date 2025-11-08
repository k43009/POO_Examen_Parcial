#include "ExplicacionStatic.h"


void PieDeCorreo(string nombreDelUsuario)
{
	static string miNombre = nombreDelUsuario;

	cout << miNombre << endl;
}


void MainExplicacionStatic()
{
	// Aquí sí se va a setear el nombre de miNombre en la función, porque es la primera vez que se le asigna un valor,
	PieDeCorreo("Adrian Ulises Gonzalez Casillas");

	// Pero aquí ya no se va a asignar, porque no sería la primera vez.
	PieDeCorreo("Juanito Pérez");

	// para mandar a llamar la función "CambiarMyStaticInt" necesito un objeto de la clase ExplicacionStatic
	ExplicacionStatic myExplicacionStatic;
	myExplicacionStatic.CambiarMyStaticInt(12);


	ExplicacionStatic::ImprimirNombreDeClase();

	//cout << "la variable myStaticInt que le pertenece a la clase ExplicacionStatic tiene el valor de:"
	//	<<ExplicacionStatic::myStaticInt << endl;

	Archivo archivoCargado = Archivo::CargarArchivo();

	// A diferencia de static, las const NO le pertenecen a la clase, sí se necesita una instancia de la clase.
	ExplicacionConst miExplicacionConst;
	miExplicacionConst.miConst;

	// static const SÍ le pertenecen a la clase y no a las instancias.
	ExplicacionConst::miStaticConstInt;

	Archivo miArchivo;
	miExplicacionConst.EjemploConst(miArchivo);
}

void Archivo::BorrarDatos() // no puede ser const.
{
	datos = "";
}
