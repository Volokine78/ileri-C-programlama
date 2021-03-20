#include <stdio.h>

int main()
{
    int unitCount = 3;
    int teamCount = 4;
    int unitATotal = 0, unitBTotal = 0, unitCTotal = 0;

    printf("Tüm ekipler ve birimler için satış miktarlarını giriniz: \n");

    for (int unit = 1; unit <= unitCount; unit++)
    {
        int sellAmount;
        for (int team = 1; team <= teamCount; team++)
        {
            printf("Bölüm %c Ekip%d: ", unit + 64, team);
            scanf("%d", &sellAmount);
            switch (unit)
            {
                case 1: unitATotal += sellAmount; break;
                case 2: unitBTotal += sellAmount; break;
                case 3: unitCTotal += sellAmount; break;
            }
        }
    }

    if (unitATotal > unitBTotal && unitATotal > unitCTotal)
    {
        printf("\nBirim A toplam %d satışı ile birincidir.\n", unitATotal);
    }
    else if (unitBTotal > unitATotal && unitBTotal > unitCTotal)
    {
        printf("\nBirim B toplam %d satışı ile birincidir.\n", unitBTotal);
    }
    else if (unitCTotal > unitATotal && unitCTotal > unitBTotal)
    {
        printf("\nBirim C toplam %d satışı ile birincidir.\n", unitCTotal);
    }
    return 0;
}