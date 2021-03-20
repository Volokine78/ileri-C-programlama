#include <stdio.h>

int main(void)
{
    printf("alanı hesaplamak için kosegen mi kenar mi?\n");
    printf("kosegen için 1 girin\n");
    printf("kenar için 2 girin\n");
    printf("kapatmak için herhangi tuş girin\n");

    int secim = 0;
    scanf("%d", &secim);

    if(secim == 1)
    {
        int kosegen;
        printf("köşegen uzunluğunu gir: ");
        scanf("%d", &kosegen);
        printf("Alan: %d", kosegen*kosegen/2);
    }
    if (secim == 2)
    {
        int kenar;
        printf("kenar uzunluğunu gir: ");
        scanf("%d", &kenar);
        printf("Alan: %d", kenar*kenar);
    }

    printf("\n");
    return 0;
}