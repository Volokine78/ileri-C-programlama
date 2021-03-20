#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float i;
    float sonuc = 0.0;

    printf("n değerini giriniz: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        if (i == 1) {
            printf("1");
        }
        else {
        printf(" + (1/%.0f)", i);
        }
        sonuc += (1/i);
    }
    printf("\n");
    printf("Dizinin sonucu : %.10f\n" ,sonuc);

    return 0;
}