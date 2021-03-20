#include <stdio.h>

int main()
{
    int sayi = 0;
    int index = 2;

    printf("test edilecek pozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi < 0)
    {
        printf("pozitif sayi dedik anlamadin mi\n");
        return 0;
    }
    while (index < sayi / 2)
    {
        if (sayi % index == 0)
        {
            printf("%d, %d sayisina bolunebildigi icin asal sayi degildir.\n", sayi, index);
            return 0;
        }
        index++;
    }
    printf("%d bir asal sayidir.\n", sayi);
    return 0;
}