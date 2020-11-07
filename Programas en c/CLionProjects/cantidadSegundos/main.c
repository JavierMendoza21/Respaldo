#include <stdio.h>

int main() {
    int hora,minuto,segundo,tSegundos;
    printf("Ingrese el numero de horas, minutos y segundos (HH:MM:ss) : ");
    scanf("%i %i %i",&hora,&minuto,&segundo);

    tSegundos=segundo;
    tSegundos+=(minuto*60);
    tSegundos+=(hora*60*60);

    printf("El total de segundos es : %i",tSegundos);
    return 0;
}
