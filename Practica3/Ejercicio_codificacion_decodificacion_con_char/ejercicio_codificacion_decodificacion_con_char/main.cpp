#include <iostream>
#include "metodo_1.h"

using namespace std;

int main()
{
    unsigned short int metodo = 0, semilla = 0;
    char archivo_text[]="mensaje.txt", archivo_bin[]="mensaje.dat",datos[]="hola mundo que hace";

    cout<< "Ingrese 1 para el primer métod de codificacion o 2 para el segundo: " << endl;
    cin >> metodo;
    cout << "Gracias, ahora ingrese la semilla de codificacion: " << endl;
    cin >> semilla;

    switch (metodo) {
        case 1:{
            codificar_M1(archivo_text,archivo_bin,semilla);

            break;
        }
        case 2: {
            cout<< "2";
            break;
        }
        default:{
            cout<< "Error: Ingrese una opcion valida para el metodo" << endl;
            break;
        }
    }

    return 0;
}
