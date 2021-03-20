#include <stdio.h>

double usAl(double a, int b) {

    double sonuc = 1;
    int i = 0;
    if(b >= 0) {
        for(i = 0; i < b; i++) {
        sonuc *= a;
        }
    }
    else {
        for(i = 0; i > b; i--) {
        sonuc *= 1/a;
        }
    }
    return sonuc;
}

int main() {
    double taban;
    int us;
    double sonuc;
    printf("taban ve üs değerlerini giriniz: ");
    scanf("%lf%d", &taban, &us);

    sonuc = usAl(taban,us);

    printf("%.2f üzeri %d: %.4f\n", taban, us, sonuc);

    return 0;
}