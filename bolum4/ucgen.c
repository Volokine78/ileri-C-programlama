#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float kenar1, kenar2, kenar3;
    int gecerliucgen, dikucgen;
    int eskenarucgen, ikizkenarucgen, cesitkenarucgen;

    printf("ucgenin 3 kenar olcusunu giriniz: ");
    scanf("%f%f%f", &kenar1, &kenar2, &kenar3);

    gecerliucgen = kenar1 < kenar2 + kenar3 &&
                   kenar2 < kenar1 + kenar3 &&
                   kenar3 < kenar1 + kenar2;

    dikucgen =
    kenar1 * kenar1 == kenar2*kenar2 + kenar3*kenar3 ||
    kenar2 * kenar2 == kenar1*kenar1 + kenar3*kenar3 ||
    kenar3 * kenar3 == kenar1*kenar1 + kenar2*kenar2;

    eskenarucgen = kenar1 == kenar2 && kenar1 == kenar3;

    ikizkenarucgen = kenar1==kenar2 ||
                     kenar1==kenar3 ||
                     kenar2==kenar3;
    if (gecerliucgen)
    {
        printf("bu gecerli bir ucgendir.\n");
    }
    else
    {
        printf("bu gecerli bir ucgen degildir.\n");
        return 0;
    }
    if (dikucgen)
    {
        printf("bu bir dik ucgendir.");
    }
    else
    {
        if (eskenarucgen)
        {
            printf("bu bir eskenarucgendir.");
        }
        else
        {
            if (ikizkenarucgen)
            {
                printf("bu bir ikizkenar ucgendir.");
            }
            else
            {
                printf("bu bir cesitkenar ucgendir.");
            }
        }
    }
    printf("\n");
    return 0;
}