#include <stdio.h>
#include <stdbool.h>

int len(char *c);

int longitud(char *cadena);

bool comp(char *a,char *b);

bool comparar(char* cadena1,char* cadena2);

int main() {

    char *c1="Javier";
    char *c2="cadena1";
    char *c3="cadena12";

    printf("La cadena %s tiene : %i caracteres\n",c1,longitud(c1));



    if(comparar(c2,c3)){
        printf("Las cadenas %s y %s son iguales\n",c2,c3);
    }else{
        printf("Las cadenas %s y %s son diferentes\n",c2,c3);
    }

    return 0;
}

int len(char *cadena){
    int contador=0;
    while(*cadena!='\0'){
        contador++;
        cadena++;
    }
    return contador;
}

int longitud(char *cadena){
    if (*cadena!='\0'){
        cadena++;
        return longitud(cadena)+1;
    }else{
        return 0;
    }

}

bool comp(char *cadena1,char *cadena2){
    if(len(cadena1)==len(cadena2)){
        while(*cadena1!='\0'){
            if(*cadena1!=*cadena2){
                return false;
            }
            cadena1++;
            cadena2++;
        }
        return true;
    }else{
        return false;
    }
}

bool comparar(char* cadena1,char* cadena2){
    while((*cadena1 != '\0' && *cadena2 != '\0') && *cadena1 == *cadena2){
        cadena1++;
        cadena2++;
        if(*cadena1 == '\0' && *cadena2 == '\0'){
            return true;
        }
    }
    return false;
}
