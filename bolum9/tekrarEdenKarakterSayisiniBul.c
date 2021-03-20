#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

void tabloyuCiz(char*);

int harfler[26]; // neden fonksiyonun dışında ? değerler nasıl değişiyor ?

int main() {

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    tabloyuCiz(chPt);

    //system("pause");
    return 0;
}

void tabloyuCiz(char * chPt) {

    int uzunluk = strlen(chPt);
    int i = 0;
    char aktifHarf;

    while (*(chPt + i) != '\0') {
        i++;
        if (i > 100) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return;
        }
    }

    for (i = 0; i < uzunluk; i++) {
        aktifHarf = tolower(*(chPt + i));
        if (aktifHarf != 32) {
            int index = aktifHarf - 97;
            printf("%d %c ", index, aktifHarf);
            printf("harfler[%d]: %d ", index, harfler[index]);
            harfler[index]++;
            printf("harfler[%d]: %d\n", index, harfler[index]);
        }
    }

    printf("\nharf\ttekrar\n");
    printf("----\t-----\n\n");

    for (i = 0; i < 26; i++) {
        if (harfler[i] != 0) {
            printf("%c\t", i + 97);
            printf("%d\n", harfler[i]);
        }
    }
}