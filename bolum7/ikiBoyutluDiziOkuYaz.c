#include <stdio.h>

int main() {

    int i = 0, j = 0;
    int matris[3][4];

    for (i = 0; i < 3; i++) {        // satırlar için
        for (j = 0; j < 4; j++) {    // kolonlar için
            matris[i][j] = i + j;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matris[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}