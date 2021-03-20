#include <stdio.h>
#include <math.h>

int main() {

     int i;

     printf("1...100 sayılarının karekökü:\n\n");
     for (i = 1; i <= 100; i++) {
         printf("karekök %d: %f\n", i, sqrt(i));
     }
     return 0;
}