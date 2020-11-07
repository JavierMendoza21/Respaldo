#include <stdio.h>

int main() {
    float salario;
    printf("Ingresa el salario del obrero : ");
    scanf("%f",&salario);
    salario*=1.25;
    printf("El salario es : $%.2f",salario);
    return 0;
}
