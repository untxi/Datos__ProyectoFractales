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
    //int size = miListaItera.getSize();

    miListaItera.append('D');
    miListaItera.append('D');
    miListaItera.goToStart();
    // Gerenerar la lista de direcciones del fractal
    for (int seg = 0; seg < pIteracion; seg++)
    {
        char primero = miListaItera.getElement();
        //miListaItera.next();
        //char segundo = miListaItera.getElement();
        if(primero == 'D')// && (segundo == 'D'))
        {
            miListaItera.goToStart();
            miListaItera.insert('I');
            miListaItera.insert('I');

            miListaItera.next();
            miListaItera.next();

            miListaItera.insert('D');
            miListaItera.insert('D');
        }
        if(primero == 'I')// && (segundo == 'D'))
        {
            miListaItera.goToStart();
            miListaItera.insert('D');
            miListaItera.insert('D');

            miListaItera.next();
            miListaItera.next();

            miListaItera.insert('I');
            miListaItera.insert('I');
        }
        miListaItera.next();
        miListaItera.next();
        miListaItera.next();
        char linea = miListaItera.getElement();
        if (linea == 'I')// && (segundo == 'I'))
        {
            miListaItera.insert('D');
            miListaItera.insert('D');
            miListaItera.next();
            miListaItera.next();

            miListaItera.insert('I');
            miListaItera.insert('I');
        }
        if (linea == 'D')// && (segundo == 'I'))
        {
            miListaItera.insert('I');
            miListaItera.insert('I');
            miListaItera.next();
            miListaItera.next();

            miListaItera.insert('D');
            miListaItera.insert('D');
        }
        miListaItera.goToStart();
    }

    return miListaItera;

};


//#endif // CURVASKI_H
