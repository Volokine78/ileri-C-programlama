#include <stdio.h>

int main()
{
    int size;
    int space;
    int row;
    int col;

    printf("Enter the number of size? ");
    scanf("%d", &size);

    for (row = size ; row >= 1 ; row--)
    {
        for (space = 0 ; space < size - row ; space++)
        {
            printf("  ");
        }
        for (col = row ; col <= 2 * row - 1; col++)
        {
            printf("* ");
        }
        for (col = 0 ; col < row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}