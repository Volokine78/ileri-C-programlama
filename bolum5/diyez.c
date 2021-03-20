#include <stdio.h>

int main()
{
    int sayi;
    int satir = 0;
    int sutun = 0;
    int yön;

    printf("diyez satır sayısı? ");
    scanf("%d", &sayi);

    printf("düz için 1 , ters için 0 girin ");
    scanf("%d", &yön);

    if (yön == 1)
    {
        for (satir = 0 ; satir < sayi ; satir++)
        {
            for (sutun = 0 ; sutun <= satir ; sutun++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else if (yön == 0)
    {
        for (sutun = 0 ; sutun <= satir ; sutun++)
        {
            for (satir = sutun ; satir < sayi ; satir++)
                {
                    printf("#");
                }
            printf("\n");
        }
    }

    return 0;
}