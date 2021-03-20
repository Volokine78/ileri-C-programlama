#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void kelimeHarfRast(char*);

int main() {

    char * chPt = get_string("Bir cumle giriniz:");

    kelimeHarfRast(chPt);

    return 0;
}

void kelimeHarfRast(char * chPt) {

    int uzunluk = strlen(chPt);
    int i = 0, n = 0, j = 0;
    srand(time(NULL));


    for (i = 0; i < uzunluk; i++) {
        do  {
            i++;
            n++;
        } while (chPt[i] != ' ');

        if (chPt[i] == 32) printf(" ");
        else {
            for (j = 0; j < n; j++) {
                putchar(*(chPt + i + (rand() % n)));
            }
            n = 0;
            j = 0;
        }
    }
    printf("\n");
}