#include <stdio.h>

int main()
{
    int i = 1;
    int aktifsayi = 0;
    int enkucuk = 2147483646;
    int enbuyuk = -2147483647;

    do
    {
        printf("%d. sayi : ", i);
        scanf("%d", &aktifsayi);

        if (aktifsayi == -1) break;
        if (aktifsayi < enkucuk)
        enkucuk=aktifsayi;
        if (aktifsayi > enbuyuk)
        enbuyuk=aktifsayi;

        i++;
    }
    while (aktifsayi != -1);

    printf("\n\nen buyuk: %d\n", enbuyuk);
    printf("en kucuk: %d\n", enkucuk);

    return 0;
}