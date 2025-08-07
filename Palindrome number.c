#include <stdio.h>

int main()
{
    int a,rev=0;
    printf("Enter any integer: ");
    scanf("%d", &a);
    int temp = a;
    while (a!=0)
    {
        int digit = a%10;
        rev= rev*10 + digit;
        a/=10;
    }
    printf("%d\n", rev);
    if (rev == temp)
    {
        printf("Entered number is a palindrome!!\n");
    }
    else
    {
        printf("Entered number is not a palindrome!!\n");
    }
    return 0;
}