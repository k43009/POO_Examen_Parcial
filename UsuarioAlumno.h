#pragma once
#include "Usuario.h"
class UsuarioAlumno :
    public Usuario
{
    // Ya hereda el tener nombreDeUsuario, contraseña, nombreCompleto y fecha de nacimiento, los hereda 
    // por ser hija de Usuario.
public:
    UsuarioAlumno(string _nombreDeUsuario, string _nombreCompleto);



    void MostrarOpciones() override;
};

