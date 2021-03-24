#include <stdio.h>

// Cuenta el número de líneas que tiene una cadena de texto.

main() {
    int c, n1;
    n1 = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
    printf("%d\n", n1);
}
