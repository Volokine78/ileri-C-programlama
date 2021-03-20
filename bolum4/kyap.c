#include <stdio.h>

int main(void)
{
   double sayi = 0.0;

    printf("bir sayi giriniz: ");
    scanf("%lf", &sayi);

    printf("girdiğiniz sayı: %.1f\n", sayi);
    if (sayi > 0)
    {
        printf("bu sayi pozitiftir!\n");
    }
    else
    {
        printf("bu sayi negatiftir!\n");
    }

    return 0;
}