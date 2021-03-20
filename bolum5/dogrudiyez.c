#include <stdio.h>

int main()
{
    int size;
    int direction;

    printf("diyez satır sayısı? ");
    scanf("%d", &size);

    printf("düz için 1 , ters için 0 girin ");
    scanf("%d", &direction);

    for (int row = 0; row < size; row++)
    {
        if (direction == 1)
        {
            for (int col = 0; col <= row ; col++) {
                printf("#");
            }
        }
        else if (direction == 0)
        {
            for (int col = 0; col < size - row; col++) {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}