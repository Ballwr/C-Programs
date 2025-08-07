#include <stdio.h>

int main()
{
    int a , rev = 0;
    printf("Enter any integer: ");
    scanf("%d", &a);

    while(a!=0)
    {
        int digit = a%10;
        rev = rev*10 + digit;
        a/=10;
    }
    printf("%d", rev);

    return 0;
}