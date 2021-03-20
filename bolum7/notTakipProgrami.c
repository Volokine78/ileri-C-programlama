#include <stdio.h>

void tumNotlariYazdir();
void notYazdir(int, int);
double sinavOrtalamasiniBul(int);
int enYuksekNotuBul(int);
int enDusukNotuBul(int);
int enYuksekOrtBul();
int enDusukOrtBul();
void sinavNotuElliUstu(int);
void sinavNotuOtuzAltı(int);
void ogrenciSinavOrtBul();

int edebiyatNotlari[15][4] = {
    {112,12,63,94},
    {113,67,21,78},
    {114,90,42,76},
    {115,54,12,65},
    {116,100,70,87},
    {117,98,34,67},
    {118,56,12,32},
    {119,12,65,30},
    {120,87,34,12},
    {121,12,78,34},
    {122,87,34,12},
    {123,99,87,17},
    {124,30,40,50},
    {125,54,100,45},
    {126,32,15,61}
};

int main() {

    tumNotlariYazdir();

    notYazdir(123,2);  // 123 nolu öğrencinin 2. sınav notu

    printf("1. sınavın ortalaması: %.2f\n", sinavOrtalamasiniBul(1));

    printf("3. sınavın en yüksek notu: %i\n", enYuksekNotuBul(3));

    printf("2. sınavın en düşük notu: %i\n", enDusukNotuBul(2));

    printf("3 sınav ortalaması en yüksek olan öğrenci: %i\n", enYuksekOrtBul());

    printf("3 sınav ortalaması en düşük olan öğrenci: %i\n\n", enDusukOrtBul());

    sinavNotuElliUstu(2);

    sinavNotuOtuzAltı(3);

    ogrenciSinavOrtBul();

    return 0;
}

void tumNotlariYazdir() {
    int i = 0, j = 0;

    printf("Edebiyat sınavları listesi:\n\n");
    printf("No\tS1\tS2\tS3\n");
    printf("--\t--\t--\t--\n");
    for (i = 0; i < 15; i++) {
        printf("%d\t", edebiyatNotlari[i][0]);
        for (j = 1; j < 4; j++) {
            printf("%d\t", edebiyatNotlari[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void notYazdir(int ogrenciNo, int hangiNot) {
    int i = 0, j = 0;
    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][0] == ogrenciNo) {
            printf("\nnumarası: %d\n", edebiyatNotlari[i][0]);
            if (hangiNot > 0 && hangiNot < 4) {
                printf("%d. notu: %d\n", hangiNot, edebiyatNotlari[i][hangiNot]);
            } else {
                printf("notları:  ");
                for (j = 1; j < 4; j++) {
                    printf("%d  ", edebiyatNotlari[i][j]);
                }
            }
        return;
        }
    }
    printf("aradığınız kayıt bulunamadı.\n");
}

double sinavOrtalamasiniBul(int hangiSinav) {
    int i = 0;
    double ort = 0;
    int toplam = 0;

    if (hangiSinav < 1 || hangiSinav > 3) {
        printf("1-3 arasında bir değer girmelisiniz.\n");
        return -1;                                          // return -1 ???
    }

    for (i = 0; i < 15; i++) {
        toplam += edebiyatNotlari[i][hangiSinav];
    }
    ort = toplam / 15;
    return ort;
}

int enYuksekNotuBul(int hangiSinav) {
    int i = 0;
    int max = 0;

    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][hangiSinav] > max) {
            max = edebiyatNotlari[i][hangiSinav];
        }
    }
    return max;
}

int enDusukNotuBul(int hangiSinav) {
    int i = 0;
    int min = 100;

    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][hangiSinav] < min) {
            min = edebiyatNotlari[i][hangiSinav];
        }
    }
    return min;
}

int enYuksekOrtBul() {
    int i = 0, j = 0;
    int toplamMax = 0;
    int ogrenciNo = 0;

    for (i = 0; i < 15; i++) {
        int toplam = 0;
        for (j = 1; j < 4; j++) {
            toplam += edebiyatNotlari[i][j];
        }
        if (toplam > toplamMax) {
            toplamMax = toplam;
            ogrenciNo = edebiyatNotlari[i][0];
        }
    }
    return ogrenciNo;
}

int enDusukOrtBul() {
    int i = 0, j = 0;
    int toplamMin = 301;
    int ogrenciNo = 0;

    for (i = 0; i < 15; i++) {
        int toplam = 0;
        for (j = 1; j < 4; j++) {
            toplam += edebiyatNotlari[i][j];
        }
        if (toplam < toplamMin) {
            toplamMin = toplam;
            ogrenciNo = edebiyatNotlari[i][0];
        }
    }
    return ogrenciNo;
}

void sinavNotuElliUstu(int hangiSinav) {

    int i = 0;
    int adet = 1;

    printf("%d. sınav notu 50'nin üstünde olan öğrenciler:\n\n", hangiSinav);

    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][hangiSinav] > 50) {
            printf("%d. %d nolu öğrenci\n", adet, edebiyatNotlari[i][0]);
            adet++;
        }
    }
    printf("\n");
}

void sinavNotuOtuzAltı(int hangiSinav) {

    int i = 0;
    int adet = 1;

    printf("%d. sınav notu 30'un altında olan öğrenciler:\n\n", hangiSinav);

    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][hangiSinav] < 30) {
            printf("%d. %d nolu öğrenci\n", adet, edebiyatNotlari[i][0]);
            adet++;
        }
    }
    printf("\n");
}

void ogrenciSinavOrtBul() {
    int ogrenciNo;
    double ort = 0;
    int i = 0, j = 0;
    double toplam = 0;

    do {
        printf("Öğrenci no giriniz: ");
        scanf("%d", &ogrenciNo);
    } while (ogrenciNo > 126 || ogrenciNo < 112);

    for (i = 0; i < 15; i++) {
        if (edebiyatNotlari[i][0] == ogrenciNo) {
            for (j = 1; j < 4; j++) {
                toplam += edebiyatNotlari[i][j];
            }
            ort = toplam / 3;
            break;
        }
    }
    printf("%d nolu öğrencinin 3 sınav ortalaması: %.2f\n", ogrenciNo, ort);
}