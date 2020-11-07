#include <stdio.h>

int main() {
    float n1,n2,n3,media;

    printf("Ingrese 3 numeros : ");
    scanf("%f %f %f",&n1,&n2,&n3);

    media=(n1+n2+n3)/3;

    printf("La media es : %.2f",media);
    return 0;
}
