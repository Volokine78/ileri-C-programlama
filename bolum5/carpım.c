#include <stdio.h>

int main(void)
{
    int sayi = 0;
    int index = 1;

    do
    {
        printf("1 - 10 aralıgında bir sayi giriniz.\n");
        scanf("%d", &sayi);
    }
    while (sayi < 1 || sayi > 10);

    while(index <= 10)
    {
        printf("%d x %d = %d\n", sayi, index, sayi*index);
        index++;
    }
    return 0;
}