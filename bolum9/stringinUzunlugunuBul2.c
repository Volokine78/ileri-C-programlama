#include <stdio.h>
#include <cs50.h>
#include <string.h>

int uzunlukBul(char*);

int main() {

    int uzunluk = 0;

    char * chPt;

    do {
        chPt = get_string("Bir cumle giriniz (max 50 karakter):");
        uzunluk = uzunlukBul(chPt);
    } while (uzunluk == -1);

    printf("girdiginiz cumlenin uzunlugu: %d\n", uzunluk);
    return 0;
}

int uzunlukBul(char * chPt) {

    int i = 0;
    while (chPt[i]!='\0') {
        if (i > 50) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return -1;
        }
        i++;
    }
    return i;
}