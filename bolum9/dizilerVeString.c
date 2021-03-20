#include <stdio.h>

int main() {

    char strDizi[] = "Bilgisayar";
    int i = 0, j = 0;

    for (i = 0; i < 10; i++) {
        printf("%c\n", strDizi[i]);
    }

    printf("\n%d\n\n", strDizi[10]);

    for (i = 0; i < 15; i++) {
        if (strDizi[i] != '\0') {
        printf("%c", strDizi[i]);
        }
    }
    printf("\n\n");

    while (strDizi[j] != '\0') {      // Dizinin boyutunu bilmediğimiz zaman
        printf("%c\n", strDizi[j]);
        j++;
    }
    return 0;
}