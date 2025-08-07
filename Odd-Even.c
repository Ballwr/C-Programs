#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("%d is EVEN." , a);
    }
    else
    {
        printf("%d is ODD.", a);
    }
    return 0;
}