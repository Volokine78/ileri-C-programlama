#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    int sayiToplam = 0;

    printf("İki sayı giriniz:\n");
    scanf("%d%d", &sayi1, &sayi2);

    if (sayi1 < sayi2) // 19, 27 aralığı bu if ten çalışacak
    {
        for (int i = sayi1 ; i <= sayi2 ; i++)
        {
            sayiToplam += i;
            printf("%d%s", i, i != sayi2 ? "+" : " ");
        }
        printf("= %d\n", sayiToplam);
    }
    else if (sayi1 > sayi2)
    {
        for (int i = sayi2 ; i <= sayi1 ; i++)
        {
            sayiToplam += i;
            printf("%d%s", i, i != sayi1 ? "+" : " ");
        }
        printf("= %d\n", sayiToplam);
    }
    else
    {
        sayiToplam = sayi1 * 2;
        printf("%d+%d = %d\n", sayi1, sayi2, sayiToplam);
    }
    return 0;
}