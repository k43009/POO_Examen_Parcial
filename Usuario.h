#pragma once

#include<iostream>
using namespace std;
#include "SentinelLinkedList.h"
//enum ETipoDeUsuario
//{
//	Alumno,
//	Maestro,
//	Admin
//};

class Usuario
{
public:
	Usuario();
	Usuario(string _nombreDeUsuario, string _nombreCompleto);

	string nombreDeUsuario;
	string contrasena;

	// ETipoDeUsuario tipoDeUsuario;

	// Es virtual porque cada clase hija puede proveer su propia implementación.
	virtual void MostrarOpciones();

	// esto nos permite leerla en las clases hijas, y también a cualquier 
	// otro que tenga una instancia de usuario. Pero nadie más que la clase Usuario lo puede modificar.
	const string ObtenerNombreCompleto();



private:
	string fechaDeNacimiento;
	string nombreCompleto;

	// Protected significa que es igual a privado PERO las clases que heredan de esta clase SÍ
	// pueden usar (leer y escribir) estas propiedades.
protected:

	void QuitarMateria(string nombreDeMateria);

	// queremos que esta sí la puedan modificar las clases hijas!
// Porque, por ejemplo, un alumno quiere darse de alta/baja en una clase.
	SentinelLinkedList<string> nombresDeMaterias;

	// Declare the overloaded operator<< as a friend function
	friend std::ostream& operator<<(std::ostream& os, const Usuario& obj);
};


