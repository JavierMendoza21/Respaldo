
#include <stdio.h>
#include <stdbool.h>

int longitud(char *cadena);

int contarPalabras(char* cadena,char* buscar);

bool sonIguales(char* pcadena,char* pbuscar,int total);

int main() {

    char* p1="la ciudad de poza rica veracruz, es una ciudad muy calurosa al contrario de la ciudad de xalapa veracruz que el clima es muy fresco";
    char* p2="ciudad";

    int total=contarPalabras(p1,p2);
    printf("Total : %i",total);

    return 0;
}

int contarPalabras(char* cadena,char* buscar){
    int contadorPalabras=0;
    int lenBuscar=longitud(buscar);
    int contPos=0;

    while(*cadena!='\0'){

        if((*cadena==*buscar)&&(sonIguales(cadena,buscar,lenBuscar))){
            printf("Coincidencia en : %i\n",contPos+1);
            contadorPalabras++;
        }
        contPos++;
        cadena++;
    }
    return contadorPalabras;
}

bool sonIguales(char* pcadena,char* pbuscar,int total){
    int contador=0;
    while((*pcadena==*pbuscar)&&(*pcadena!='\0'||*pbuscar!='\0')){
        contador++;
        pcadena++;pbuscar++;
    }
    return contador==total?true:false;

}


int longitud(char *cadena){
    if (*cadena!='\0'){
        cadena++;
        return longitud(cadena)+1;
    }else{
        return 0;
    }
}


