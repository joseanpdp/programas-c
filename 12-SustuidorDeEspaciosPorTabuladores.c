// Este programa sustituye espacios por tabuladores.

#include <stdio.h>

#define S 1

main(){
    int c;
    int n;

    while ((c = getchar()) != EOF){
        if (c == '  '){
            for (n = 0; n < S; ++n){
                c = '\t';
                putchar(c);
            }
        }
        else {
            putchar(c);
        }
    }
}

