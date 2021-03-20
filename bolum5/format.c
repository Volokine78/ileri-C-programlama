#include <stdio.h>

int main()
{
    double sayi = 1234567.1234;

    printf("%f\n", sayi);
    printf("%8f\n", sayi);
    printf("%8.2f\n", sayi);
    printf("%11.2f\n", sayi);
    printf("%10.3f\n", sayi);
    printf("-%-10s-\n", "Tolga");
}