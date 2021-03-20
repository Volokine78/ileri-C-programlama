#include <stdio.h>

int main()
{
    int kentmesafe = 850;
    int arac1_hiz = 95;
    int arac2_hiz = 55;
    int arac1_konum = 0;
    int arac2_konum = 70;
    int aktifsaat = 0;

    printf("saat\t\t");
    printf("1.arac konum\t");
    printf("2.arac konum\n");
    printf("-------\t\t-------\t\t-------\n\n");

    do
    {
        aktifsaat++;
        arac1_konum += arac1_hiz;
        arac2_konum += arac2_hiz;

        printf("%d\t\t", aktifsaat);
        if (arac1_konum < kentmesafe)
        {
            printf("%d\t\t", arac1_konum);
        }
        else
        {
            printf("arac vardi\t");
        }

        if (arac2_konum < kentmesafe)
        {
            printf("%d", arac2_konum);
        }
        else
        {
            printf("arac vardi");
        }
        printf("\n");
    }
    while (arac1_konum < kentmesafe || arac2_konum < kentmesafe);
    return 0;
}