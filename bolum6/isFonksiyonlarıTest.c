#include <stdio.h>
#include <ctype.h>

int main() {

    int i = 0;

    printf("ascii\t\t");
    printf("karakter\t   ");
    printf("açıklama\n\n");

    for (i = 0; i <= 255; i++) {
        printf("%d\t\t", i);
        printf("%c\t\t   ", i);

        if (isalpha(i)) printf("alfanumerik -");
        if (isdigit(i)) printf("sayı -");
        if (islower(i)) printf("küçük harf -");
        if (isupper(i)) printf("büyük harf -");
        if (isspace(i)) printf("boşluk -");
        if (ispunct(i)) printf("noktalama -");
        printf("\n");
    }
    return 0;
}