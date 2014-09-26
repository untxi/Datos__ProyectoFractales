/** ~~~ Dibuja Dragon ~~~ */
// Recursos
#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
using namespace std;
void DibujaSki(LinkedList<char> ListaIn)
{
    // Atributos Gráficos
    initwindow(1400, 700);
    // Título de la ventana
    const char*title = "Fractal Punta de Flecha de Sierpinski";
    setwindowtitle(title);
    // Info en pantalla
    outtextxy(20,600,"= Sierpinski =");
    // Atributos: Parametros
    LinkedList<char> ListaCurvas = miCurva;
    float largeLine = 1;
    int tam = ListaCurvas.getSize();
    int inicioX = 500;
    int inicioY = 200;
    int finalX  = 500 + largeLine;
    int finalY  = 200;
    // Procede a dibujar

};
