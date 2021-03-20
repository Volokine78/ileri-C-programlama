#include <stdio.h>

int main()
{
    int size;
    int space;
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
    for (row = 1 ; row <= size ; row++, col = 0)
    {
        for (space = 1 ; space <= size - row ; space++)
        {
            printf("  ");
        }
        while (col != 2 * row - 1)
        {
            printf("%c ", letter);
            ++col;
        }
        printf("\n");
    }

    for (row = size - 1 ; row >= 1 ; row--)
    {
        for (space = 0 ; space < size - row ; space++)
        {
            printf("  ");
        }
        for (col = row ; col <= 2 * row - 1; col++)
        {
            printf("%c ", letter);
        }
        for (col = 0 ; col < row - 1 ; col++)
        {
            printf("%c ", letter);
        }
        printf("\n");
    }
    return 0;
}