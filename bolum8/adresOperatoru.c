#include <stdio.h>
#include <inttypes.h>

int main() {

    int a = 45;
    double b = 4.5;
    char c = 'g';

    printf("a değişkeninin içeriği: %d\n", a);
    printf("b değişkeninin içeriği: %f\n", b);
    printf("c değişkeninin içeriği: %c\n\n", c);

    printf("a değişkeninin bellekteki adresi: %p\n", &a);
    printf("b değişkeninin bellekteki adresi: %p\n", &b);
    printf("c değişkeninin bellekteki adresi: %p\n\n", &c);

    return 0;
}