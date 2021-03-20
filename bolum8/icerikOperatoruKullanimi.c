#include <stdio.h>

int main() {

    int a = 14;
    int * b = &a; // * : tanımlama operatörü. b değişkeninin pointer olduğunu tanımlıyor.

    printf("a nın değeri: %d\n", a);

    *b = 99;      // * : içerik operatörü. Pointer hangi değişkenin adresini tutuyorsa o değişkeni ifade eder.

    printf("a nın değeri: %d\n", a);

    return 0;
}