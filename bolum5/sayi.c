#include <stdio.h>

int main()
{
    int sayi = 0;
    int index = 0;
    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    do
    {
        printf("%d ", ++index);
    }
    while (index < sayi);
    printf("\n");
    return 0;
}