#include <stdio.h>

#define bloque 35
#define IN 1
#define OUT 1
#define NMAX 10

// Muestra en pantalla una gráfica con el número de caracteres de cada palabra

main() {
    int nchar[NMAX];
    int i;
    int j;
    int estado;
    int c;
    int longitud;
    int estadoPrevio;

    // Inicialización

    for (i = 0; i < NMAX; i++)
        nchar[i] = 0;

    // Lectura

    /***********************************************

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            estado = OUT;
        }
        else {
            estado = IN;
        }
        if (estado == IN) {
            longitud++;
            estadoPrevio = IN;
        }
        else if (estadoPrevio = IN){
            nchar[longitud]++;
            longitud = 0;
            estadoPrevio = OUT;
        }
    }

    *********************************************/

    longitud = 0;
    while((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            longitud++;
        }
        else {
            nchar[longitud]++;
            longitud = 0;
        }
    }

    // Impresión

    printf("\n\n");
    for (i = 0; i < NMAX; i++) {
        printf("%d | ", i);
        for (j = 0; j < nchar[i]; j++) {
            //printf("x");
            putchar(bloque);
        }
        printf("\n");
    }
}
