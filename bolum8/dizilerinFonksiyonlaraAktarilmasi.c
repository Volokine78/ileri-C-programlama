#include <stdio.h>

void diziIsle(int*);

int main() {

    int sayilar[5] = {1,2,3,4,5};
    int i = 0;

    printf("dizinin fonksiyona gitmeden önceki durumu:\n");
    for (i = 0; i < 5; i++) {
        printf("sayilar[%d]: %d\n", i, sayilar[i]);
    }

    diziIsle(sayilar);

    printf("\ndizinin fonksiyona gittikten sonraki durumu:\n");
    for (i = 0; i < 5; i++) {
        printf("sayilar[%d]: %d\n", i, sayilar[i]);
    }
    return 0;
}

void diziIsle(int * tamsayilar) {
    int i = 0;
    for (i = 0; i < 5; i++) {
        *(tamsayilar + i) = *(tamsayilar + i) * 2;
    }
}