#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int f(int x);
int indexOf(char c, char *tablo);

int main() {

    char * input = get_string("Bir cümle giriniz.\n");
    char tablo[24] = {'x','a','b','c','d','e','f','g','h','i','j','k',
                      'l','m','n','o','p','r','s','t','u','v','y','z'};

    int i = 0;
    while (input[i] != '\0') {

        if (!isalnum(input[i])) {
            printf("%c", input[i]);
        } else {
            char aktifHarf = input[i];
            int charIndex = indexOf(aktifHarf, tablo);
            int result = f(charIndex);
            printf("%c", tablo[result]);
        }
        i++;
    }

    printf("\n");
}
int f(int x) {
    return ((5*x) + 4) % 24;
}

int indexOf(char c, char *tablo) {
    int uzunluk = strlen(tablo);
    for (int i = 0; i < 24; i++) {
        if (c == *(tablo + i)) {
            return i;
        }
    }
    return -1;
}