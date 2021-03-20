#include <stdio.h>

int main() {

    int matrix[2][2];

    printf("2x2 matris için değerleri girin:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d,%d değeri:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("matrisin tersi hesaplanıyor...\n");

    double det;
    det = 1 / (double)((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]));
    int matrix2[2][2] = {
                        {matrix[1][1], -matrix[0][1]},
                        {-matrix[1][0], matrix[0][0]}
                      };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2lf ", det * matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}