#include <stdio.h>

int main()
{
    int size;
    int space;
    int row;
    int col;
    int coef = 1;

    printf("Pascal üçgeninin satır sayısını girin: ");
    scanf("%d", &size);

    for (row = 0 ; row < size ; row++)
    {
        for (space = 1 ; space <= size - row; space++)
        {
            printf("  ");
        }
        for (col = 0 ; col <= row ; col++)
        {
            if (col == 0 || row == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (row - col + 1) / col;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}