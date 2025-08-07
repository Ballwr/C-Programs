#include <stdio.h>

int main()
{
    long long int a,res = 0;
    printf("Enter any number ");
    scanf("%lli", &a);

    while (a!=0)
    {
        int digit = a%10;
        res += digit;
        a/=10;
    }
    printf("Sum of all numbers is: %lli\n", res);
    return 0;
}