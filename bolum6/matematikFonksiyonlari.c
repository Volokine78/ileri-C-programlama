#include <stdio.h>
#include "MathFonks.h"

void minimumBul();
void maksimumBul();
void kareBul();
void kupBul();
void mutlakBul();
int secimAl();
void secimDegerlendir(int);

int main() {

    menu();

    int secim = secimAl();

    secimDegerlendir(secim);

    return 0;
}

void menu() {
    printf("\n");
    printf("****************\n");
    printf("**    MENU     *\n");
    printf("****************\n");

    printf("\n\n");
    printf("1. minimum bul\n");
    printf("2. maksimum bul\n");
    printf("3. kare bul\n");
    printf("4. kup bul\n");
    printf("5. mutlak değer bul\n");
    printf("6. olduğu gibi yazsın\n");
}

int secimAl() {
    int secim;
    do {
        printf("\nseçiminizi yapınız (1..6): ");
        scanf("%d", &secim);
    } while (secim < 1 || secim > 6);
    printf("\n");
    return secim;
}

void secimDegerlendir(int secim) {
    switch (secim) {
        case 1:
            minimumBul();
            break;
        case 2:
            maksimumBul();
            break;
        case 3:
            kareBul();
            break;
        case 4:
            kupBul();
            break;
        case 5:
            mutlakBul();
            break;
        case 6:
            printf("%d seçtiniz.\n", secim);
            break;
   }
}

void minimumBul() {
    int i, j;
    printf("min. için iki sayı giriniz: ");
    scanf("%d%d", &i, &j);
    printf("min: %d\n", min(i,j));
}

void maksimumBul() {
    int i, j;
    printf("maks. için iki sayı giriniz: ");
    scanf("%d%d", &i, &j);
    printf("max: %d\n", max(i,j));
}

void kareBul() {
    int i;
    printf("karesi bulunacak sayıyı giriniz: ");
    scanf("%d", &i);
    printf("karesi: %d\n", kare(i));
}

void kupBul() {
    int i;
    printf("küpü bulunacak sayıyı giriniz: ");
    scanf("%d", &i);
    printf("küpü: %d\n", kup(i));
}

void mutlakBul() {
    int i;
    printf("mutlak değeri bulunacak sayıyı giriniz: ");
    scanf("%d", &i);
    printf("mutlak değeri: %d\n", mutlak(i));
}

int min(int i, int j) {
    if (i < j) {
        return i;
    }
    return j;
}

int max(int i, int j) {
    if (i > j) {
        return i;
    }
    return j;
}

int kare(int i) {
    return i * i;
}

int kup(int i) {
    return i * i * i;
}

int mutlak(int i) {
    if (i < 0) {
        return i * (-1);
    }
    return i;
}