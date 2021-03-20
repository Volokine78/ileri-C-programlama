#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i = 1;
    int sayi1 = 0;
    int sayi2 = 0;
    int sayi3 = 0;
    int sayi4 = 0;
    int sayi5 = 0;
    int sayi6 = 0;
    int rastgeleSayi = 0;

    srand(time(NULL));

    while(i <= 6) {
        rastgeleSayi = (rand() % 49) + 1;
        if(rastgeleSayi != sayi1 && rastgeleSayi != sayi2 &&
           rastgeleSayi != sayi3 && rastgeleSayi != sayi4 &&
           rastgeleSayi != sayi5 && rastgeleSayi != sayi6) {

            switch (i) {
                case 1: sayi1 = rastgeleSayi; break;
                case 2: sayi2 = rastgeleSayi; break;
                case 3: sayi3 = rastgeleSayi; break;
                case 4: sayi4 = rastgeleSayi; break;
                case 5: sayi5 = rastgeleSayi; break;
                case 6: sayi6 = rastgeleSayi; break;
            }
        } else {
            continue;
        }
        i++;
    }
    printf("işte sayılarınız, bol şans!\n\n");
    printf("1. sayı: %d\n", sayi1);
    printf("2. sayı: %d\n", sayi2);
    printf("3. sayı: %d\n", sayi3);
    printf("4. sayı: %d\n", sayi4);
    printf("5. sayı: %d\n", sayi5);
    printf("6. sayı: %d\n", sayi6);
    return 0;
}