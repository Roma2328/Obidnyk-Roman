#include <stdio.h>

int main(void)
{
    int n;
    printf("Введіть номер місяця: ");
    scanf("%i", &n);
    if (n==4 || n==6 || n==9 || n==11)
    {
        printf("30 днів\n");
    }
    else if ( n==2)
    {
        printf("28 днів\n");
    }
    else
    {
        printf("31 день\n");
    }
}
