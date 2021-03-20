#include <stdio.h>

int main() {

    int a = 5;
    int * pA = &a;

    printf("%p\n", &*pA);

    return 0;
}