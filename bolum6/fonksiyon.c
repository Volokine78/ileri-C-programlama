#include <stdio.h>

int topla(int a, int b) {
    int c = 0;
    c = a + b;
    return c;
}

int main() {
    int toplam = 0;
    toplam = topla(8,13);
    printf("%d\n", toplam);
    return 0;
}