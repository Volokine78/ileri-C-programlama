#include <stdio.h>
#include <math.h>

int main() {
    double sayi = 0;
    double toplam = 0;
    int i = 1;
    char letter = 97; // ???

    printf("Sayıların mutlak değerlerinin toplamı:\n");
    printf("Sayı girişini bitirmek için a girin.\n");

    do {
    printf("%d. sayıyı girin: ", i++);
    scanf("%lf%c", &sayi, &letter);
    toplam += fabs(sayi);
    } while(letter == 97);

    printf("Toplam: %.2f\n", toplam);
    return 0;
}