/** ~~~ Dibuja Levy ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
#include <Tortuga.h>
using namespace std;

void DibujaLevy(LinkedList<char> miCurva){
    // Atributos Gráficos
    initwindow(1400, 700);
    // Título de la ventana
    const char*title = "Fractal Curva Levy C";
    setwindowtitle(title);
    // Info en pantalla
    outtextxy(20,600,"= Curva Levy C =");
    // Atributos: Parametros
    LinkedList<char> ListaCurvas = miCurva;
    float largeLine = 1;
    int tam = ListaCurvas.getSize();
    int inicioX = 500;
    int inicioY = 100;
    int finalX  = 500 + largeLine;
    int finalY  = 100;
    // Instancia de la tortuga con la que dibujaremos
    Tortuga dibuja;

    // Procede a Dibujar
    setcolor(COLOR(102,255,255));
    line(inicioX,inicioY,finalX,finalY);

    for(int i=0; i < tam; i++)
    {
        inicioX = finalX;
        inicioY = finalY;
        if (ListaCurvas.getElement() == 'D'){
            dibuja.girar(45);
        }
        if (ListaCurvas.getElement() == 'I'){ //45 grados hacia la izquierda
            dibuja.girar(-45);
        }
        if (ListaCurvas.getElement() == 'A'){
            dibuja.avanzar(2);
        }
        setcolor(COLOR(102,255,255));
        line(inicioX,inicioY,finalX,finalY);
        ListaCurvas.next();
    }
    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
};
