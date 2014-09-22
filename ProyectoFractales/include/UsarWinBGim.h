/**


3.  A continuación se muestra el código de un sencillo programa que utiliza las funciones básicas de esta librería gráfica para dibujar algunas figuras geométricas.  Ejecútelo y entiéndalo.
#include <winbgim.h>
int main()
{
    initwindow(400,300); // Abre una ventana gráfica de  400x300 pixeles
    moveto(0,0); // Pone el cursor en 0,0
    line(50,50, 100, 150);
    rectangle(100,100,200,200);
    circle(100,100,30);
    outtextxy(150,200,"Estas son figuras geometricas");
    while(!kbhit()); // Espera a que el usuario presione una tecla
    closegraph(); // Cierra la ventana gráfica
    return 0;
}

4. A continuacion se muestra el código fuente del programa de gráficos utilizando la librería Winbgim.  Ejecútelo y entiéndalo.

//archivo figura.h
#ifndef FIGURA_H
#define FIGURA_H
class Figura{
    protected:
        int x1;
        int y1;
    public:
        Figura(int,int);
        virtual void dibujar()=0;
};

class Linea: public Figura{
    private:
        int x2,y2;
    public:
        Linea(int,int,int,int);
        void dibujar();
};


class Rectangulo: public Figura{
    private:
        int x3,y3;
    public:
        Rectangulo(int,int,int,int);
        void dibujar();
};


class Circulo: public Figura{
    private:
        int r;
    public:
        Circulo(int,int,int);
        void dibujar();
};
#endif


//archivo figura.cpp
#include "figura.h"
#include <winbgim.h>
Figura::Figura(int x,int y)
{
    x1=x;
    y1=y;
}



Linea::Linea(int x,int y,int a,int b):Figura(x,y)
{
    x2=a;
    y2=b;
}

void Linea::dibujar()
{
    line(x1,y1,x2,y2);//dibuja una linea
}

Rectangulo::Rectangulo(int x,int y,int c,int d):Figura(x,y)
{
    x3=c;
    y3=d;
}

void Rectangulo::dibujar()
{
    rectangle(x1,y1,x3,y3);;//dibuja una rectangulo
}

Circulo::Circulo(int x,int y,int R):Figura(x,y)
{
    r=R;
}

void Circulo::dibujar()
{
    circle(x1,y1,r);;//dibuja una circulo
}

//Archivo main.cpp
#include "figura.h"
#include <winbgim.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    initwindow(800,600);
    Figura *figuras[3];
    figuras[0] = new Linea(0,0,100,100);
    figuras[1] = new Rectangulo(100,100,600,450);
    figuras[2] = new Circulo(300,225,120);
    for(int i=0;i<3;i++)
    figuras[i]->dibujar();
    getch();//da un tiempo de espera
    closegraph( );
    return 0;
}
 */
