#include <stdio.h>

int main() {

    double ortalama = 0;
    double sayilar[3];

    printf("3 sayı giriniz: ");
    scanf("%lf%lf%lf", &sayilar[0], &sayilar[1], &sayilar[2]);

    ortalama = (sayilar[0] + sayilar[1] + sayilar[2]) / 3;

    printf("ortalama: %.2f\n", ortalama);

    return 0;
}