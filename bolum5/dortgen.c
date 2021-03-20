#include <stdio.h>

int main()
{
    int enuzunluk = 0;
    int boyuzunluk = 0;
    char karakter = 0;
    int i = 0;
    int j = 0;

    printf("en ve boy uzunlugunu giriniz: ");
    scanf("%d%d", &enuzunluk, &boyuzunluk);
    printf("\n\n");

    karakter=218;
    printf("%c", karakter);

    karakter=196;
    for (i = 0 ; i < enuzunluk ; i++)
    {
        printf("%c", karakter);
    }

    karakter=191;
    printf("%c\n", karakter);

    for (i = 0 ; i < boyuzunluk ; i++)
    {
        karakter=179;
        printf("%c", karakter);
        karakter=32;
        for (j = 0 ; j < enuzunluk ; j++)
        {
            printf("%c", karakter);
        }
        karakter=179;
        printf("%c\n", karakter);
    }

    karakter=192;
    printf("%c", karakter);

    karakter=196;
    for (i = 0 ; i < enuzunluk ; i++)
    {
        printf("%c", karakter);
    }

    karakter=217;
    printf("%c", karakter);

    return 0; // implicit conversion from 'int' to 'char'

}