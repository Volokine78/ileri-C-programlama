#include <stdio.h>

int main() {

    double k = 2.44;
    int * m = &k;

    printf("%d", *m);

    return 0;
}