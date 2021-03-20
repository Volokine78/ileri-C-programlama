#include <stdio.h>

int main()
{
    int birimA, birimB, birimC;
    int ekipA1, ekipA2, ekipA3, ekipA4,
        ekipB1, ekipB2, ekipB3, ekipB4,
        ekipC1, ekipC2, ekipC3, ekipC4;

    printf("Birim A,B,C ve ekiplerinin(1,2,3,4) satış miktarlarını girin:\n");

    printf("Birim A, Ekip 1: \n");
    scanf("%d", &ekipA1);
    printf("Birim A, Ekip 2: \n");
    scanf("%d", &ekipA2);
    printf("Birim A, Ekip 3: \n");
    scanf("%d", &ekipA3);
    printf("Birim A, Ekip 4: \n");
    scanf("%d", &ekipA4);
    printf("Birim B, Ekip 1: \n");
    scanf("%d", &ekipB1);
    printf("Birim B, Ekip 2: \n");
    scanf("%d", &ekipB2);
    printf("Birim B, Ekip 3: \n");
    scanf("%d", &ekipB3);
    printf("Birim B, Ekip 4: \n");
    scanf("%d", &ekipB4);
    printf("Birim C, Ekip 1: \n");
    scanf("%d", &ekipC1);
    printf("Birim C, Ekip 2: \n");
    scanf("%d", &ekipC2);
    printf("Birim C, Ekip 3: \n");
    scanf("%d", &ekipC3);
    printf("Birim C, Ekip 4: \n");
    scanf("%d", &ekipC4);

    int toplamBirimA = ekipA1 + ekipA2 + ekipA3 + ekipA4;
    int toplamBirimB = ekipB1 + ekipB2 + ekipB3 + ekipB4;
    int toplamBirimC = ekipC1 + ekipC2 + ekipC3 + ekipC4;

    if (toplamBirimA > toplamBirimB && toplamBirimA > toplamBirimC)
    {
        printf("\nBirim A toplam %d satışı ile birincidir.\n", toplamBirimA);
    }
    else if (toplamBirimB > toplamBirimA && toplamBirimB > toplamBirimC)
    {
        printf("\nBirim B toplam %d satışı ile birincidir.\n", toplamBirimB);
    }
    else if (toplamBirimC > toplamBirimA && toplamBirimC > toplamBirimB)
    {
        printf("\nBirim C toplam %d satışı ile birincidir.\n", toplamBirimC);
    }
    return 0;
}