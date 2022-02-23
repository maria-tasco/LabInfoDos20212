#include "metodo_1.h"


bool codificar_M1(char *archivo_to_codificar, char *archivo_codificado, int semilla)
{
    char *data= nullptr, *binario = nullptr;
    unsigned long long tamArchivo = 0;
    tamArchivo = tam(archivo_to_codificar);
    try {
        data = new char[tamArchivo + 1]; //le doy memoria dinamica y el dato completo leido se encuentra dentro de data
        binario = new char[8*tamArchivo+1];
        if(leer(archivo_to_codificar,tamArchivo,data)){

            text_to_bin(data,binario,tamArchivo);
         }
        delete binario;
        delete data;
    }  catch (bad_alloc) {
        cout << "falla por falta de memoria" << endl;
    }
    return true;
}

void text_to_bin(char *texto, char *bin, unsigned long long tamanio)
{
    for (unsigned long long i=0; i<tamanio; i++){
        for (unsigned long long j=0; j<=7; j++)
            bin[i*8+j] = (texto[i]<<j)&128/128;
    }
    bin[tamanio]='\0';
}
