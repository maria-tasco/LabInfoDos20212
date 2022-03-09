#include "enrutador.h"

int main()
{
    enrutador prueba;
    /*!
     * El metodo agragar_enrutador recibe como parametro un entero el cuál si es 1 será para agregar
     * el enrutador manualmente (los nodos de enlace y sus costos) y la opción 2 para agregar un enrutador
     * por medio de la lectura de un archivo: lista de adyacencia.
    */
    prueba.agregar_enrutador(1);
    prueba.imprimir_enrutador();
    prueba.agregar_enrutador(1);
    prueba.imprimir_enrutador();
    prueba.modificar_nodo("A","H");
    prueba.imprimir_enrutador();
    prueba.modificar_costo("B",-1);
    prueba.imprimir_enrutador();

    unsigned short int op = 0;
    cout <<"Menu para la creación de enrutadores y redes: " << endl;
    cout <<"1. Agregar enrutador indivudual " <<endl;
    cout <<"2. Modificar nodo de un enrutador" << endl;
    cout <<"3. Modificar costo del nodo de un enrutador "<<endl;
    cout <<"4. Imprimir enrutador "<<endl;

    switch (op) {
        case 1: {
            unsigned short modo=0;
            cout << "ingrese el modo (1 - 2) en el que quiere crear el enrutador: Si es de manera manual (modo 1 para  creación enrutadores individuales) en la cual se le va a pedir el nombre de los enlaces y el costo, seguido de la opcion para continuar 1 o 0. O por medio de un archivo de lista adyacente (Modo 2 para la creacion de la red)" << endl;
            cin >> modo;
            prueba.agregar_enrutador(modo);
            break;
            }
        case 2:{
            string nodo_actual, nodo_nuevo;
            cout<<"Ingrese el nodo que quiere modificar: " << endl; cin>>nodo_actual;
            cout<<"Ingrese el nombre del nodo nuevo: " << endl; cin>>nodo_nuevo;
            prueba.modificar_nodo(nodo_actual,nodo_nuevo);
            break;
            }
        case 3:{
            string nodo_actual;
            int costo_nuevo;
            cout<<"Ingrese el nodo al que quiere modificar el costo: " << endl; cin>>nodo_actual;
            cout<<"Ingrese el nuevo costo: " << endl; cin>>costo_nuevo;
            prueba.modificar_costo(nodo_actual,costo_nuevo);
            break;
            }
        case 4:
            prueba.imprimir_enrutador();
            break;

    }



    return 0;
}
