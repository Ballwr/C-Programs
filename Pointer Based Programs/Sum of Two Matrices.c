#include <stdio.h>

int main()
{
    int *p, *q, *sum;
    int row, col;

    printf("Enter number of rows and columns of matrices: ");
    scanf("%d %d", &row, &col);

    int a[row][col], b[row][col], c[row][col];

    // Input Matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print Matrix A using pointer
    p = &a[0][0];
    printf("\nMatrix A:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, p++)
        {
            printf("%d ", *p);
        }
        printf("\n");
    }

    // Input Matrix B
    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Print Matrix B using pointer
    q = &b[0][0];
    printf("\nMatrix B:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, q++)
        {
            printf("%d ", *q);
        }
        printf("\n");
    }

    // Compute Sum using pointers
    printf("\nPrinting the Sum of both Matrices:\n");
    p   = &a[0][0];
    q   = &b[0][0];
    sum = &c[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, p++, q++, sum++)
        {
            *sum = *p + *q; // Directly assign sum to c[i][j]
            printf("%d ", *sum);
        }
    }
    printf("\n");

    // Reset sum before printing resultant matrix
    sum = &c[0][0];
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, sum++)
        {
            printf("%d ", *sum);
        }
        printf("\n");
    }

    return 0;
}