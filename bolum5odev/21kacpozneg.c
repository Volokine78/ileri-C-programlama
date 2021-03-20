#include <stdio.h>

int main()
{
    int sayi;
    int adetPozitif = 0, adetNegatif = 0;

    printf("10 adet pozitif veya negatif sayı girin.\n");

    for (int adet = 1 ; adet <= 10 ; adet++)
    {
        printf("%d. sayıyı girin: ", adet);
        scanf("%d", &sayi);

        if (sayi > 0)
        {
            adetPozitif++;
        }
        else if (sayi < 0)
        {
            adetNegatif++;
        }
        else
        {
            adet--;
        }
    }

    printf("\nPozitif sayı adedi: %d\n", adetPozitif);
    printf("Negatif sayı adedi: %d\n", adetNegatif);

    return 0;
}