#include <stdio.h>
#include <stdbool.h>

int main() {
    float num1,num2;

    printf("Ingresa dos numeros : ");
    scanf("%f %f",&num1,&num2);

    printf("La suma es : %f\n",num2+num1);
    printf("La resta es : %f\n",num1-num2);
    printf("La multiplicacion es : %f\n",num2*num1);
    printf("La divicion es : %f\n",num1/num2);

    return 0;
}
