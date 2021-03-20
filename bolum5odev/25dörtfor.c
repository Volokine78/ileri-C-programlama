#include <stdio.h>

int main()
{
    int size;
    int row;
    int col;
    char letter;

    printf("Bir karakter giriniz: ");
    scanf("%c", &letter);
    printf("Bir sayı giriniz: ");
    scanf("%d", &size);

    if (size % 2 == 0)
    {
        size = size + 1;
    }
    size = (size + 1) / 2;

    for (row = 1 ; row <= size ; row++)
    {
        for (col = 1 ; col <= size ; col++)
        {
           if (row + col < size + 1)
           {
               printf("  ");
           }
           else
           {
               printf("%c ", letter);
           }
        }
        for (col = 2 ; col <= row ; col++)
        {
            printf("%c ", letter);
        }

        printf("\n");
    }

    for (row = size - 1 ; row >= 1 ; row--)
    {
        for (col = 1 ; col <= size ; col++)
        {
           if (row + col < size + 1)
           {
               printf("  ");
           }
           else
           {
               printf("%c ", letter);
           }
        }
        for (col = 2 ; col <= row ; col++)
        {
            printf("%c ", letter);
        }
        printf("\n");
    }
    return 0;
}