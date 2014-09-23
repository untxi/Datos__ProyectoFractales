/** ~~~ Dibuja Fractal ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;

void DibujaFractal(LinkedList<char> miCurva, string fractal){
    // Atributos Gráficos
    initwindow(1400, 700);
    //int getvisualpage PROTO(( ));
    //int getactivepage PROTO(( ));
    // (actual, actual);//,"Dragon");

    const char*title = "Fractal Curva Dragón";
    setwindowtitle(title);//const char*title);
    //initwindow( max_x , max_y , "Snake" );//inicia a janela
    moveto(0,0);
    outtextxy(20,600,"= Curva Dragon =");

    // Atributos: Parametros
    LinkedList<char> ListaCurvas = miCurva;
    string tipoFractal = fractal;
    int largeLine = 1;
    int tam = ListaCurvas.getSize();
    int inicioX = 1000;
    int inicioY = 200;
    int finalX  = 1000 + largeLine;
    int finalY  = 200;

    /** Puntos Cardinales
        1 = norte
        2 = este
        3 = sur
        4 = oeste
    */
    int puntCard = 2;

    // Procede a Dibujar
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
        setcolor(COLOR(255,100,0));
        line(inicioX,inicioY,finalX,finalY);
        ListaCurvas.next();
    }
    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
};



