#include <stdio.h>

int main() {

    char * chPt = "Kose basini tutan leylak kokusu";
    char chDizi[25] = "Yakami birak da gideyim.";     //chDizi[24] sonuna @ ekliyor.

    puts(chPt);    // int puts(const char *); prototip
    puts(chDizi);

    return 0;
}