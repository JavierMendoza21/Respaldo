#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindromo(char* str1);

char* eliminarEspacio(char* str);

int longitud(char *cadena);

int main(){
    char* cadena1="oso";
    printf("voy a entrar");
    if(isPalindromo(cadena1)){
        printf("Es palindromo");
    }else{
        printf("No es palindromo");
    }

    return 0;
}

bool isPalindromo(char* str){
    char* newStr=str;
    printf("se van a eliminar los espacion");
    newStr=eliminarEspacio(str);
    int lenstr=longitud(newStr);
    printf("se eliminaron los espacion");
    char* finalstr=newStr+lenstr;

    while(*newStr==*finalstr&&*newStr!='\0'){
        newStr++;
        finalstr--;
    }
    return *newStr=='\0'?true:false;
}

char* eliminarEspacio(char* str){
    char* newStr;
    while(*str!='\0'){
        if(*str!=' '){
            strcat(newStr,str);
        }
    }
    return newStr;
}

int longitud(char *cadena){
    if (*cadena!='\0'){
        cadena++;
        return longitud(cadena)+1;
    }else{
        return 0;
    }

}
