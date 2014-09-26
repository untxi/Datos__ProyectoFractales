/** ~~~ Dibuja Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <math.h>
#include <Node.h>
#include <LinkedList.h>
#include <Lapiz.h>
using namespace std;

void DibujaSki(LinkedList<char> miCurva)
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
    for (int elemt = 0; elemt < ListaCurvas.getSize(); elemt++)
    {
        ListaCurvas.goToPos(elemt);

        if (ListaCurvas.getElement() == 'D')
        {
            lapiz.girar(-60);
            lapiz.avanzar(2);
        }else{
            lapiz.girar(60);
            lapiz.avanzar(2);
        }
    }
    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
};
