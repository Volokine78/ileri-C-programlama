#include <stdio.h>

int main()
{
    int gun, ay, yil, i;
    int toplamAy = 0, toplamYil = 0; // Bugün = 29.10.2020

    printf("Doğum tarihinizi girin.\n");
    printf("Gün: ");
    scanf("%d", &gun);
    printf("Ay: ");
    scanf("%d", &ay);
    printf("Yıl: ");
    scanf("%d", &yil);

    int bugünToplam = 29 + (9 * 30) + (2019 * 365);
    int kisiToplam = gun + ((ay - 1) * 30) + ((yil - 1) * 365);
    int toplamGun = bugünToplam - kisiToplam;

    for (i = 0; i < toplamGun; i += 365)
    {
        toplamYil++;
    }

    for (i = 0; i < toplamGun; i += 30)
    {
        toplamAy++;
    }

    printf("Toplam %d gün %d ay %d yıl yaşamıştır.\n", toplamGun, toplamAy, toplamYil);

    return 0;
}