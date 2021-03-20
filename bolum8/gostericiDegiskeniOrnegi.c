#include <stdio.h>

int main() {

    char c = 'e';
    char *g = &c;

    printf("c değişkeninin adresi: %p\n", &c);
    printf("c değişkeninin adresi: %p\n", g);  // adres yazdırırken * pointer ın başına yazılmıyor.
    printf("c değişkeninin adresinin bulunduğu g göstericisinin adresi: %p\n", &g);

    return 0;
}