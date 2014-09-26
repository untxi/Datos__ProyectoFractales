#include <math.h>
#include <iostream>
#include <winbgim.h>

class Tortuga
{
private:
    int x;
    int y;
    double rumbo;

public:
    Tortuga(){
        x = 500;
        y = 500;
        rumbo = 0;
    }
    void girar(int c){
        rumbo+=c;
    }
    void avanzar(int c){
        int x2 = cos((rumbo* M_PI) / 180) * c;
        int y2 = sin((rumbo* M_PI) / 180) * c;
        setcolor(COLOR(102,255,255));
        line (x,y,x+x2,y+y2);
        x = x + x2;
        y = y + y2;
    }
};
