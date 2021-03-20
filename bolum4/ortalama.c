#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int notsayisi = 0;
    int aktifnot = 0;
    float toplam = 0;
    float ortalama = 0;

    yeninotgir:

    printf("%d. notu giriniz: ", notsayisi + 1);
    scanf("%d", &aktifnot);
    if (aktifnot==-1)
    {
        ortalama = toplam / notsayisi;
        printf("\n%d notun ortalamasi: %.2f", notsayisi, ortalama);
        printf("\n");
        return 0;
    }
    notsayisi++;
    toplam += aktifnot;

    goto yeninotgir;
    return 0;
}