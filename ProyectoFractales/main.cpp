#include <iostream>
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
#include <cstdlib>
#include "CurvaDragon.h"
#include "DibujaFractal.h"
#include "CurvaSki.h"
#include "CurvaLevy.h"
// Using
using namespace std;
using std::cout;
using std::cin;
using std::endl;
/**
    Funciones para hacer los fractales
*/
// Curva Dragon
void hacerDragon()
{
    // Presentación
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
    cout << "|**~**~**~**~**  Curva  Dragon  **~**~**~**~**|" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    LinkedList<char> miDragon = CurvaDragon(cantIter);
    DibujaFractal(miDragon, "Dragon");
    //cout << "Se dibujo un Fractal Curva de Dragon con " << cantIter << " iteraciones"  << endl;
}

// Punta Flecha Sierpinski
void hacerFlechaS()
{
    // Presentación
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "|**~**~**~**~**~** Fractales **~**~**~**~**~**|"   << endl;
    cout << "|**~**~** Punta de Flecha Sierpinski  **~**~**|" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    LinkedList<char> miTriangulo = CurvaSki(cantIter);
    DibujaFractal(miTriangulo, "Triangulo");
    //cout << miTriangulo << endl;
    //cout << "Se dibujo un Fractal Punta de Flecha Sierpinski con " << cantIter << " iteraciones."  << endl;

}

// Curva Levy C
void hacerLevy()
{
    // Presentación
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout << "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
    cout << "|**~**~**~**   Curva  de  Levy  C  **~**~**~**|" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    cout << "Se dibujo un Fractal Curva de Levy C con " << cantIter << " iteraciones." << endl;

}

//Pausa para el menu
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}

// Menú del Programa
int main()
{
    bool bandera = false;
    char tecla;

    do{
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
        cout << "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
        cout << "|**~**~**~**~**~**   Curvas  **~**~**~**~**~**|" << endl;
        cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl;
        cout << "Escoja el Fractal que desea visualizar\n" <<endl;
        cout << "   1 <~~ Curva del Dragon" << endl;
        cout << "   2 <~~ Punta de Flecha Sierpinski" << endl;
        cout << "   3 <~~ Curva de Levy C\n" << endl;
        cout << "   4 <~~ Salir\n" << endl;
        cout << "Elija una opcion: ";
        cin >> tecla;

		switch(tecla)
		{
			case '1':
				//system("cls");
				hacerDragon();
				//pausa();
				break;

			case '2':
				//system("cls");
                hacerFlechaS();
				//pausa();
				break;

			case '3':
				system("cls");
				hacerLevy();
				pausa();
				break;

            case '4':
				bandera=true;
				break;

            default:
				system("cls");
				pausa();
				break;
		}
    }    while(bandera != true);

    return 0;
};
