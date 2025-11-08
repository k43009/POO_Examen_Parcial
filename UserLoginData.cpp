#include "UserLoginData.h"

string UserLoginData::GetUsername()
{
	return username;
}


bool UserLoginData::AsignarContrasena(string nuevaContrasena)
{
	// antes de asignarla vamos a corroborar las cosas indispensables para que la contraseña sea válida.
	// por ejemplo, que tenga al menos 8 caracteres.
	if (nuevaContrasena.length() < 8)
	{
		return false;
	}
	if (nuevaContrasena.find("ñ"))
	{
		return false;
	}
	// si no tiene al menos un número, una mayúscula, etc.

	cout << "ATENCIÓN, se cambió la contraseña del usuario." << endl;
	contrasena = nuevaContrasena;
}

string UserLoginData::ObtenerNombreUsuario()
{
	if (username == "")
	{
		return "error no hay nombre de usuario";
	}
	return username;
}
