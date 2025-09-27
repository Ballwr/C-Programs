#include <stdio.h>

int main()
{
    int n , num = 2, prime , count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    
    while (count<n)
    {
        prime = 1;
        for (int i = 2; i<num; i++)
        {
            if (num%i == 0)
            {
                prime = 0;
            }
        }
        if (prime==1)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    

    return 0;
}