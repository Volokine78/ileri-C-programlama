#include <stdio.h>
#include <math.h>

int main()
{
    int sayi1;
    int sayi2;

    printf("İki adet sayı giriniz:\n");
    scanf("%d%d", &sayi1, &sayi2);

    float geoOrt = pow((sayi1 * sayi2), 0.5); // karekök

    printf("2 sayının geometrik ortalaması: %.2f\n", geoOrt);

    return 0;
}