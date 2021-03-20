#include <stdio.h>
#include <float.h>

int main() {

    int i = 0;
    double sayilar[10];
    double enKucuk = DBL_MAX;
    double enBuyuk = DBL_MIN;

    printf("10 adet sayı giriniz:\n\n");

    do {
        printf("%d. sayıyı giriniz:", i + 1);
        scanf("%lf", &sayilar[i]);
        if (sayilar[i] < enKucuk) enKucuk = sayilar[i];
        if (sayilar[i] > enBuyuk) enBuyuk = sayilar[i];
        i++;
    } while (i < 10 && i >= 0);

    printf("Dizinin en küçüğü: %.2f\n", enKucuk);
    printf("Dizinin en büyüğü: %.2f\n", enBuyuk);

    return 0;
}