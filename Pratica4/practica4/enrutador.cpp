#include "enrutador.h"

enrutador::enrutador()
{
    // por cada nodo yo tengo que usar el constructor
    // clave sea el nodo, y el dato su tabla de enrutamiento
    // Tabla de enrutamiento tendría en la posición del arreglo el costo.
    // El metodo tabla de enrutamiento leería el archivo y retornaría la tabla de enrutamiento de cada nodo
    // EL método leería el archivo se encuentra con el primer nodo toma ese como clave y empieza a moverse -1 al salto de linea para tomar el valor del costo
    // Pasa al salto de linea si no esta el nodo pasa a la siguente linea y cada vez que se encuentre con el nodo tendrá que posicionarse -1 al salto de linea para tomar el valor del costo

}

void enrutador::agregar_tabla_enrutamiento(string key, int date)
{
    enr[key] = date;

}

void enrutador::agregar_enrutador(unsigned short modo)
{
   int costo;
   string nodo;
   /*!
    * Si modo es igual a 1 lo haremos de forma manual.
        * Creamos variable band para que el usuario tenga la libertad de ingresar cuantos enlaces quiera
        * En cada iteración se le va a preguntar al usuario si quiere seguir agregando enlaces, si no, oprima 0 y band=true;
    * Si modo es igual a 2 lo haremos con el archivo y será para armar la red
    */
    if(modo == 1){
        bool band =false;
        unsigned short int op=0;
        while(band==false){
            cout << "ingrese el nodo de enlace: " << endl; cin >> nodo;
            cout << "Ingrese el costo del enlace: " <<endl; cin >> costo;
            agregar_tabla_enrutamiento(nodo,costo);
            cout << "Si quiere seguir ingresando enlaces al nodo ingrese 0, sino 1" << endl; cin >> op;
            if (op==1) band=true;
            else band= false;
        }
    }
    else if (modo == 2){
           string name_file;
    }
    else{
        cout<<"opción no valida"<<endl;
    }
 // Como solo puedo retornar un valor, retorno el nodo al cuál se le va a hacer la tabla de enturamiento
 // y con un apuntador a char pasado por referencia voy agrando el costo que tiene ese nodo con cada enrutador.
 // puedo identificar el enrutador al que se esta haciendo referencia por su posición con valor 0

}

void enrutador::modificar_nodo(string nodo_actual, string nodo_nuevo)
{
    int costo=0;
    if(enr.find(nodo_actual)!=enr.end()){
        //Si el nodo existe, lo modifico.
        itr = enr.find(nodo_actual);
        if(itr != enr.end()){
            costo = itr ->second;
            enr.erase(itr);
            agregar_tabla_enrutamiento(nodo_nuevo,costo);
        }
    }
    else cout << "El nodo no existe para ser modificado"<< endl;
}

void enrutador::modificar_costo(string nodo, int costo_nuevo)
{
    if(enr.find(nodo)!=enr.end()){
        enr[nodo]=costo_nuevo;
    }
    else cout<<"el nodo no existe para ser modificado" << endl;
}

void enrutador::imprimir_enrutador()
{
    cout<< "TABLA DE ENRUTAMIENTO: "<< endl;
    for(itr = enr.begin(); itr != enr.end(); itr++){
        cout << itr ->first << '\t' << itr->second <<endl;
    }
}
