#include <stdio.h>
#include <conio.h> // bu dosyayı tanımıyor müdür

int main() {

    printf("bir tuşa basınız...\n");
    char tus = 0;
    tus = getch();
    printf("%c tuşuna bastınız.\n", tus);
    printf("tuşun ASCII kodu: %d\n", tus);
    return 0;
}