#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int zar = 0;
    int i = 0;
    int zarKacDefa[6] = {0, 0, 0, 0, 0, 0};

    srand(time(NULL));

    for (i = 0; i < 1000; i++) {
        zar = rand() % 6 + 1;
        zarKacDefa[zar - 1]++;
    }

    printf("zar\tkaç defa\n\n");

    for (i = 0; i < 6; i++) {
        printf("%d\t", i + 1);
        printf("%d\n", zarKacDefa[i]);
    }
    return 0;
}