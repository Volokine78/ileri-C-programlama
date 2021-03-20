#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int sayi1 = 0;
   int sayi2 = 0;

   printf("iki sayi girin: \n");
   scanf("%d%d", &sayi1, &sayi2);

   if (sayi1 > sayi2)
   {
       printf("ilk sayi daha büyüktür. \n");
   }
   else
   {
       if (sayi1 < sayi2)
       {
           printf("ikinci sayi daha büyüktür. \n");
       }
       else
       {
           printf("sayilar esittir. \n");
       }
   }

   return 0;
}