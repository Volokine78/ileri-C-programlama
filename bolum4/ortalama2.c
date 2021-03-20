#include <stdio.h>

int main()
{
    int notSayisi = 0;
    int aktifNot = 0;
    float toplam = 0;
    float ortalama = 0;

    printf("hoşgeldiniz. Not girişini tamamlamak için -1 e basın. \n");

    while (aktifNot != -1)
    {
        printf("%d. notu giriniz: ", notSayisi + 1);
        scanf("%d", &aktifNot);
        if (aktifNot != -1)
        {
            toplam += aktifNot;
            notSayisi++;
        }
    }

    ortalama = toplam / notSayisi;
    printf("\n%d notun ortalamasi: %.2f", notSayisi, ortalama);
    printf("\n");

    return 0;
}