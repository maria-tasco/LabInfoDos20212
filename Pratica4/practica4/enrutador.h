#ifndef ENRUTADOR_H
#define ENRUTADOR_H

#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

class enrutador
{
public:
    enrutador();

    void agregar_tabla_enrutamiento(string key, int date);
    void agregar_enrutador();
    bool agregar_enrutador(string nombre_archivo, int tam);
    void modificar_nodo(string nodo_actual, string nodo_nuevo);
    void modificar_costo(string nodo, int costo_nuevo);
    void imprimir_enrutador();

private:
    map <string,int> enr;
    map <string,int> ::iterator itr;
};

#endif // ENRUTADOR_H
