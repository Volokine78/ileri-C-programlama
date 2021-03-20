#include <stdio.h>

int main()
{
    int i = 1;
    double aktifkaredekibugday = 1;
    double toplambugday = 0;

    for (i = 1 ; i <= 64 ; i++)
    {
        printf("%d. kare icin verilecek bugday sayisi: %20.0f\n", i, aktifkaredekibugday);
        toplambugday+=aktifkaredekibugday;
        aktifkaredekibugday*=2;
    }
    printf("\nbilgine verilecek toplam bugday sayisi: %20.0f\n", toplambugday);

    return 0;
}