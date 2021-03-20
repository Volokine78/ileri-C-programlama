#include <stdio.h>

int main() {
    int i = 0;
    for (i = 65; i <= 90; i++) {
        putchar(i);
        putchar(' '); // putchar(32);
        if (i % 10 == 0) putchar(10);
    }
    return 0;
}