#ifndef METODO_1_H
#define METODO_1_H

#include <fstream>
#include <iostream>
#include <string.h>
#include "archivo_char.h"

bool codificar_M1(char *archivo_to_codificar, char *archivo_codificado, int semilla);
void text_to_bin(char* texto, char*bin, unsigned long long tamanio);
void metodo_1(char *bin, int semilla,unsigned long long tamanio);
#endif // METODO_1_H
