#include <stdio.h>
#include <math.h>  // double exp(double x); (prototip)

int main() {

    int i = 0;
    for(i = 0; i < 11; i++) {
        printf("e üzeri %d: %f\n", i, exp(i)); // e sabitinin x dereceden kuvvetini döndürür.
    }
    return 0;
}