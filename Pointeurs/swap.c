#include <stdio.h>

void swap (double x, double y) {
    double z = x;
    x = y;
    y = z;
}

int main (void) {
    double a = 1;
    double b = 2;
    printf("a = %f et b = %f\n", a, b);
    swap(a, b);
    printf("a = %f et b = %f\n", a, b);
    return 0;
}

