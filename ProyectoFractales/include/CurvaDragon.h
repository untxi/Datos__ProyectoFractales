/** ~~~ Curva Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>

using namespace std;

LinkedList<char> CurvaDragon(int pIteracion){
    // Atributos
    LinkedList <char> miListaItera;
    char paso = 'D'; // Indica la direccion del paso para el dibujo
    int sizeLista;
    // Si esta vacía, inicia en D
    if (pIteracion != 0){miListaItera.append('D');}
    // Gerenerar la lista de direcciones del fractal
    for(int i = 1; i < pIteracion; i++)
    {
        sizeLista = miListaItera.getSize();
        for(int j = 0; j < sizeLista; j++)
        {
            miListaItera.insert(paso);
            if   (paso == 'D')   {paso = 'I';}
            else {paso  = 'D';}
            miListaItera.next();
            miListaItera.next();
        }
        miListaItera.append(paso);
        paso = 'D';
        miListaItera.goToStart();
    }
    return miListaItera;
};
