#include <stdio.h>
#include <math.h>

int main() {

     int i;
     double toplam = 0;
     double a = 0;

     printf("serinin ilk 15 elemanının toplamı: \n\n");

     for(i = 1; i <= 15; i++) {
         a = 1 / (pow(2,i));
         toplam += a;
     }
     printf("toplam: %f\n", toplam);
     return 0;
}