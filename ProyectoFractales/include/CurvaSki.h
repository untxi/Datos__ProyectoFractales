/** ~~~ Curva Ski ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>

using namespace std;

// Función: Genera Lista de direcciones para dibujar
LinkedList<char> CurvaSki(int pIteracion){
	// Atributos
    LinkedList <char> miListaItera;
    char paso = 'D'; // Indica la direccion del paso para el dibujo
    int sizeLista;
	// Si esta vacía, inicia en DD
    if (pIteracion != 0)
    {
		miListaItera.append('D');
		miListaItera.append('D');
    }
	// Gerenerar la lista de direcciones del fractal
    for(int i = 0; i < pIteracion; i++)
    {
        // Inicio
        miListaItera.goToPos(0);
        char primero = miListaItera.getElement();
        if (primero == 'D')
        {
            miListaItera.insert('I');
            miListaItera.insert('I');
            paso = 'D';
        }else{
            miListaItera.insert('D');
            miListaItera.insert('D');
            paso = 'I';
        }
        sizeLista = miListaItera.getSize();
        miListaItera.goToPos(3);
        for(int j = 3; j < sizeLista; j++)
        {
            miListaItera.insert(paso);
			miListaItera.insert(paso);

            miListaItera.next();
            miListaItera.next();
			miListaItera.next();

			if   (paso == 'D')   {paso = 'I';}
            else {paso  = 'D';}
        }
        miListaItera.append(paso);
		miListaItera.append(paso);
        paso = 'D';
        miListaItera.goToStart();
    }
    return miListaItera;
};
