#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int tekKitapFiyati = 5; // TL
    int siparismiktari = 0;
    float indirimorani = 0;
    float indirimsiztutar = 0;
    float indirimtutari = 0;
    float toplamtutar = 0;

    printf("siparis adetini giriniz: ");
    scanf("%d", &siparismiktari);

    if (siparismiktari >= 50)
    {
        indirimorani = 0.25;
    }
    else
    {
        if (siparismiktari >= 20 && siparismiktari < 50)
        {
            indirimorani = 0.15;
        }
        else
        {
            if (siparismiktari >= 10 && siparismiktari < 20)
            {
                indirimorani = 0.10;
            }
        }
    }

    indirimsiztutar = siparismiktari * tekKitapFiyati;
    printf("indirimsiz tutar: %.2f TL.\n", indirimsiztutar);

    indirimtutari = siparismiktari * tekKitapFiyati * indirimorani;
    printf("indirim tutari: %.2f TL.\n", indirimtutari);

    toplamtutar = indirimsiztutar - indirimtutari;
    printf("siparislerin toplam tutari: %.2f TL.\n", toplamtutar);

    return 0;
}