#include <stdio.h>

int main() {

    char * strPt = "Bilgisayar";
    int i = 0;

    while (*(strPt + i) != '\0') {
        printf("%c\n", *(strPt + i));
        i++;
    }
    return 0;
}