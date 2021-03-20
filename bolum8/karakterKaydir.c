#include <stdio.h>

void karakterKaydirEkranaYaz(char*, int);

int main() {

    char karakterler[10] =
    {'b','i','l','g','i','s','a','y','a','r'};
    int boy = 10;

    karakterKaydirEkranaYaz(karakterler, boy);

    return 0;
}

void karakterKaydirEkranaYaz(char * chDizi, int diziBoyu) {
    int i = 0, j = 0;

    for (j = 0; j < diziBoyu + 1; j++) {
        for (i = j; i < diziBoyu; i++) {
            printf("%c", *(chDizi + i));
        }

        for (i = 0; i < j; i++) {
            printf("%c", *(chDizi + i));
        }
        printf("\n");
    }
}