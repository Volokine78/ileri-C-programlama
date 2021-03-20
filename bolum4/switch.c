#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int sayi = 3;

    switch(sayi)
    {
    case 1:
            printf("pazartesi");
            break;
    case 2:
            printf("sali");
            break;
    case 3:
            printf("carsamba");
            break;
    case 4:
            printf("persembe");
            break;
    case 5:
            printf("cuma");
            break;
    case 6:
            printf("cumartesi");
            break;
    case 7:
            printf("pazar");
    }
    printf("\n");
    return 0;
}