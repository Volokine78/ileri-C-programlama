#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

void kisaltmaBul(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    kisaltmaBul(chPt);

    //system("pause");
    return 0;
}

void kisaltmaBul(char * chPt) {

    int i  = 0;

    while (*(chPt + i) != '\0') {
        if (i > 100) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return;
        }
        if (i == 0 && isalnum(*(chPt + i))) putchar(*chPt);
        if (*(chPt + i) == ' ')
            putchar(*(chPt + i + 1));
        i++;
    }
    printf("\n");
}