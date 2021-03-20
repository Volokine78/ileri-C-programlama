#include <stdio.h>

int main()
{
    int bolum;
    float aylikKazanc = 0;
    int aylikSatisMiktari = 0;
    int haftaCalismaSaat = 0;

    printf("İşçinin çalıştığı bölümü girin.\n");

    do
    {
    printf("Bölüm A için 1 girin.\n");
    printf("Bölüm B için 2 girin.\n");
    printf("Bölüm C için 3 girin.\n");
    printf("Bölüm D için 4 girin.\n");
    scanf("%d", &bolum);
    }
    while(bolum < 0 || bolum > 4);

    switch(bolum)
    {
        case 1:
            printf("Aylık yapılmış satış miktarını girin: ");
            scanf("%d", &aylikSatisMiktari);
            aylikKazanc = (aylikSatisMiktari * 0.13) + 500;
            printf("Bölüm A işçisinin aylık kazancı: %.2f€\n", aylikKazanc);
            break;
        case 2:
            printf("Aylık yapılmış satış miktarını girin: ");
            scanf("%d", &aylikSatisMiktari);
            aylikKazanc = aylikSatisMiktari * 0.22;
            printf("Bölüm B işçisinin aylık kazancı: %.2f€\n", aylikKazanc);
            break;
        case 3:
            printf("İşçi haftada kaç saat çalışıyor? ");
            scanf("%d", &haftaCalismaSaat);
            while(haftaCalismaSaat < 0 || haftaCalismaSaat > 168)
            {
                printf("lütfen mantıklı bir saat girin.\n");
                scanf("%d", &haftaCalismaSaat);
            }
            aylikKazanc = haftaCalismaSaat * 7;
            printf("Bölüm C işçisinin aylık kazancı: %.2f€\n", aylikKazanc);
            break;
        case 4:
            printf("İşçi haftada kaç saat çalışıyor? ");
            scanf("%d", &haftaCalismaSaat);
            while(haftaCalismaSaat < 0 || haftaCalismaSaat > 168)
            {
                printf("lütfen mantıklı bir saat girin.\n");
                scanf("%d", &haftaCalismaSaat);
            }
            if(haftaCalismaSaat <= 40)
            {
                aylikKazanc = haftaCalismaSaat * 7;
            }
            else
            {
                aylikKazanc = (40 * 7) + ((haftaCalismaSaat - 40) * 10);
            }
            printf("Bölüm D işçisinin aylık kazancı: %.2f\n€", aylikKazanc);
            break;
    }
    return 0;
}