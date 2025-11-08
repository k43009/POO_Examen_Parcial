#pragma once
#include "Animal.h"

class Humano :
    public Animal
{
public:
    Humano();

    ~Humano();

    bool puedeHablar;

    void Hablar();

    // Si quito el hacer el override de una función que es Virtual Pura,
    // entonces esta clase sigue siendo Abstracta (que tiene al menos un método sin definir (es decir, virtual puro))
    // Tú NO puedes instanciar una clase abstracta.
    void HacerRuido() override;

    void FuncionEnClasePadrePeroQueNoEsVirtual(); 
};

void DemostracionHerenciaDeClases();