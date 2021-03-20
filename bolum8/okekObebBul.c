#include <stdio.h>

int okekBul(int*, int*);
int obebBul(int*, int*, int*);

int main() {

    int sayi01 = 0, sayi02 = 0;
    int okek = 0, obeb = 0;

    printf("iki tamsayı giriniz: ");
    scanf("%d%d", &sayi01, &sayi02);

    okek = okekBul(&sayi01, &sayi02);
    printf("\nOkek: %d\n", okek);

    obeb = obebBul(&sayi01, &sayi02, &okek);
    printf("Obeb: %d\n", obeb);

    return 0;
}

int okekBul(int * iPt01, int * iPt02) {

    int buyukSayi = 0, okek = 0;

    buyukSayi = (*iPt01 > *iPt02) ? *iPt01 : *iPt02;
    okek = buyukSayi;

    while (okek % *iPt01 != 0 || okek % *iPt02 != 0) {
        okek += buyukSayi;
    }
    return okek;
}

int obebBul(int * iPt01, int * iPt02, int * okekPt) {

    return (*iPt01 * *iPt02) / *okekPt;                 // OKEK(a,b) = a * b / OBEB(a,b)
}