#include <stdio.h>
#include <cs50.h>
#include <string.h>

void harfleriCiftYazdir(char*);

int main() {

    char * chPt = get_string("Bir kelime giriniz (max 20 karakter):");

    harfleriCiftYazdir(chPt);

    //system("pause");
    return 0;
}

void harfleriCiftYazdir(char * chPt) {

    int uzunluk = strlen(chPt);
    int i = 0;

    while (chPt[i] != '\0') {
        i++;
        if (i > 20) {
        printf("siniri astiniz. Tekrar deneyin.\n");
        return;
        }
    }

    for (i = 0; i < uzunluk; i++) {
        putchar(chPt[i]);
        putchar(chPt[i]);
    }
    printf("\n");
}