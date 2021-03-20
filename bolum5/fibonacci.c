#include <stdio.h>

int main()
{
    int i = 1;
    int bulunacakelemansira = 1;

    long aktifeleman2once = 0;
    long aktifeleman1once = 1;
    long aktifeleman = 1;

    printf("kacinci eleman bulunacak: ");
    scanf("%d", &bulunacakelemansira);

    for (i = 1 ; i <= bulunacakelemansira ; i++)
    {
        aktifeleman2once = aktifeleman1once;
        aktifeleman1once = aktifeleman;
        aktifeleman = aktifeleman2once + aktifeleman1once;
    }
    printf("%d. eleman: %ld\n", i - 1, aktifeleman2once);

    return 0;
}