#include <stdio.h>

int main(void)
{
   int n = 0;
   int max = 0;
   while (n < 1)
   {
    printf("Введіть число N:");
    scanf ("%i", &n);
   }

   int k=0, temp=0;
   while (temp <= n) {
        max = temp;
        temp += 3;
   }

   printf(" Число K: %i\n Сума:%i\n",max ,temp);

   return 0;
}
