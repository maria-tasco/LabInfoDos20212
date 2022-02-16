#include <iostream>
#include "archivo_char.h"

using namespace std;

int main()
{
//    unsigned short int metodo = 0, semilla = 0;
//    fstream archivo;
//    fstream ensayo;
//    char nombre[]="ensayo2.dat", datos[]="h#\nalo=\0rakaraka";

//    cout<< "Ingrese 1 para el primer métod de codificacion o 2 para el segundo: " << endl;
//    cin >> metodo;
//    cout << "Gracias, ahora ingrese la semilla de codificacion: " << endl;
//    cin >> semilla;

//    switch (metodo) {
//        case 1:{
//            escribir(nombre,datos,16,false);

//            break;
//        }
//        case 2: {
//            cout<< "2";
//            break;
//        }
//        default:{
//            cout<< "Error: Ingrese una opcion valida para el metodo" << endl;
//            break;
//        }
//    }


//    fstream text("ensayo2.txt", fstream::out); //crear un archivo o abrirlo en modo escritura
//    text << "hola\na\ntodos";
//    text.close();
//    text.put('H');
//    text.close();
    //lectura completa del archivo


    char *data;
    unsigned long long int tam;
    fstream text("mensaje.text", fstream::in | fstream::ate | fstream::binary);
    tam = text.tellg();
    text.seekg(0);
    if(text.is_open()){
        data = new char [tam+1];
        for(unsigned long long int i=0; i<tam; i++)
            data[i]=text.get();
        data[tam]='\0';
    }
    else
        cout << "El archivo no pudo ser abierto" <<endl;
    cout << data << endl;
    return 0;
}
