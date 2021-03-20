#include <stdio.h>
#include <ctype.h>

int main() {

    char karakter = 0;

    printf("bir karakter giriniz: ");
    scanf("%c", &karakter);

    printf("\nküçük: %c\n", tolower(karakter));
    printf("büyük: %c\n", toupper(karakter));

    return 0;
}