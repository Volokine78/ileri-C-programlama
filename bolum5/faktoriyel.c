#include <stdio.h>

int main()
{
    int i = 1;
    int sayi;
    double faktoriyel = 1;

    printf("faktoriyeli bulunacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    i = sayi;
    while (i > 1)
    {
        faktoriyel = faktoriyel * i;
        i--;
    }

    printf("%d! = %.2f\n", sayi, faktoriyel);

    return 0;
}