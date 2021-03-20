#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, x;
    int function;

    printf("a,b,c,d,x değişkenleri için sırası ile değer girin:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &x);

    if(x < 0)
    {
        function = (a*pow(x, 4)) + (b*pow(x, 2)) + (c*x) + d;
        printf("f(%d)= %d\n", x, function);
    }
    else if(x > 0)
    {
        function = (a*pow(x, 3)) + (b*x) - c;
        printf("f(%d)= %d\n", x, function);
    }
    else if(x == 0)
    {
        function = (a*x) + d;
        printf("f(%d)= %d\n", x, function);
    }
    return 0;
}