#include <stdio.h>

// Este programa sustituye los espacios o tabuladores por saltos de línea.

#define S 1

main(){
    int c;
    int n;

    while ((c = getchar()) != EOF){
        if (c == ' ', c == '\t'){
            for (n = 0; n < S; ++n){
                c = '\n';
                putchar(c);
            }
        }
        else {
            putchar(c);
        }
    }
}
