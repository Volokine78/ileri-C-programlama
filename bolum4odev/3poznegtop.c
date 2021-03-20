#include <stdio.h>

int main()
{
    int adet = 1;
    int sayi;
    int toplamPozitif = 0, toplamNegatif = 0;

    printf("10 adet pozitif veya negatif sayı giriniz:\n");

    do
    {
        printf("%d. sayıyı girin: ", adet);
        scanf("%d", &sayi);

        if (sayi > 0)
        {
            toplamPozitif += sayi;
            adet++;
        }
        else if (sayi < 0)
        {
            toplamNegatif += sayi;
            adet++;
        }
        else
        {
            printf("Sıfır girme lan pezevenk!\n");
        }
    }
    while (adet <= 10);

    printf("Pozitif sayıların toplamı: %d\n", toplamPozitif);
    printf("Negatif sayıların toplamı: %d\n", toplamNegatif);

    return 0;
}