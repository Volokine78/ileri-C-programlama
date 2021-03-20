#include <stdio.h>
#include <ctype.h>

int main() {

    int sayi;
    printf("0..255 aralığında bir sayı giriniz: ");
    scanf("%d", &sayi);
    printf("\ngirdiğiniz karakter: %c\n", sayi);

    if (isalnum(sayi)) {
        printf("bu karakter A..Z, a..z veya 0..9 karakterlerinden birisidir. %d\n", isalnum(sayi));
    } else {
        printf("bu karakter A..Z, a..z veya 0..9 karakterlerinden biri değildir. %d\n", isalnum(sayi));
    }
    return 0;
}