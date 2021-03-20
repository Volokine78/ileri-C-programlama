#include <stdio.h>

void satislariEkranaYaz();
void satislariOku();
void haftalikKazanc();

int satislar[6][2][2];

int main() {

    satislariOku();
    satislariEkranaYaz();
    haftalikKazanc();
    return 0;
}

void satislariOku() {

    int i = 0, j = 0, k = 0;

    for (i = 0; i < 6; i++) {
        printf("%d. satış temsilcisi\n\n", i + 1);
        for (j = 0; j < 2; j++) {
            if (j == 0) printf("teknik kitap\n\n");
            else printf("\npsikoloji kitabı\n\n");
            for (k = 0; k < 2; k++) {
                if (k == 0) printf("üniversiteye ");
                else printf("kırtasiyeye ");
                printf("kaç adet sattı: ");
                scanf("%d", &satislar[i][j][k]);
            }
        }
        printf("\n");
    }
}

void satislariEkranaYaz() {

    int i = 0, j = 0, k = 0;
    int uniToplam = 0;
    int kirtasiyeToplam = 0;
    int teknikKitapToplam = 0;
    int psiKitapToplam = 0;

    for (i = 0; i < 6; i++) {               // 6 satış temsilcisi

        for (j = 0; j < 2; j++) {           // 2 kitap türü
            uniToplam += satislar[i][j][0];
            kirtasiyeToplam += satislar[i][j][1];
        }
        for (k = 0; k < 2; k++) {           // 2 farklı yer
            teknikKitapToplam += satislar[i][0][k];
            psiKitapToplam += satislar[i][1][k];
        }
    }
    printf("\nuni. toplam %d kitap satıldı.\n", uniToplam);
    printf("kırtasiye toplam %d kitap satıldı.\n", kirtasiyeToplam);
    printf("\nToplam %d teknik kitap satıldı.\n", teknikKitapToplam);
    printf("Toplam %d psikoloji kitabı satıldı.\n", psiKitapToplam);
}

void haftalikKazanc() {

    int i = 0, j = 0, k = 0;
    int ToplamKazanc = 0;
    int teknikKitapToplam = 0;
    int psiKitapToplam = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                for (k = 0; k < 2; k++) {
                    teknikKitapToplam += satislar[i][j][k] * (k == 0 ? 4 : 6);
                    //if (k == 0) teknikKitapToplam += satislar[i][0][0] * 4;
                    //else teknikKitapToplam += satislar[i][0][1] * 6;
                }
            } else {
                for (k = 0; k < 2; k++) {
                    if (k == 0) psiKitapToplam += satislar[i][1][0];
                    else psiKitapToplam += satislar[i][1][1] * 2;
                }
            }
        }
    }
    ToplamKazanc = teknikKitapToplam + psiKitapToplam;
    printf("\nTeknik kitap satışından toplam kazanç: %d milyon\n", teknikKitapToplam);
    printf("Psikoloji kitaplarının satışından toplam kazanç: %d milyon\n", psiKitapToplam);
    printf("Kitabevinin haftalık kazancı: %d milyon\n", ToplamKazanc);
}