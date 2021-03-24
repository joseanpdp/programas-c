#include <stdio.h>

// Imprime en pantalla una tabla que muestra los grados Celsius y Fahrenheit, 
// calculando el segundo a paritr del primero.

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("      Celsius,    Fahrenheit\n");
    /*fahr = lower;*/
    celsius = lower;
    while (celsius <= upper) {
        fahr = 9 * (celsius+32) / 5;
        printf("%10.0f       %8.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
