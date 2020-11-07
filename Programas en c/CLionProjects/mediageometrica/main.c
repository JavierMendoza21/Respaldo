#include <stdio.h>
#include <math.h>

int main() {
    float n1,n2,n3,mediag;
    printf("Ingresa 3 numeros : ");
    scanf("%f %f %f",&n1,&n2,&n3);

    mediag=pow(n1*n2*n3,((float)1/3));

    printf("La media geometrica es : %.2f",mediag);
    return 0;
}
