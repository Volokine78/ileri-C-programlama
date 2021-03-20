#include <stdio.h>

int main() {
    int size, row, col;

    printf("Enter number of size ");
    scanf("%d", &size);

    for (row = size ; row >= 1 ; --row) {
        for (col = 1 ; col <= row ; ++col) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}