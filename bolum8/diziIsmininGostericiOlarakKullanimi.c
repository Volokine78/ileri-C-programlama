#include <stdio.h>

int main() {

    char karakterler[8] = {'h','g','f','e','d','c','b','a'};

    printf("ilk elemanın adresi: %p\n", &karakterler[0]);
    printf("ilk elemanın adresi: %p\n\n", karakterler);

    printf("son elemanın adresi: %p\n", &karakterler[7]);
    printf("son elemanın adresi: %p\n\n", karakterler + 7);

    printf("ilk elemanın içeriği: %c\n", karakterler[0]);
    printf("ilk elemanın içeriği: %c\n\n", *karakterler);

    printf("3. elemanın içeriği: %c\n", karakterler[2]);
    printf("3. elemanın içeriği: %c\n", *(karakterler + 2));
    printf("6. elemanın içeriği: %c\n", *(karakterler + 5));

    return 0;
}