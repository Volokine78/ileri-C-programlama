#include <stdio.h>
#include <string.h>
#include <cs50.h>

void terstenYazdir(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    terstenYazdir(chPt);

    return 0;
}

void terstenYazdir(char * chPt) {

    int i = 0, uzunluk = 0;
    uzunluk = strlen(chPt);

    while (*(chPt + i) != '\0') {
        i++;
        if (i > 100) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return;
        }
    }
    for (i = uzunluk - 1; i >= 0; i--) {
        putchar(*(chPt + i));
    }
    printf("\n");
}