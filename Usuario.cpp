#include "Usuario.h"

Usuario::Usuario()
{
	nombreCompleto = "Nombre por defecto";
	nombreDeUsuario = "nombre de usuario por defecto";
}

Usuario::Usuario(string _nombreDeUsuario, string _nombreCompleto)
{
	nombreDeUsuario = _nombreDeUsuario;
	nombreCompleto = _nombreCompleto;
}

void Usuario::MostrarOpciones()
{
	cout << "Hola " << ObtenerNombreCompleto() << endl;
}

const string Usuario::ObtenerNombreCompleto()
{
	return nombreCompleto;
}

void Usuario::QuitarMateria(string nombreDeMateria)
{
	nombresDeMaterias.DeleteByValue(nombreDeMateria);
}


// Define the overloaded operator<< outside the class
std::ostream& operator<<(std::ostream& os, const Usuario& obj) {
	os << "Nombre completo=" << obj.nombreCompleto << ", Nombre de usuario=" << obj.nombreDeUsuario;
	return os; // Return the ostream reference for chaining
}