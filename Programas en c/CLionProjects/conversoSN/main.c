#include <stdio.h>
#include <string.h>
#include "utilidades.h"
double valorDecimalEntrada;

double valorDecimalSalida;
double valorEnteroSalida;


int main() {
    char *entero="12345",*flotante="127.5";
    int enteroI;
    float flotanteF;
    char car='.';
    //printf("Caracter : %i\n",car);
    enteroI=str_to_int(entero);
    printf("El numero %s al cuadrado es : %i\n",entero,enteroI);
    flotanteF=str_to_float(flotante);
    printf("El numero %s al cuadrado es :%f\n",flotante,flotanteF);
    //printf("Caracter : %c",48);
    return 0;
}


