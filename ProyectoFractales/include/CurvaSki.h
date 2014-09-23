#ifndef CURVASKI_H
#define CURVASKI_H


/**class CurvaSki
{
    public:
        CurvaSki();
        virtual ~CurvaSki();
    protected:
    private:
};*/

/** ~~~ Curva Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;

LinkedList<char> CurvaSki(int pIteracion)
{
    // Atributos
    LinkedList <char> miListaItera;
    //char paso = 'D'; // Indica la direccion del paso para el dibujo
    int sizeLista;

    // Si esta vacía, inicia en D
    if (pIteracion == 0)
    {
        miListaItera.append('D');
        miListaItera.append('D');
    }

    // Gerenerar la lista de direcciones del fractal
    for(int i=1; i < pIteracion; i++)
    {
        sizeLista = miListaItera.getSize();
        for(int j = 0; j < sizeLista; j++)
        {
            //miListaItera.insert(paso);
            if   (miListaItera.getElement() == 'D')
                {
                    miListaItera.insert('I');
                    miListaItera.insert('I');
                }
            if (miListaItera.getElement() == 'I')
                {
                    miListaItera.insert('D');
                    miListaItera.insert('D');
                }
            miListaItera.next();
            miListaItera.next();
        }
        //miListaItera.append(paso);
        //paso = 'D';
        miListaItera.goToStart();
    }

    return miListaItera;

};


#endif // CURVASKI_H
