#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;
    int rastgeleSayi = 0;
    for(i = 0; i < 10; i++) {
        rastgeleSayi = rand();
        printf("%d. rastgele sayi: %d\n", i + 1, rastgeleSayi);
    }
    return 0;
}