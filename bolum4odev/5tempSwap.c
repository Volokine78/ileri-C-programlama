#include <stdio.h>

int main()
{
    int cevirici;
    float value;

    printf("Santigrat veya Fahrenayt çevirici:\n");

    do
    {
        printf("Santigratı fahrenayta çevirmek için 1 girin.\n");
        printf("Fahrenaytı santigrata çevirmek için 2 girin.\n");
        scanf("%d", &cevirici);
    }
    while (!(cevirici > 0 && cevirici < 3));

    printf("çevirmek istediğiniz %s değerini girin: ", cevirici == 1 ? "celcius" : "fahrenayt");
    scanf("%f", &value);

    if (cevirici == 1)
    {
        printf("%.2f F hayırlı olsun\n", 32 + (1.8*value));
    }
    else
    {
        printf("%.2f C hayırlı olsun\n", (value - 32) / 1.8);
    }

    return 0;
}