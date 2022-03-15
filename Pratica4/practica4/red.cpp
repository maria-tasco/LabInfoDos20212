#include "red.h"

red::red()
{

}

void red::crear_red(string nombre_arch)
{

    enrutador j;
    int tamanio= tamanio_de_la_red(nombre_arch);
    j.agregar_enrutador(nombre_arch,tamanio);
    mi_red.insert(pair<string,enrutador>(nombre_arch,j));
}

int red::tamanio_de_la_red(string nombre_archivo)
{
    unsigned long long tam = 0;
    fstream text(nombre_archivo, fstream::in| fstream::ate | fstream::binary);
    if (text.is_open())
        tam = text.tellg();
    text.close();
    return tam;
}
