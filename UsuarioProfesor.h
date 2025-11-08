#pragma once
#include "Usuario.h"

class UsuarioProfesor :
    public Usuario
{
public:
    UsuarioProfesor(string _nombreDeUsuario, string _nombreCompleto);

    void MostrarOpciones() override;

};


void DemostracionHerenciaClaseUsuario();
