#include <stdio.h>

int main()
{
    int size = 4;
    int row, col;
    char letter;

    printf("Bir harf giriniz: ");
    scanf("%c", &letter);

    for (row = 1 ; row <= size ; row++)
    {
        for (col = 1 ; col <= row ; col++)
        {
            char c = ' ';
            if (row == col) {
                c = letter;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    for (row = (size - 1) ; row >= 1 ; row--)
    {
        for (col = 1 ; col <= row ; col++)
        {
            char c = ' ';
            if (row == col) {
                c = letter;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}