#include <stdio.h>

int sayiAl();
int birBasamak(int);
int onBasamak(int);
int yuzBasamak(int);
int binBasamak(int);
void basamakYaz(int, int, int, int);
void birlikCevirYaz(int);
void onlukCevirYaz(int);


int main() {

    int sayi = sayiAl();

    int basamak1 = birBasamak(sayi);
    int basamak2 = onBasamak(sayi);
    int basamak3 = yuzBasamak(sayi);
    int basamak4 = binBasamak(sayi);

    basamakYaz(basamak1, basamak2, basamak3, basamak4);

    return 0;
}

int sayiAl() {

    int sayi = 0;
    do {
        printf("dört basamaklı bir sayı giriniz:\n");
        scanf("%d", &sayi);

        if (sayi < 0) {
            printf("eksi ");
            sayi *= -1;
        }
    } while (sayi < 1000 || sayi > 9999);
    return sayi;
}

int birBasamak(int sayi) {

    int basamak1 = 0;

    basamak1 = sayi % 10;            // birler basamağı

    return basamak1;
}

int onBasamak(int sayi) {

    int basamak2 = 0;

    basamak2 = (sayi % 100) / 10;    // onlar basamağı

    return basamak2;
}

int yuzBasamak(int sayi) {

    int basamak3 = 0;

    basamak3 = (sayi % 1000) / 100;  // yüzler basamağı

    return basamak3;
}

int binBasamak(int sayi) {

    int basamak4 = 0;

    basamak4 = sayi / 1000;          // binler basamağı

    return basamak4;
}

void basamakYaz(int basamak1, int basamak2,
                int basamak3, int basamak4) {

    if (basamak4 != 1) birlikCevirYaz(basamak4);
    printf(" bin ");
    if (basamak3 != 1) birlikCevirYaz(basamak3);
    if (basamak3 != 0) printf(" yüz ");
    onlukCevirYaz(basamak2);
    printf(" ");
    birlikCevirYaz(basamak1);
    printf("\n\n");
}

void birlikCevirYaz(int rakam) {
    switch(rakam) {
        case 1:
            printf("bir"); break;
        case 2:
            printf("iki"); break;
        case 3:
            printf("üç"); break;
        case 4:
            printf("dört"); break;
        case 5:
            printf("beş"); break;
        case 6:
            printf("altı"); break;
        case 7:
            printf("yedi"); break;
        case 8:
            printf("sekiz"); break;
        case 9:
            printf("dokuz"); break;
    }
}

void onlukCevirYaz(int sayi) {
    switch (sayi) {
        case 1:
            printf("on"); break;
        case 2:
            printf("yirmi"); break;
        case 3:
            printf("otuz"); break;
        case 4:
            printf("kırk"); break;
        case 5:
            printf("elli"); break;
        case 6:
            printf("altmış"); break;
        case 7:
            printf("yetmiş"); break;
        case 8:
            printf("seksen"); break;
        case 9:
            printf("doksan"); break;
        default:
            printf("\b");
    }
}