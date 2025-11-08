#pragma once

#include <iostream>
using namespace std;

// recordatorio: en los .h van las puras declaraciones, y en los cpp las puras definiciones.

// los datos para el login (iniciar sesión) de un usuario.
class UserLoginData
{
public:
	string GetUsername();

	// si bien esta cosa es pública y por tanto la variable privada "contrasena" se puede asignar en cualquier parte,
	// el hecho de tener esta función para asignarla nos da más control y seguridad sobre cómo cambia dicha variable.
	bool AsignarContrasena(string nuevaContrasena);

	// esta de aquí nos da funcionamiento adicional al momento de que se intenta acceder a una variable.
	string ObtenerNombreUsuario();

private:
	// Nombre de usuario
	string username;

	// contraseña del usuario
	string contrasena;

	// protected es básicamente lo mismo que private, 
	// PERO las clases que hereden de dicha clase SÍ pueden acceder a esas propiedades.

public:
	bool otraVariablePublic;
};

