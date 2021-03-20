#include <stdio.h>

double kareAl(double*);  // *double hatalı!!

int main() {

    double sonuc;
    double sayi;

    printf("bir sayı giriniz: ");
    scanf("%lf", &sayi);

    sonuc = kareAl(&sayi);
    printf("karesi: %f\n", sonuc);

    return 0;
}

double kareAl(double * dPt) {
    return *dPt * *dPt;
}