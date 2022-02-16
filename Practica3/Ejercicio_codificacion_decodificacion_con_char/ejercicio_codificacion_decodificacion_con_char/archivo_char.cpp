#include "archivo_char.h"

void crear(char *nombre)
{
    fstream text(nombre, fstream::out); //se crear el archivo y se abre en modo escritura
    text.close();
}

void escribir(char *nombre, char *datos, unsigned long long tam, bool tipo)
{
    //datos tengo guarda la información normal para leer
    fstream text;
    if (tipo == true){ //si tipo es verdadero voy a escribir el archivo en modo convencional
        text.open(nombre, fstream::out);
        text << datos;
    }
    else { //voy a escribir el archivo en modo binario
        text.open(nombre, fstream::out | fstream::binary);
        text.write(datos,tam);
    }
    text.close();
}
unsigned long long tam(char *nombre) {
    unsigned long long tam = 0;
    fstream text(nombre, fstream::in| fstream::ate | fstream::binary);
    if (text.is_open())
        tam = text.tellg();
    text.close();
    return tam;
}


bool leer(char *nombre, unsigned long long tam, char *data)
{
    fstream text(nombre, fstream::in | fstream::binary);
    bool confirma = text.is_open();
    if (confirma){

    }
}

