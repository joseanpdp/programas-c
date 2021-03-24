#include<stdio.h>
#define START 'X'
#define STOP 'Z'
#define N 5

main() {
    int c;
    int suma;
    suma = START + N;
    for (c = START; c < suma && c <= STOP; c++) {
        putc(c, stdout);
    }
    printf("\n");
}
