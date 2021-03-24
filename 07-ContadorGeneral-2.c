#include <stdio.h>

// Cuenta cualquier tipo de caracter. Los organiza, dependiendo de si es una letra, 
// un espacio, una coma, un punto, un tabulador, un salto de línea, una palabra, etc.
// El primer número es de los saltos de línea, el segundo de los espacios,
// el tercero de las palabras, el cuarto de los espacios y el quinto de todos los caracteres en general. 
// Estos son los que se muestran, pero se pueden añadir más.

#define IN 1
#define OUT 0

main(){
    int c, nl, ns, nw, nt, nc, state;

    state = OUT;
    nl = ns = nw = nt = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d %d %d\n", nl, ns, nw, nt, nc);
}

