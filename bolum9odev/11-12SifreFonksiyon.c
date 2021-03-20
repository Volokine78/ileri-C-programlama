#include <stdio.h>
#include <cs50.h>
#include <string.h>

void sifreleYaz(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz:");

    sifreleYaz(chPt);

    return 0;
}

void sifreleYaz(char * chPt) {

    char tablo[24] = {'x','a','b','c','d','e','f','g','h','i','j','k',
                      'l','m','n','o','p','r','s','t','u','v','y','z'};
    int i = 0, uzunluk = strlen(chPt);

    //f(x) = (5x + 4) % 24
    for (i = 0; i < uzunluk; i++) {
        if (chPt[i] == 32) printf(" ");
        else if(chPt[i] < 119 && chPt[i] > 113)
            putchar(tablo[(((5 * (chPt[i] - 1)) + 4) % 24)]);
            else if (chPt[i] < 123 && chPt[i] > 120)
                putchar(tablo[(((5 * (chPt[i] - 3)) + 4) % 24)]);
                else putchar(tablo[(((5 * (chPt[i])) + 4) % 24)]);
    }
    printf("\n");
}