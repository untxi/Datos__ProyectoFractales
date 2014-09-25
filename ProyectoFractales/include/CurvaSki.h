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

    miListaItera.goToPos(0);
    char elemento = miListaItera.getElement();

    if (elemento == 'D')
    {
        miListaItera.goToPos(0);
        miListaItera.insert('I');
        miListaItera.insert('I');
    }

    if (elemento == 'I')
    {
        miListaItera.goToPos(0);
        miListaItera.insert('D');
        miListaItera.insert('D');
    }

    int pos = 3;
    miListaItera.goToPos(pos);
    for (int i = 1; i < pIteracion; i++)
    {
        elemento = miListaItera.getElement();
        if (elemento == 'D')
        {
            miListaItera.goToPos(pos+1);
            miListaItera.insert('I');
            miListaItera.insert('I');
        }

        if (elemento == 'I')
        {
            miListaItera.goToPos(pos+1);
            miListaItera.insert('D');
            miListaItera.insert('D');
        }
        pos = pos + 3;
        miListaItera.goToPos(pos);
    }


    int sL = miListaItera.getSize();
    for (int i = 0; i < sL; i++)
    {
        miListaItera.goToPos(i);
        char elemL = miListaItera.getElement();
        std::cout << "-" << elemL ;

    }
    return miListaItera;
};
