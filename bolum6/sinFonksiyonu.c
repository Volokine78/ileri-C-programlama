#include <stdio.h>
#include <math.h>

int main() {

    double pi = 3.141592;

    printf("sin(2 pi): \t%f\n", sin(2 * pi));
    printf("sin(3/2 pi): \t%f\n", sin(3 * pi/2));
    printf("sin(pi): \t%f\n", sin(pi));
    printf("sin(pi/2): \t%f\n", sin(pi / 2));
    printf("sin(pi/3): \t%f\n", sin(pi / 3));
    printf("sin(pi/4): \t%f\n", sin(pi / 4));
    printf("sin(0): \t%f\n", sin(0));

    return 0;
}