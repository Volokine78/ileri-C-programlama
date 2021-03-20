#include <stdio.h>
#include <math.h>

int main() {

    double sayi = 0;

    printf("durdurmak için -1 giriniz...\n\n");
    while(sayi != -1) {
        printf("bir sayı giriniz: ");
        scanf("%lf", &sayi);
        if(sayi == -1) break;
        printf("ceil(): \t%f\n", ceil(sayi));
        printf("floor(): \t%f\n", floor(sayi));
    }
    return 0;
}