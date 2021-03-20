#include <stdio.h>

int main()
{
    int les, kpds, toefl, mulakat, disiplinDurumu;
    float notOrtalama = 0;

    printf("üniversiteye girmek için öğrenciden istenen koşulları girin:\n");

    do {
    printf("LES sonucunu girin:\n");
    scanf("%d", &les);
    }
    while (les < 0 || les > 100);

    do {
    printf("KPDS sonucnu girin:\n");
    scanf("%d", &kpds);
    }
    while (kpds < 0 || kpds > 100);

    do {
    printf("TOEFL sonucunu girin:\n");
    scanf("%d", &toefl);
    }
    while (toefl < 0 || toefl > 300);

    do {
    printf("Mülakat sonucunu girin:\n");
    scanf("%d", &mulakat);
    }
    while (mulakat < 0 || mulakat > 100);

    do {
    printf("Not ortalamasını girin:\n");
    scanf("%f", &notOrtalama);
    }
    while (notOrtalama < 0 || notOrtalama > 4);

    do {
    printf("Disiplin suçu bulunuyor ise 1 bulunmuyor ise 2 girin:\n");
    scanf("%d", &disiplinDurumu);
    }
    while (disiplinDurumu < 1 || disiplinDurumu > 2);

    if ((les == 70 || notOrtalama >= 3.00) && mulakat >= 60 && (kpds == 70 || toefl == 220))
    {
        printf("Tebrikler A üniversitesini kazandınız. Artık siz de bir işsizsiniz.\n");
    }
    else if ((les == 50 || notOrtalama >= 2.50) && mulakat >= 70 && (kpds == 60 || toefl == 180) && disiplinDurumu == 2)
    {
        printf("Tebrikler B üniversitesini kazandınız. Artık yeni meslek aramaya başlayabilin.\n");
    }
    else if ((les == 40 || notOrtalama == 2.20) && mulakat >= 80 && (kpds == 85 || toefl == 250))
    {
        printf("Tebrikler C üniversitesini kazandınız. Bitirince yurtdışına master a gitcen di mi? kaç kaç.\n");
    }
    return 0;
}