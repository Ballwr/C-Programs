#include <stdio.h>

int main()
{
    int a, res, i;
    printf("Enter any number whose multiplication table is to be printed: ");
    scanf("%d", &a);

    for (i = 1; i<=10; i++)
    {
        res = a * i;
        printf("%d * %d = %d\n", a , i , res);
    }
    return 0;
}