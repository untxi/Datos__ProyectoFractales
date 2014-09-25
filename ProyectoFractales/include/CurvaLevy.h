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
    char grado45 = 'DAIIAD'; // Indica 45 grados de vuelta;
    char paso = 'A';
    int sizeLista;
    // Si esta vacía, inicia en D
    if (pIteracion != 0){miListaItera.append('A');}
    // Gerenerar la lista de direcciones del fractal
    for(int i=1; i < pIteracion; i++)
    {
        sizeLista = miListaItera.getSize();
        for(int j = 0; j < sizeLista; j++)
        {
            miListaItera.insert(paso);
            if   (paso == 'A')   {paso = 'DAIIAD';}
            else {paso  = 'A';}
            miListaItera.next();
            miListaItera.next();
        }
        miListaItera.append(paso);
        paso = 'A';
        miListaItera.goToStart();
    }
    return miListaItera;
}
Marco Soto Morera
23/09/2014 17:48
Marco Soto Morera
chispis tya ahora si!!!
en este lado se me habia olvidado los 45grads
donde es A y cada vez que es A se le pode los 45 grados!!!
en cuando a dibuajr estoy detras del palo
Marco Soto Morera
23/09/2014 18:04
Marco Soto Morera
hago push
???
miércoles
Marco Soto Morera
24/09/2014 16:57
Marco Soto Morera
descargar
EstructuraArbol.h
descargar
Arboles.h
Hoy
Samantha Arburola León
10:29
Samantha Arburola León
int sL = miListaItera.getSize();
    for (int i = 0; i < sL; i++)
    {
        miListaItera.goToPos(i);
        char elemL = miListaItera.getElement();
        std::cout << "-" << elemL ;
    }
Marco Soto Morera
11:07
Marco Soto Morera
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
    int posActual;
    //int sizeLista;
    // Si esta vacía, inicia en D
        for (int i = 0; i <= pIteracion; i++){
            int sizeMiLista = miListaItera.getSize();
            miListaItera.goToStart();
            for (int pos = 0; pos < sizeMiLista; pos++){
                miListaItera.goToPos(posActual);
                char elemento = miListaItera.getElement();
                //std::cout << elemento;
                if (elemento == 'A'){
                    int posActual = miListaItera.getPos();
                    miListaItera.insert('D');
                    miListaItera.insert('A');
                    miListaItera.insert('I');
                    miListaItera.insert('I');
                    miListaItera.insert('A');
                    miListaItera.insert('D');
                    posActual += 6;
                    miListaItera.goToPos(posActual);
                    miListaItera.remove();
                }
            }
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
