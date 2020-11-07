#include <stdio.h>

int main() {
    float total,descuento;
    printf("Ingrese el total de la ccompra : ");
    scanf("%f",&total);
    descuento=total*.85;
    printf("Se pagara : %.2f",descuento);
    return 0;
}
