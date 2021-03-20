#include <stdio.h>

int main() {

    char strDizi[15] = "Bilgisayar";
    int i = 0;

    while (*(strDizi + i) != '\0') {
        printf("%c\n", *(strDizi + i));
        i++;
    }
    return 0;
}