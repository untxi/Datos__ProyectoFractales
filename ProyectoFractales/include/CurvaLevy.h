/** ~~~ Curva Levy C ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>

using namespace std;

LinkedList<char> CurvaLevy(int pIteracion){
    // Atributos
    LinkedList <char> miListaItera;
    //int sizeLista;
    // Si esta vacía, inicia en D
    switch(pIteracion)
    {
        case 0:
            miListaItera.append('0');
            miListaItera.append(' ');
            miListaItera.append('E');
            miListaItera.append('R');
            miListaItera.append('R');
            miListaItera.append('O');
            miListaItera.append('R');
            break;
        case 1:
            miListaItera.append('A');
            break;
        case 2:
            miListaItera.append('D');
            miListaItera.append('A');
            miListaItera.append('I');
            miListaItera.append('I');
            miListaItera.append('A');
            miListaItera.append('D');
            break;
        default:
            miListaItera.append('D');
            miListaItera.append('A');
            miListaItera.append('I');
            miListaItera.append('I');
            miListaItera.append('A');
            miListaItera.append('D');
            for (int i = 3; i <= pIteracion; i++)
            {
                int sizeMiLista = miListaItera.getSize();
                miListaItera.goToStart();
                for (int pos = 0; pos < sizeMiLista; pos++)
                {
                    miListaItera.goToPos(pos);
                    char elemento = miListaItera.getElement();
                    if (elemento == 'A')
                    {
                        miListaItera.remove();
                        miListaItera.insert('D');
                        miListaItera.insert('A');
                        miListaItera.insert('I');
                        miListaItera.insert('I');
                        miListaItera.insert('A');
                        miListaItera.insert('D');
                    }
                }
            }

    } // End Switch
    return miListaItera;
};
