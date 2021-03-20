#include <stdio.h>

int main() {

    char karakterler[8];

    printf("ilk elemanın adresi: \t%p\n", &karakterler[0]);
    printf("dizinin ismi: \t\t%p\n", karakterler);

    return 0;
}