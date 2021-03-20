#include <cs50.h>
#include <stdio.h>

int main() {

    char * chDizi = get_string("Lutfen bir cumle giriniz:\n");

    puts("\ngirdiginiz cumle:");
    puts(chDizi);

    return 0;
}