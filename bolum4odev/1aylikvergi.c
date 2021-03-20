#include <stdio.h>

int main()
{
    int saatlikUcret, gunOrtSaat, aylikGun;
    float aylikKazanc, vergiOrani, aylikVergi, netKazanc;

    printf("İşçinin saatlik ücretini girin:\n");
    scanf("%d", &saatlikUcret);

    do
    {
    printf("işçinin günde ort. kaç saat çalıştığını girin:\n");
    scanf("%d", &gunOrtSaat);
    }
    while (gunOrtSaat > 24 || gunOrtSaat < 1);

    do
    {
    printf("İşçinin ayda kaç gün çalıştığını girin:\n");
    scanf("%d", &aylikGun);
    }
    while (aylikGun > 31 || aylikGun < 1);

    aylikKazanc = saatlikUcret * gunOrtSaat * aylikGun;

    if (aylikKazanc < 500)
    {
        vergiOrani = 0.0;
    }
    else if (aylikKazanc >= 500 && aylikKazanc < 700)
    {
        vergiOrani = 0.05;
    }
    else if (aylikKazanc >= 700 && aylikKazanc < 1000)
    {
        vergiOrani = 0.07;
    }
    else if (aylikKazanc >= 1000 && aylikKazanc < 1500)
    {
        vergiOrani = 0.10;
    }
    else
    {
        vergiOrani = 0.13;
    }

    aylikVergi = aylikKazanc * vergiOrani;
    netKazanc = aylikKazanc - aylikVergi;

    printf("Aylık Kesilecek Vergi: %.2f\n", aylikVergi);
    printf("Aylık Net Kazanç: %.2f\n", netKazanc);

    return 0;
}