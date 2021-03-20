#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int urunsayisi = 0;
    int gun = 0;
    char *gunismi;
    printf("haftanin gununu giriniz (1 - 7): ");
    scanf("%d", &gun);

    if (gun < 1 || gun > 7)
    {
        printf("lutfen 1 - 7 arasinde bir sayi giriniz! adami hasta etmeyiniz!\n");
        return 0;
    }
    switch(gun)
    {
        case 7:
            urunsayisi += 20;
            if (gun==7) gunismi = "pazar";
        case 6:
            urunsayisi += 15;
            if (gun==6) gunismi = "cumartesi";
        case 5:
            urunsayisi += 10;
            if (gun==5) gunismi = "cuma";
        case 4:
            urunsayisi += 7;
            if (gun==4) gunismi = "persembe";
        case 3:
            urunsayisi += 7;
            if (gun==3) gunismi = "carsamba";
        case 2:
            urunsayisi += 5;
            if (gun==2) gunismi = "sali";
        case 1:
            urunsayisi += 5;
            if (gun==1) gunismi = "pazartesi";
    }
    printf("%s gunu sonunda toplam %d urun satisi yapildi!\n", gunismi,urunsayisi);

    return 0;
}