#include <ncurses.h>
#include <stdlib.h>

#define ESQSUPIZQ 218
#define ESQSUPDER 170
#define ESQINFIZQ 192
#define ESQINFDER 217
#define HORIZONTAL 196
#define VERTICAL 179

void dibujarMarco(int x,int y,int ancho,int alto,int colorTexto,int colorFondo);
char* intToString(int c);

int main(void)
{
    initscr();  //activar el acceso a la pantalla
    clear();
    dibujarMarco(10,10,50,50,0,1);
    /*clear(); //limpia la pantalla
    move(0,30); //mueve el cursos a la posición 0,30
    printw("Hola");
    refresh();  //mostrar en pantalla lo escrito por printw
    getch(); //espera la pulsación de una techa
    endwin();  //cerrar el acceso a la pantalla*/
    //
    getch();
    endwin();
    return 0;
}

void dibujarMarco(int x,int y,int ancho,int alto,int texto,int fondo){
    clear();
    /*Dibujando la linea horizontal superior*/
    move(x,y);
    printw("%c",ESQSUPIZQ);

    //printw((char)ESQSUPIZQ);
    /*for (int i = x; i < x+ancho ; ++i) {
        printw(HORIZONTAL);
    }*/
    refresh();
}
