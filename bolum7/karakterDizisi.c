#include <stdio.h>

int main() {

    int i = 0;
    char karakterler[256];

    for (i = 0; i < 256; i++) {
        karakterler[i] = i;
        printf("%c ", karakterler[i]);
        if (i % 20 == 0) printf("\n");
    }
    return 0;
}