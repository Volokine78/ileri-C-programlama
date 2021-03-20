#include <stdio.h>

int main()
{
    int adet = 1;
    int adetPozitif = 0, adetNegatif = 0;
    int sayi;

    printf("10 adet pozitif veya negatif sayı girin:\n");

    do
    {
        printf("%d. sayıyı girin: ", adet);
        scanf("%d", &sayi);

        if (sayi > 0)
        {
            adet++;
            adetPozitif++;
        }
        else if (sayi < 0)
        {
            adet++;
            adetNegatif++;
        }
    }
    while (adet <= 10);

    printf("\npozitif sayı adedi: %d\n", adetPozitif);
    printf("negatif sayı adedi: %d\n", adetNegatif);

    return 0;
}