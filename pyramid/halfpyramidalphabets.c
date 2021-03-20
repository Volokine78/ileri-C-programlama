#include <stdio.h>

int main() {
    int row, col;
    char input, alphabet = 'A';

    printf("Enter an uppercase character you want to print in the last row:  ");
    scanf("%c", &input);

    for (row = 1 ; row <= (input - 'A' + 1) ; row++) {
        for (col = 1 ; col <= row ; col++) {
            printf("%c ", alphabet);
        }
    ++alphabet;
    printf("\n");
    }
    return 0;
}