#include <stdio.h>

int main()
{
    float celcius;
    float fahrenheit;
    int cevirici;

    printf("Santigrat veya Fahrenayt çevirici:\n");
    printf("Santigratı fahrenayta çevirmek için 1 girin.\n");
    printf("Fahrenaytı santigrata çevirmek için 2 girin.\n");
    scanf("%d", &cevirici);

    do
    {
        if(cevirici == 1)
        {
            printf("çevirmek istediğiniz santigrat değerini girin: ");
            scanf("%f", &celcius);
            fahrenheit = 32 + (1.8*celcius);
            printf("%.2f F hayırlı olsun\n", fahrenheit);
        }
        else if(cevirici == 2)
        {
            printf("çevirmek istediğiniz fahrenayt değerini girin: ");
            scanf("%f", &fahrenheit);
            celcius = (fahrenheit - 32) / 1.8;
            printf("%.2f C hayırlı olsun\n", celcius);
        }
    }
    while (cevirici < 3 && cevirici > 0);

    return 0;
}