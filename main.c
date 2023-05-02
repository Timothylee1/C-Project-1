#include <stdio.h>

int sq(int x) {
    return x * x;
}

int main(void) {
    int i = 2;
    printf("Square of %d is %d\n", i, sq(i));
    return 0;
}
