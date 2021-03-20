#include <stdio.h>
#include <cs50.h>
#include <string.h>

void kelimeleriTersSiradaYazdir(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    kelimeleriTersSiradaYazdir(chPt);

    return 0;
}

void kelimeleriTersSiradaYazdir(char * chPt) {

    int uzunluk = strlen(chPt);
    int basla = uzunluk - 1, bitir = uzunluk - 1;
    int i = 0, j = 0;

    while (*(chPt + i) != '\0') {
        i++;
        if (i > 100) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return;
        }
    }

    for (i = uzunluk; i >= 0; i--) {
        if(*(chPt + i) == ' ' || i == 0) {
            basla = (i != 0) ? i + 1 : i;
            for (j = basla; j <= bitir; j++) {
                putchar(*(chPt + j));
            }
            bitir = basla - 2;
            if (i != 0) putchar(' ');
        }
    }
    printf("\n");
}