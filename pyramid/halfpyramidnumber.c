#include <stdio.h>

int main() {
    int size, row, col;

    printf("Enter the number of size: ");
    scanf("%d", &size);

    for (row = 1 ; row <= size ; row++) {
        for (col = 1 ; col <= row ; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}