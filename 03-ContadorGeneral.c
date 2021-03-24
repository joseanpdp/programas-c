#include <stdio.h>

#define IN  1
#define OUT 0

// Cuenta los caracteres, los espacios, los saltos de l�nea y el n�mero de l�neas.

main() {
    int c, n1, nw, nc, state;
    state = OUT;
    n1 = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++n1;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", n1, nw, nc);
}
