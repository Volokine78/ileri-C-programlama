#include <stdio.h>

int main(void)
{
    int sayi = 0;

    printf("bir sayı giriniz: \n");
    scanf("%d", &sayi);

    if (sayi % 2 == 0 && sayi % 3 == 0)
    {
        printf("girdiginiz sayi 6 ya tam bolunur!\n");
    }
    else
    {
        printf("girdiginiz sayi 6 ya tam bolunmez!\n");
    }

    return 0;
}