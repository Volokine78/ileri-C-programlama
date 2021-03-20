#include <stdio.h>

int uzunlugunuBul(char*);

int main() {

    char * chPt = "zaman hancı, bulut yolcu..."; //Türkçe karakter string uzunluğunu 1 artırıyor.
    int uzunluk = 0;

    uzunluk = uzunlugunuBul(chPt);
    printf("stringin uzunluğu: %d\n\n", uzunluk);

    printf("%c%c%c\n", chPt[9], chPt[10], chPt[11]);    //chPt[10] yazılmıyor.
    printf("%c\n", chPt[11]);                           //chPt[10] ile chPt[11] tek başına yazılmıyor.

    return 0;
}

int uzunlugunuBul(char * chPt) {
    int i = 0;

    while (*(chPt + i) != '\0') i++;

    return i;
}