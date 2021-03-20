#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    srand(2);
    while(i < 6) {
        printf("%d. sayi: %d\n", i + 1, rand() % 49 + 1);
        i++;
    }
    return 0;
}