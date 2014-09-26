
#include <math.h>
#include <iostream>
#include <winbgim.h>

class Lapiz
{
private:
    int x;
    int y;
    double rumbo;

public:
    Lapiz(){
        x = 200;
        y = 450;
        rumbo = 0;
    }
void girar(int c){
        rumbo = fmod ((rumbo+c),360);
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
