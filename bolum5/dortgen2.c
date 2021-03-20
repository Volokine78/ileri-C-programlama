#include <stdio.h>

int main()
{
    int enuzunluk = 0;
    int boyuzunluk = 0;
    int i = 0;
    int j = 0;

    printf("en ve boy uzunlugunu giriniz: ");
    scanf("%d%d", &enuzunluk, &boyuzunluk);
    printf("\n\n");

    printf("┌");

    for (i = 0 ; i < enuzunluk ; i++)
    {
        printf("─");
    }

    printf("┐\n");

    for (i = 0 ; i < boyuzunluk ; i++)
    {
        printf("│");
        for (j = 0 ; j < enuzunluk ; j++)
        {
            printf(" ");
        }
        printf("│\n");
    }

    printf("└");

    for (i = 0 ; i < enuzunluk ; i++)
    {
        printf("─");
    }

    printf("┘");

    printf("\n\n");
    return 0;
}