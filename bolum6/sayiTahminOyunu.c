#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tutulanSayi = 0;
    int tahmin = 0;
    int kacTahmin = 0;
    int puan = 100;

    srand(time(NULL));
    tutulanSayi = rand() % 100 + 1;
    printf("1 ile 100 arasında rastgele bir sayı tuttum!\n");
    printf("haydi, tahmine başla!!\n");

    while (tutulanSayi > 0) {
        printf("\ntahminin(1..100):");
        scanf("%d", &tahmin);

        if (tahmin < 1 || tahmin > 100) {
            printf("oyunbozanlık yok, 1 ile 100 arasonda bir sayı girmelisin.\n");
            continue;
        }
        kacTahmin++;

        if (tahmin == tutulanSayi) {
            printf("tebrikler! %d. tahmininde bildin!:D\n", kacTahmin);
            break;
        } else if (tahmin > tutulanSayi) {
            printf("daha küçük bir sayı girmelisin!\n");
            puan -= 5;
        } else {
            printf("daha büyük bir sayı girmelisin!\n");
            puan -= 5;
        }
    }
    printf("\noyunu oynadığın için teşekkürler!:)\n");
    printf("puanın 100 üzerinden %d!:P\n", puan < 0 ? 0 : puan);
    return 0;
}