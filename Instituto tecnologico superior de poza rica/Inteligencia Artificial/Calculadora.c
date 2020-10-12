#include <stdio.h>
#include <math.h>

/*
 * cuadrado
 * seno
 * coseno
 * tan
 * cubo de un numero
 * numero a la x potencia
 * raiz
 * log
 * log natural de un numero
 * grados a radianes
 * X! factorial
 * X^-1 inverso
 * inversa del coseno acos [-1,1]
 * inversa del seno asen
 * inversa de tangente atan
 * coseno hiperbólico acosh no puede ser menor a 1
 * */
float suma(float numero1, float numero2);

float resta(float num1, float num2);

float multiplicacion(float num1, float num2);

float divicion(float num1, float num2);

float cuadrado(float numero1);

float seno(float numero1);

float coseno(float numero1);

float tangente(float numero1);

float cubo(float numero1);

float potencia(double numero1, double numero2);

float raizCuadrada(float numero1);

float raizCubica(float numero1);

float raizXAlY(float numero1, float numero2);

float logaritmo(float numero1);

float logaritmoNatural(float numero1);

float gradToRadianes(float numero1);

double xI(double numero);

int menu();

int main() {
    int op = -1;
    float  numero1, numero2;
    double resultado;
    while (op != 18) {
        op=menu();
        switch (op) {
            case 1:
                printf("\t\t\tSumar\n");
                printf("Ingresa el primer numero :");
                scanf("%f", &numero1);
                printf("Ingresa el segundo numero :");
                scanf("%f", &numero2);
                resultado = suma(numero1, numero2);
                printf("La suma de %0.2f + %0.2f = %0.2f\n", numero1, numero2, resultado);
                break;
            case 2:
                printf("\t\t\tRestar\n");
                printf("Ingresa el primer numero :");
                scanf("%f", &numero1);
                printf("Ingresa el segundo numero :");
                scanf("%f", &numero2);
                resultado = resta(numero1, numero2);
                printf("La resta de %0.2f - %0.2f = %0.2f\n", numero1, numero2, resultado);
                break;
            case 3:
                printf("\t\t\tMultiplicar\n");
                printf("Ingresa el primer numero :");
                scanf("%f", &numero1);
                printf("Ingresa el segundo numero :");
                scanf("%f", &numero2);
                resultado = multiplicacion(numero1, numero2);
                printf("La muntiplicacion de %0.2f * %0.2f = %0.2f\n", numero1, numero2, resultado);
                break;
            case 4:
                printf("\t\t\tDivicion\n");
                printf("Ingresa el primer numero :");
                scanf("%f", &numero1);
                printf("Ingresa el segundo numero :");
                scanf("%f", &numero2);
                resultado = divicion(numero1, numero2);
                printf("La divicion de %0.2f / %0.2f = %0.2f\n", numero1, numero2, resultado);
                break;
            case 5:
                printf("\t\t\tSeno\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado = seno(numero1);
                printf("EL seno de %0.2f  = %0.5f\n", numero1, resultado);
                break;
            case 6:
                printf("\t\t\tCoseno\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado = coseno(numero1);
                printf("EL coseno de  %0.2f  = %0.5f\n", numero1, resultado);
                break;
            case 7:
                printf("\t\t\tTangente\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado = tangente(numero1);
                printf("La tangente de  %0.2f  = %0.6f\n", numero1, resultado);
                break;
            case 8:
                printf("\t\t\tCuadrado\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado = cuadrado(numero1);
                printf("El cuadrado de %0.2f  = %0.2f\n", numero1, resultado);
                break;
            case 9:
                printf("\t\t\tCubo\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado = cubo(numero1);
                printf("El cubo de %0.2f  = %0.2f\n", numero1, resultado);
                break;
            case 10:
                printf("\t\t\tPotencia\n");
                printf("Ingresa el primer numero :");
                scanf("%f", &numero1);
                printf("Ingresa la potencia :");
                scanf("%f", &numero2);
                resultado = potencia(numero1,numero2);
                printf("%0.2f^%0.2f = %0.2f\n", numero1,numero2, resultado);
                break;
            case 11:
                printf("\t\t\tRaiz cuadrada\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=potencia(numero1,(float)1/2);
                printf("La raiz de %0.2f^(1/2) = %0.4f\n", numero1, resultado);
                break;
            case 12:
                printf("\t\t\tRaiz cubica\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=potencia(numero1,(float)1/3);
                printf("La raiz cubica de %0.2f^(1/2) = %0.4f\n", numero1, resultado);
                break;
            case 13:
                printf("\t\t\tRaiz\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                printf("Ingresa la raiz :");
                scanf("%f", &numero2);
                resultado=potencia(numero1,1/numero2);
                printf("La raiz cubica de %0.2f^(1/%0.2f) = %0.4f\n", numero1,numero2, resultado);
                break;
            case 14:
                printf("\t\t\tLogaritmo natural\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=logaritmoNatural(numero1);
                printf("El logaritmo natural de %0.2f = %0.4f\n", numero1, resultado);
                break;
            case 15:
                printf("\t\t\tLogaritmo\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=logaritmo(numero1);
                printf("El logaritmo de %0.2f = %0.4f\n", numero1, resultado);
                break;
            case 16:
                printf("\t\t\tGrados a radianes\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=gradToRadianes(numero1);
                printf("%0.2f° --> %0.5f Radianes\n", numero1, resultado);
                break;
            case 17:
                printf("\t\t\tFactorial\n");
                printf("Ingresa el numero :");
                scanf("%f", &numero1);
                resultado=xI(numero1);
                printf("El factorial de %0.2f = %0.2f\n", numero1, resultado);
                break;
            case 18:
                printf("Hasta pronto ;-)\n");
                break;
            default:
                printf("Opcion no valida, ingrese otra opcion.\n");
                break;
        }
    }
    return 0;
}

float suma(float numero1, float numero2) {
    return numero1 + numero2;
}

float resta(float numero1, float numero2) {
    return numero1 - numero2;
}

float multiplicacion(float numero1, float numero2) {
    return numero1 * numero2;
}

float divicion(float numero1, float numero2) {
    return numero1 / numero2;
}

float cuadrado(float numero1) {
    return pow(numero1, 2);
}

float seno(float numero1) {
    return sin(numero1);
}

float coseno(float numero1) {
    return cos(numero1);
}

float tangente(float numero1) {
    return tan(numero1);
}

float cubo(float numero1) {
    return pow(numero1, 3);
}

float potencia(double numero1, double numero2) {
    return pow(numero1, numero2);
}

float raizCuadrada(float numero1) {
    return sqrt(numero1);
}

float raizCubica(float numero1) {
    return potencia(numero1, (float) 1 / 3);
}

float raizXAlY(float numero1, float numero2) {
    return pow(numero1, numero2);
}

float logaritmoNatural(float numero1) {
    return log(numero1);
}

float logaritmo(float numero1) {
    return log10(numero1);
}

float gradToRadianes(float numero1) {
    return numero1 * M_PI / 180;
}

double xI(double numero) {
    if (numero < 0) {
        return numero;
    }
    if (numero == 1 || numero == 0) {
        return 1;
    }
    return xI(numero - 1) * numero;
}

int menu(){
    int op=1;
    printf("\t\t\tMENU\n");
    printf("\t1 ) Sumar x+y\n");
    printf("\t2 ) Restar x-y\n");
    printf("\t3 ) Multiplicar x*y\n");
    printf("\t4 ) Dividir x/y\n");
    printf("\t5 ) Seno sin(x)\n");
    printf("\t6 ) Coseno cos(x)\n");
    printf("\t7 ) Tangente tan(x)\n");
    printf("\t8 ) Cuadrado x^2\n");
    printf("\t9 ) Cubo x^3\n");
    printf("\t10) Potencia x^y\n");
    printf("\t11) Raiz cuadrada x^(1/2)\n");
    printf("\t12) Raiz cubica x^(1/3)\n");
    printf("\t13) Raiz x^(1/y)\n");
    printf("\t14) Logaritmo natural(x)\n");
    printf("\t15) Logaritmo log(x)\n");
    printf("\t16) Grados a radianes\n");
    printf("\t17) Factorial x!\n");
    printf("\t18) Salir\n");
    printf("\tIngresa una opcion :");
    scanf("%i", &op);
    return op;
}