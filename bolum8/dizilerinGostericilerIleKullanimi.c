#include <stdio.h>

int main() {

    char chDizi[4] = {'a', 'b', 'c', 'd'};
    int intDizi[4] = {1, 2, 3, 4};
    int i = 0;

    printf("chDizi elemanlarının içeriği:\n--------\n");
    for (i = 0; i < 4; i++) {
        printf("chDizi(%d): %c\n", i, *(chDizi + i));
    }

    printf("\nintDizi elemanlarının içeriği:\n--------\n");
    for (i = 0; i < 4; i++) {
        printf("intDizi(%d): %d\n", i, *(intDizi + i));
    }

    printf ("\nchDizi elemanlarının adresleri:\n--------\n");
    for (i = 0; i < 4; i++) {
        printf("&chDizi(%d): %p\n", i, chDizi + i);
    }

    printf("\nintDizi elemanlarının adresleri:\n--------\n");
    for (i = 0; i < 4; i++) {
        printf("intDizi(%d): %p\n", i, intDizi + i);
    }

    return 0;
}