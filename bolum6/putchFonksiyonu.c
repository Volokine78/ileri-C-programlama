#include <stdio.h>

int main() {
    int i = 0;
    for (i = 65; i <= 90; i++) {
        putch(i);
        putch(32);
        if (i % 10 == 0) putch(10);
    }
    return 0;
}