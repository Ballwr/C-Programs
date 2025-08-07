#include <stdio.h>

int main()
{
    int a,res = 1;
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d", &a);
    for (int i=1; i<=a ;i++)
    {
        res *= i;
    }
    printf("Factorial of %d is %d", a , res);
    return 0;
}