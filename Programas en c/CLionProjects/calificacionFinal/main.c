#include <stdio.h>

int main() {
    float cal1,cal2,cal3,cal_examen,cal_trabajo;
    float calFinal;
    printf("Ingresa las 3 calificaciones : ");
    scanf("%f %f %f",&cal1,&cal2,&cal3);
    printf("Ingresa calificacion del examen final : ");
    scanf("%f",&cal_examen);
    printf("Ingresa calificacion del trabajo final : ");
    scanf("%f",&cal_trabajo);

    calFinal=(((cal1+cal2+cal3)/3)*.55f);
    calFinal+=cal_examen*.3;
    calFinal+=cal_trabajo*.15;
    printf("La calificacion final es : %f",calFinal);


    return 0;
}
