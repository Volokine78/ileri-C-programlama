#include <stdio.h>

int main() {

    int i = 0;
    int secim = 0;
    int indeks = 0;
    double deger = 0;
    double dizi[10];

    for (i = 0; i < 10; i++) {
        dizi[i] = 0;
    }

    do {
        printf("seçiminizi yapınız (çıkmak için -1):\n\n");
        printf("\t1. diziye yazma\n");
        printf("\t2. diziden okuma\n");
        scanf("%d", &secim);

        if (secim == -1) break;

        printf("dizi indeksi giriniz:");
        scanf("%d", &indeks);

        if (indeks < 0 || indeks > 9) {
            printf("indeks 0-9 aralığında olmalıdır.\n");
            continue;
        }
        switch (secim) {
            case 1:
                printf("\ndegeri giriniz:");
                scanf("%lf", &deger);
                dizi[indeks] = deger;
                printf("yazma işlemi başarılı\n\n");
                break;
            case 2:
                printf("dizi[%d]: %f\n\n", indeks, dizi[indeks]);
                break;
            default:
                printf("seciminizi 1 veya 2 olarak yapmalısınız\n");
        }
    } while (secim != -1);
    return 0;
}