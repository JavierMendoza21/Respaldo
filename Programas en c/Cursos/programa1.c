#include <stdio.h>
#include <math.h>

#define IZQSUPIZQ 218

int main(){
    int i;
    for(i=0; i<256; i++)//bucle for que recorre los 256 caracteres ASCII
    {
      printf("%d\t-\t%c\n", i, i);//imprimimos el número y el caracter
    }
    return 0;
}
