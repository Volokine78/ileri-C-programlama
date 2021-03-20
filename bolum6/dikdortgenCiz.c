#include <stdio.h>

void dikdortgenCiz(int enUzunluk, int boyUzunluk) {

    int i = 0;
    int j = 0;


    printf("┌");

    for (i = 0 ; i < enUzunluk ; i++)
    {
        printf("─");
    }

    printf("┐\n");

    for (i = 0 ; i < boyUzunluk ; i++)
    {
        printf("│");
        for (j = 0 ; j < enUzunluk ; j++)
        {
            printf(" ");
        }
        printf("│\n");
    }

    printf("└");

    for (i = 0 ; i < enUzunluk ; i++)
    {
        printf("─");
    }

    printf("┘\n");

}

int main()
{
    int enUzunluk;
    int boyUzunluk;
    int i = 0;

    printf("Dikdötgenin en ve boy ölçülerini girin: ");
    scanf("%d%d", &enUzunluk, &boyUzunluk);
    printf("\n");

    for(i = 0; i < 10; i++) {
    dikdortgenCiz(enUzunluk + i, boyUzunluk + i);
    printf("\n");
    }
    return 0;
}