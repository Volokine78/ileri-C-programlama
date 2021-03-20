#include <stdio.h>

void sirala();
void diziyiYazdir();

int sayilar[15] =
{102,97,34,65,324,21,546,2321,5,123,122121,7,13,675,0};

void sirala() {
    int i = 0, j = 0, yedek = 0;
    for (i = 0; i < 15; i++) {
        for (j = i + 1; j < 15; j++) {
            if (sayilar[j] < sayilar[i]) {
                yedek = sayilar[i];
                sayilar[i] = sayilar[j];
                sayilar[j] = yedek;
            }
        }
    }
}

void diziyiYazdir() {
    int i = 0;
    for (i = 0; i < 15; i++) {
        printf("%d, ", sayilar[i]);
    }
    printf("\n");
}

int main() {

    printf("dizi sıralamadan önce:\n");
    diziyiYazdir();
    printf("\ndizi sıralanıyor...\n");
    sirala();
    printf("\ndizi sıralandıktan sonra:\n");
    diziyiYazdir();
    return 0;
}