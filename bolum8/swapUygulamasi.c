#include <stdio.h>

void swap(int*, int*);  // void den sonra * yok.

int main() {

    int sayi01 = 0, sayi02 = 0;

    printf("iki tamsayı değeri giriniz: ");
    scanf("%d%d", &sayi01, &sayi02);

    printf("sayı01: %d\n", sayi01);
    printf("sayı02: %d\n\n", sayi02);

    swap(&sayi01, &sayi02);

    printf("sayı01: %d\n", sayi01);
    printf("sayı02: %d\n\n", sayi02);

    return 0;
}

void swap(int * iPt01, int * iPt02) {

    int temp = 0;
    temp = *iPt01;
    *iPt01 = *iPt02;
    *iPt02 = temp;
}