#include <stdio.h>
int main()
{
    int n , prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1)
        prime = 0;
    else
    {
        for (int i = 2; i<n; i++)
        {
            if (n%i==0)
            {
                prime = 0;
            }
        }
    }
        if (prime == 1)
            printf("%d is Prime", n);
        else
            printf("Not Prime");
            
    return 0;
}