#include <stdio.h>
#include <cs50.h>
#include <string.h>

void boslukBırakYaz(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz:");

    boslukBırakYaz(chPt);

    return 0;
}

void boslukBırakYaz(char * chPt) {

    int uzunluk = strlen(chPt);
    int i = 0;

    for (i = 0; i < uzunluk; i++) {
        putchar(chPt[i]);
        putchar(' ');
    }
    printf("\n");
}