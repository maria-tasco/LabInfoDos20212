#ifndef RED_H
#define RED_H

#include "enrutador.h"

class red
{
public:
    red();
    void crear_red(string nombre_archivo); // a partir del archivo
    int tamanio_de_la_red(string nombre_archivo);
    //void agregar_enrutador_red(); // agregar enrutadores
    void modificar_topologia_red(); // modificar nodos/costos de enrutadores existentes
    void remover_enrutador_red();
private:
    map<string,enrutador> mi_red;
    map<string,enrutador> ::iterator itrd;
};

#endif // RED_H
