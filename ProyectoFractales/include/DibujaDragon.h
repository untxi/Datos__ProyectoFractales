/** ~~~ Dibuja Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;

void DibujaDragon(LinkedList<char> miCurva){
    // Atributos Gráficos
    initwindow(1400, 700);
    // Título de la ventana
    const char*title = "Fractal Curva Dragón";
    setwindowtitle(title);
    // Info en pantalla
    outtextxy(20,600,"= Curva Dragon =");
    //moveto(20,600);
    // Atributos: Parametros
    LinkedList<char> ListaCurvas = miCurva;
    float largeLine = 1;
    int tam = ListaCurvas.getSize();
    int inicioX = 1000;
    int inicioY = 200;
    int finalX  = 1000 + largeLine;
    int finalY  = 200;

    /* Puntos Cardinales*/
    // Este 2
    int puntCard = 2;

    // Procede a Dibujar
    setcolor(COLOR(102,255,255));
    line(inicioX,inicioY,finalX,finalY);
    for(int i=0; i < tam; i++)
    {
        inicioX = finalX;
        inicioY = finalY;
        if (ListaCurvas.getElement() == 'D'){
            switch (puntCard){
                case 1:
                    puntCard = 2;
                    finalX = finalX + largeLine;
                break;

                case 2:
                    puntCard = 3;
                    finalY = finalY + largeLine;
                break;

                case 3:
                    puntCard = 4;
                    finalX = finalX - largeLine;
                break;

                case 4:
                    puntCard = 1;
                    finalY = finalY - largeLine;
                break;
            }
        }
        else{
            switch (puntCard){
                case 1:
                    puntCard = 4;
                    finalX = finalX - largeLine;
                break;

                case 2:
                    puntCard = 1;
                    finalY = finalY - largeLine;
                break;

                case 3:
                    puntCard = 2;
                    finalX = finalX + largeLine;
                break;

                case 4:
                    puntCard = 3;
                    finalY = finalY + largeLine;
                break;
            }
        }
        setcolor(COLOR(102,255,255));
        line(inicioX,inicioY,finalX,finalY);
        ListaCurvas.next();
    }
    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
};

