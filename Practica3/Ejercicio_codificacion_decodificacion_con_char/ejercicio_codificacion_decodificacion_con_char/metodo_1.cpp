#include "metodo_1.h"


bool codificar_M1(char *archivo_to_codificar, char *archivo_codificado, int semilla)
{
    char *datatxt, *databin;
    unsigned long long tamArchivo = 0;
    tamArchivo = tam(archivo_to_codificar);
    try {
        datatxt = new char[tamArchivo + 1]; //le doy memoria dinamica y el dato completo leido se encuentra dentro de data
        databin = new char[8*tamArchivo+1];
        if(leer(archivo_to_codificar,tamArchivo,datatxt)){
            cout << datatxt <<endl;
            text_to_bin(datatxt,archivo_codificado,tamArchivo);
            leer(archivo_codificado,tamArchivo,databin);
            cout << databin<<endl;
            metodo_1(archivo_codificado,semilla,tamArchivo);
         }
        delete [] datatxt;
        delete [] databin;
    }  catch (bad_alloc) {
        cout << "falla por falta de memoria" << endl;
    }
    return true;
}

void text_to_bin(char *texto, char *bin, unsigned long long tamanio)
{
    fstream text;
    text.open(bin, fstream::out);
    for (unsigned long long i=0; i<tamanio; i++){
        for (unsigned long long j=0; j<=7; j++) text << ((texto[i]<<j)&128)/128;
    }
    text<<'\0';
}

void metodo_1(char *bin, int semilla,unsigned long long tamanio)
{
    for (unsigned long long i=0; i<tamanio; i++){

    }
}
