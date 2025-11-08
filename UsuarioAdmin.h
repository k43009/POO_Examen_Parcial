#pragma once
#include "Usuario.h"

#include "SentinelLinkedList.h"

class UsuarioAdmin :
    public Usuario
{
public:
    UsuarioAdmin(string _nombreDeUsuario, string _nombreCompleto);

    void MostrarOpciones() override;

    void AgregarUsuario(Usuario* usuario);

    void BorrarUsuarioPorNombreDeUsuario(Usuario* usuario);

private:
    SentinelLinkedList<Usuario*> listaDeUsuarios;
};

