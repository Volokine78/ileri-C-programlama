#include <stdio.h>

int kucugeCevir(int karakter) {
    if (karakter <= 90 && karakter >= 65) {
        return karakter += 32;
    }
    return karakter;
}

int buyugeCevir(int karakter) {
    if (karakter <= 122 && karakter >= 97) {
        return karakter -=32;
    }
    return karakter;
}

int main() {

    char karakter;

    printf("bir karakter giriniz: ");
    scanf("%c", &karakter);

    int value = (int)karakter;

    printf("\nküçük: %c\n", kucugeCevir(value));
    printf("büyük: %c\n", buyugeCevir(value));

    return 0;
}