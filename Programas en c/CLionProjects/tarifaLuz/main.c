#include <stdio.h>
#include "holi.h"
#define TARIFA_1 1.2
#define TARIFA_2 1.0
#define TARIFA_3 0.9


int main() {

    float gastos,tasa;
    printf("Ingrese gasto en kwxh :");
    scanf("%f",&gastos);
    
    if(gastos<1000){
        tasa=TARIFA_1;
    }else if(gastos<=1850){
        tasa=TARIFA_2;
    } else{
        tasa=TARIFA_3;
    }
    printf("La tarifa es de : %.2f\n",tasa);

    return 0;
}
