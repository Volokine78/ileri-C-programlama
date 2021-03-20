#include <stdio.h>

int main() {

    int n;

    printf("Kaç adet sayıyı çevirsin:");
    scanf("%d", &n);

    int sayilar[n];
    int i = 0;
    int yedek = 0;

    printf("%d adet sayı girin:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d. sayı: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    printf("dizi dönüştürülüyor...\n");

    for (i = 0; i < n/2; i++) {
        yedek = sayilar[i];
        sayilar[i] = sayilar[(n - 1) - i];
        sayilar[(n - 1) - i] = yedek;
    }

    printf("sonuç:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");
    return 0;
}