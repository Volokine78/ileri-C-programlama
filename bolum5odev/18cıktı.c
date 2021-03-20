#include <stdio.h>

int main()
{
    int size;
    char A = 'A';

    printf("Satır sayısı girin: ");
    scanf("%d", &size);

    for ( int row = 0 ; row < size ; row++) {
        for (int col = 0 ; col <= row ; col++) {
            printf("%c ", A + col);
        }
        printf("\n");
    }
    return 0;
}