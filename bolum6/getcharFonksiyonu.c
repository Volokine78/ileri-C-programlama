#include <stdio.h>

int main() {

    printf("bir tuşa basınız...\n");
    char tus = 0;
    tus = getchar();
    printf("%c tuşuna bastınız.\n", tus);
    printf("tuşun ASCII kodu: %d\n", tus);
    return 0;
}