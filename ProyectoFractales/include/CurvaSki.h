//#ifndef CURVASKI_H
//#define CURVASKI_H

#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;

LinkedList<char> CurvaSki(int pIteracion)
{
    // Atributos
    LinkedList <char> miListaItera;
    // Si esta vacía, inicia en D
    if (pIteracion != 0)
    {
        miListaItera.append('D');
        miListaItera.append('D');
    }
    for (int i = 0; i < pIteracion; i++)
    {
        int sizeMiLista = miListaItera.getSize();
        miListaItera.goToStart();
        for (int pos = 0; pos < sizeMiLista; pos++)
        {
            miListaItera.goToPos(pos);
            char elemento = miListaItera.getElement(); // LinkedList, linea 73 imprime el valor en el getElement
            if (elemento == 'I')
            {
                int posActual = miListaItera.getPos();
                miListaItera.insert('D');
                miListaItera.insert('D');
                miListaItera.goToPos(posActual+3);
            }else{
                int posActual = miListaItera.getPos();
                miListaItera.insert('I');
                miListaItera.insert('I');
                miListaItera.goToPos(posActual+3);
            }
        }
    }
    return miListaItera;

};


//#endif // CURVASKI_H
