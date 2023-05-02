/* main2.c */
#include <stdio.h>
#include "calc.h"

int main(void) {
    printf("Square of 2 = %d\n", sq(2));

    int i = 3;
    printf("Square of %d = %d\n", i, sq(i));

    double d = 3.4;
    printf("Cube of %f = %f\n", d, cube(d));
    printf("Cube of 4 = %f\n", cube(4));
    
    printf("Minus of 5 = %f\n", minus(5));
    printf("Minus of %f = %f\n", d, minus(d));
    return 0;
}
