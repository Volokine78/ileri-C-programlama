#include <stdio.h>

int main()
{
    int n;
    float i;
    float sonuc = 0.0;

    printf("Bir n değeri giriniz: ");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        printf("[1 / (%.0f * %.0f)] %s", i, i + 1, i != n ? " + " : " ");
        sonuc += (1 / (i * (i + 1)));
    }
    printf("=  %.10f\n", sonuc);

    return 0;
}