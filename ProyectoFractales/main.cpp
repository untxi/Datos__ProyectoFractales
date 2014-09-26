// Librerías
#include <iostream>
#include <cstdlib>
// EStructuras
#include <winbgim.h>
#include <Node.h>
#include <LinkedList.h>
// Funciones de Dibujo
#include <CurvaDragon.h>
#include <DibujaDragon.h>
#include <CurvaSki.h>
#include <DibujaSki.h>
#include <CurvaLevy.h>
#include <DibujaLevy.h>
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
    cout << "\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout <<  "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
    cout <<  "|**~**~**~**~**  Curva  Dragon  **~**~**~**~**|" << endl;
    cout <<  "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    LinkedList<char> miDragon = CurvaDragon(cantIter);
    DibujaDragon(miDragon);
}

// Punta Flecha Sierpinski
void hacerFlechaS()
{
    // Presentación
    cout << "\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout <<   "|**~**~**~**~**~** Fractales **~**~**~**~**~**|"   << endl;
    cout <<   "|**~**~** Punta de Flecha Sierpinski  **~**~**|" << endl;
    cout <<   "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    LinkedList<char> miFlecha = CurvaSki(cantIter);
    DibujaSki(miFlecha, cantIter);
}

// Curva Levy C
void hacerLevy()
{
    // Presentación
    cout << "\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    cout <<   "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
    cout <<   "|**~**~**~**   Curva  de  Levy  C  **~**~**~**|" << endl;
    cout <<   "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl << endl;
    // Solicitud de Cantidad de Iteraciones
    int cantIter;
    cout << "Cantidad de Iteraciones deseadas: " ;
    cin  >> cantIter;
    LinkedList<char> miLevy = CurvaLevy(cantIter);
    DibujaLevy(miLevy);
}

//Pausa para el menu
void pausa()
{
    cout << "P\ERROR\n     Opcion Incorrecta\nPresiona una tecla para volver al menu.";
    getwchar();
    getwchar();
}

// Menú del Programa
int main()
{
    bool bandera = false;
    char tecla;

    do{
        cout << "\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
        cout <<   "|**~**~**~**~**~** Fractales **~**~**~**~**~**|" << endl;
        cout <<   "|**~**~**~**~**~**   Curvas  **~**~**~**~**~**|" << endl;
        cout <<   "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n" << endl;
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
				hacerDragon();
				break;

			case '2':
                hacerFlechaS();
				break;

			case '3':
				hacerLevy();
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
