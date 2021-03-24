#include <stdio.h>

// Cuanta los caracteres de una cadena de texto.

main() {
  int c;
  double nc;
  for (nc = 0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}
