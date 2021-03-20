#include <stdio.h>

void buyukKucukHarfDonustur(char*, int);

int main() {

    char dizi[] =
    {'f','i','R','a','T',' ','s','O','Y','l','U'};
    int boy = 11, i = 0;

    for(i = 0; i < 11; i++) {
        printf("%c", *(dizi + i));
    }
    printf("\n");

    buyukKucukHarfDonustur(dizi,i);

    for(i = 0; i < 11; i++) {
        printf("%c", *(dizi + i));
    }
    printf("\n");
    return 0;
}

void buyukKucukHarfDonustur(char * chDizi, int diziBoyu) {

    int i = 0;

    for(i = 0; i < diziBoyu; i++) {
        if (*(chDizi + i) >= 'a' && *(chDizi + i) <= 'z') {
            *(chDizi + i) = *(chDizi + i) - 32;
        }
        else if (*(chDizi + i) >= 'A' && *(chDizi + i) <= 'Z') {
            *(chDizi + i) = *(chDizi + i) + 32;
        }
    }
}