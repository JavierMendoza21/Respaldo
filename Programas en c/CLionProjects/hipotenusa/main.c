#include <stdio.h>
#include <math.h>

int main() {
    float co,ca;
    printf("Ingresa los catetos del triangula: ");
    scanf("%f %f",&co,&ca);
    printf("La hipotenusa es : %.3f",sqrt((pow(co,2) + pow(ca,2))));
    return 0;
}
