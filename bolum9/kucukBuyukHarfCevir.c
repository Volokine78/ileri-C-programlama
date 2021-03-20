#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void harfCevir(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    harfCevir(chPt);

    return 0;
}

void harfCevir(char * chPt) {

    int i = 0;

    while (chPt[i] != '\0') {
        i++;
        if (i > 100) {
        printf("siniri astiniz. Tekrar deneyin.\n");
        return;
        }
    }

    for (; *chPt != '\0'; chPt++) {
        if (*chPt >= 'a' && *chPt <= 'z')
            putchar(toupper(*chPt));
        else if (*chPt >= 'A' && *chPt <= 'Z')
                putchar(tolower(*chPt));
            else
                putchar(*chPt);
    }
    printf("\n");
}