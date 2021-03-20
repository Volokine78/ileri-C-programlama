#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int testPalindrom(char*);

int main() {

    char * str = get_string("Bir cumle giriniz (max 200 karakter):");

    if (testPalindrom(str) == 1)
        printf("palindrom!!\n");
    else
        printf("palindrom degil!\n");

    return 0;
}

int testPalindrom(char * str) {

    int uzunluk = strlen(str), i = 0, j = 0;
    char *bas, *son;

    bas = str;
    son = str + uzunluk - 1;

    while (*(str + i) != '\0') {
        i++;
        if (i > 200) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return 0;
        }
    }

    while (bas + j <= son) {
        while (tolower(*(bas + j)) < 97 || tolower(*(bas + j)) > 122)
            bas++;
        while (tolower(*(son - j)) < 97 || tolower(*(son - j)) > 122)
            son--;

        if (tolower(*(bas + j)) != tolower(*(son - j))) {
            return 0;
        }
        j++;
    }
    return 1;
}