#include <stdio.h>
#include <math.h>

float * kareKokAl(float*);

int main() {

    float sayi = 0;
    float * pt;

    printf("karekökü alınacak sayıyı girin: ");
    scanf("%f", &sayi);

    pt = kareKokAl(&sayi);

    printf("karekökü: %.2f\n", *pt);
    printf("sayı: %.2f", sayi);
    return 0;
}

float * kareKokAl(float * fPt) {
    *fPt = sqrt(*fPt);
    return fPt;
}