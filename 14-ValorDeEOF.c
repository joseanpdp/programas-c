#include <stdio.h>

// Muestra el valor de EOF.

main() {
    int c;
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("El valor de EOF es %d", EOF);
}
