#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int sayi1, sayi2;
    int rastgele = 0;

    printf("Hangi değerler arasında sayı üretilecek: ");
    scanf("%d%d", &sayi1, &sayi2);
    printf("%d - %d aralığı\n", sayi1, sayi2);

    srand(time(NULL));

    if (sayi1 != sayi2) {
        if (sayi2 > sayi1) {
            rastgele = rand() % (sayi2 - sayi1 + 1) + sayi1;
        } else {
            rastgele = rand() % (sayi1 - sayi2 + 1) + sayi2;
        }
    } else {
        rastgele = sayi1;
    }

    printf("sayınız: %d\n", rastgele);

    return 0;
}