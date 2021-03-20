#include <stdio.h>

int main()
{
    int i = 1;
    float aktifnot = 0.0;
    float toplamnot = 0.0;

    do
    {
        printf("%d. not: ", i);
        scanf("%f", &aktifnot);

        if (aktifnot == -1) break;

        if (aktifnot < 0)
        {
            printf("pozitif bir sayi giriniz.\n");
            continue;
        }
        else
        {
            toplamnot+=aktifnot;
        }
        i++;
    }
    while (aktifnot != -1);
    printf("\n%d not girdiniz. \nOrtalamasi: %.2f\n", i - 1, toplamnot/ (i - 1));

    return 0;
}