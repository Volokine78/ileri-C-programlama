#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = 0;
    /*while(a < 5)
    {
        printf("a: %d\n", a);
        a++;
    }*/
    printf("\na: %d\n", ((++a)++));
    printf("a: %d\n", ((++a)++));
    return 0;
}