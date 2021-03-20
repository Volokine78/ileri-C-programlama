#include <stdio.h>

int main()
{
    int size;
    int space;
    int row;
    int col = 0;

    printf("Enter number of size? ");
    scanf("%d", &size);

    for (row = 1 ; row <= size ; ++row, col = 0)
    {
        for (space = 1 ; space <= size - row ; ++space)
        {
            printf("  ");
        }
        while (col != 2 * row - 1)
        {
            printf("* ");
            ++col;
        }
        printf("\n");
    }
    return 0;
}