#include <stdio.h>
#include <math.h>

int main() {

    double pi = 3.141592;

    printf("cos(2 pi): \t%f\n", cos(2 * pi));
    printf("cos(3/2 pi): \t%f\n", cos(3 * pi/2));
    printf("cos(pi): \t%f\n", cos(pi));
    printf("cos(pi/2): \t%f\n", cos(pi / 2));
    printf("cos(pi/3): \t%f\n", cos(pi / 3));
    printf("cos(pi/4): \t%f\n", cos(pi / 4));
    printf("cos(0): \t%f\n", cos(0));

    return 0;
}