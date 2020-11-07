//
// Created by javier on 30/10/20.
//
#include <stdio.h>
#include <math.h>
#include <string.h>
#ifndef CONVERSOSN_UTILIDADES_H
#define CONVERSOSN_UTILIDADES_H

/*Conversion de cadena a numericos*/
int str_to_int(char *c);
float str_to_float(char *c);
int str_len(char *c);
int regresarCaracter(char *c);
int posPunto(char *c);
char* getEntero(const char *c,int pos );
/*Regresa el tamaño de una cadena*/
int str_len(char *c){
    int contador=0;
    while(*c!='\0'){
        contador++;
        c++;
    }
    return contador;
}
/*Se le pasa una cadena y regresa la cadena en entero*/
int str_to_int(char *c){
    char *cp=c;
    int entero=0;
    while(*cp!='\0'){
        if(*cp<48 || *cp>57){
            printf("%s - No es un entero\n",c);
            return -1;
        }
        cp++;
    }
    /*regresa 3*/
    /*234*/
    int strlen=str_len(c);
    while(strlen>0){
        entero+=(int)pow(10,strlen-1)*regresarCaracter(c);
        strlen--;
        c++;
    }
    return entero;
}
/*Se le pasa una cadena y regresa la cadena en float*/
float str_to_float(char *c){
    printf("Entre funcion\n");
    char *cp=c;
    float numero=0;
    while(*cp!='\0'){
        if(!((*cp>=48 && *cp<=57) || *cp==46)){
            printf("%s - No es un flotante\n",c);
            return -0.1;
        }
        cp++;
    }

    int puntoPos=posPunto(c);
    if(puntoPos>0){
        printf("Entre if\n");
        char *entero=getEntero(c,puntoPos);
        printf("Parte entera : %s\n",entero);
        char *decimal;


    } else{
        int strlen=str_len(c);
        while(strlen>0){
            numero+=(float)pow(10,strlen-1)*regresarCaracter(c);
            strlen--;
            c++;
        }
    }


    return numero;
}
/*convierte el caracter a numero*/
int regresarCaracter(char *c){
    return *c-48;
}
/*Obtienes la posicion del punto en el flotante*/
int posPunto(char *c){
    int cont=0;
    while(*c!='\0'){
        if(*c=='.'){
            cont++;
            return cont;
        }
        c++;
        cont++;
    }
    return -1;
}

char* getEntero(const char *c,int pos ){
    char response[20]="";
    while(*c!='\0'){
        if(*c!='.'){
            strcat(response,c);

        }else{
            return &response;
        }
        c++;
    }
}

char* getDecimal(char *c,int pos ){

}


#endif //CONVERSOSN_UTILIDADES_H
