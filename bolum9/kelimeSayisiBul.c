#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int kelimeSayisiBul(char*);

int main() {

    int kelimeSayisi = 0;

    char * chPt = get_string("Bir cumle giriniz (max 100 karakter):");

    kelimeSayisi = kelimeSayisiBul(chPt);

    printf("Girdiginiz cumle %d kelimeden olusuyor.\n", kelimeSayisi);
    return 0;
}

int kelimeSayisiBul(char * chPt) {

    int i = 0, kelimeSayisi = 0;

    if (chPt[i] != ' ') {
        i++;
        kelimeSayisi++;
    }

    while(chPt[i] != '\0') {
        if (i > 100) {
            printf("siniri astiniz. Tekrar deneyin.\n");
            return 0;
        }
        if(chPt[i] == ' ' && isalnum(chPt[i + 1])) kelimeSayisi++;
        i++;
    }
    return kelimeSayisi;
}