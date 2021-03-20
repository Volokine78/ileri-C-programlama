#include <stdio.h>

int main()
{
    int sayi;
    int enBuyuk = -2147483648; // 2 üzeri 31 = 2147483648
    int enKucuk = 2147483647;
    int adet = 0;
    printf("İstediğiniz adette sayi girin. Bitirmek için -1 girin.\n");

    do
    {
        printf("%d. sayıyı girin: ", ++adet);
        scanf("%d", &sayi);
        if (sayi == -1) break;
        if (sayi < enKucuk)
        {
            enKucuk = sayi;
        }
        if (sayi > enBuyuk)
        {
            enBuyuk = sayi;
        }
    }
    while (sayi != -1);

    printf("\nEn küçük sayı: %d\n", enKucuk);
    printf("En büyük sayı: %d\n", enBuyuk);

    return 0;
}