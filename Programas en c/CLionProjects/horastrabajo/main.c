#include <stdio.h>

int main() {
    int horas;
    float precio_hora,salario;

    printf("Inggrese horas trabajadas : ");
    scanf("%i",&horas);
    printf("Ingrese el precio por hora : ");
    scanf("%f",&precio_hora);

    salario=horas*precio_hora;
    printf("El salario es de : $%.2f",salario);

    return 0;
}
