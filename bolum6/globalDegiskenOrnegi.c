#include <stdio.h>

int a = 13;

//void birArtir(); // aşağıda tanımlıyor neden bir daha yazmış ?
//void birAzalt();    fonksiyonu main den önce yazmış.

void birArtir() {
    a++;
}

void birAzalt() {
    a--;
}

int main() {
    printf("global değişkenin ilk değeri: %d\n\n", a);

    printf("değeri bir artır...\n");
    birArtir();
    printf("global değişkenin değeri: %d\n\n", a);

    printf("değeri iki azalt...\n");
    birAzalt();
    birAzalt();
    printf("global değişkenin değeri: %d\n", a);

    return 0;
}