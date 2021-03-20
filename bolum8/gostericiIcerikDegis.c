#include <stdio.h>

int main() {

    char ch01 = 'a';
    char ch02 = 'b';

    char * cPt01 = &ch01;  // * char cPt01 = &ch01; hatalı!!
    char * cPt02 = &ch02;
    char * temp;

    printf("ch01 değeri: %c\n", ch01);
    printf("ch02 değeri: %c\n", ch02);
    printf("cPt01 gösterdiği değer: %c\n", *cPt01);
    printf("cPt02 gösterdiği değer: %c\n", *cPt02);

    printf("\ngöstericilerin adresleri değişiyor...\n\n");

    temp = cPt01;
    cPt01 = cPt02;
    cPt02 = temp;

    printf("ch01 değeri: %c\n", ch01);
    printf("ch02 değeri: %c\n", ch02);
    printf("cPt01 gösterdiği değer: %c\n", *cPt01);
    printf("cPt02 gösterdiği değer: %c\n", *cPt02);

    return 0;
}