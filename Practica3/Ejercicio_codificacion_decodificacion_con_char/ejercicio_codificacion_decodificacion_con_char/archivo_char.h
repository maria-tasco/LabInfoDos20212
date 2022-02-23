#ifndef ARCHIVO_CHAR_H
#define ARCHIVO_CHAR_H

#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

//Estoy creando mi propia libreria para manejar archivos de texto con char
void crear (char *nombre);
void escribir(char *nombre, char *datos, unsigned long long int tam, bool tipo);
unsigned long long tam(char *nombre);
bool leer (char *nombre, unsigned long long tam,char *data);

#endif // ARCHIVO_CHAR_H
