/** ~~~ Dibuja Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <math.h>
#include <Node.h>
#include <LinkedList.h>
#include <Lapiz.h>
using namespace std;

void DibujaSki(LinkedList<char> miCurva, int iteracion)
{
    // Atributos Gráficos
    initwindow(1400, 700);
    const char*title = "Fractal Punta Flecha Sierpinski";  // Título de la ventana
    setwindowtitle(title);
    outtextxy(20,600,"= Sierpinski ="); // Info en pantalla

    Lapiz lapiz; // Creala instancia que permite dibujar
    // Atributos: Parametros
    LinkedList<char> ListaCurvas = miCurva;

    // Procedimiento de Dibujo
    if ((iteracion%2) != 0)
    {
        for (int elemt = 0; elemt < ListaCurvas.getSize(); elemt++)
            {
                ListaCurvas.goToPos(elemt);
                if (ListaCurvas.getElement() == 'D'){lapiz.girar(60);}
                else{lapiz.girar(-60);}
                lapiz.avanzar(3);
            }

    }else{
        for (int elemt = 0; elemt < ListaCurvas.getSize(); elemt++)
            {
                ListaCurvas.goToPos(elemt);
                if (ListaCurvas.getElement() == 'D'){lapiz.girar(-60);}
                else{lapiz.girar(60);}
                lapiz.avanzar(3);
            }

    }
    /**for (int elemt = 0; elemt < ListaCurvas.getSize(); elemt++)
    {
        ListaCurvas.goToPos(elemt);
        if (ListaCurvas.getElement() == 'D'){lapiz.girar(-60);}
        else{lapiz.girar(60);}
        lapiz.avanzar(3);
    }*/

    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
};
