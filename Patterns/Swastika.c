#include <stdio.h>
int main()
{
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j<5; j++)
		{
			if (i==0 && j==1 || i==1 && j==1 ||i==1 && j==3 || i==1 && j==4 || i==3 && j==0 || i==3 && j==1 || i==3 && j==3 || i==4 && j==3)
				printf("  ");
			else
				printf("* ");
		}
	printf("\n");
	}
	return 0;
}