#include <stdio.h>

int main()
{
        int SUM = 0;
    int row, col;
    int *p, *q;
    
    printf("Enter number of rows and columns of square matrix: ");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col];

    printf("Enter elements of matrix A: ");
    printf("\n");
    for (int i = 0; i<row;i++)
    {
        for (int j = 0; j<col; j++)
        {
            printf("Enter element %d,%d: ", i , j);
            scanf("%d", &a[i][j]);
        }
        
    
    }
    printf("Elements of Matrix A: \n\n");
    p = &a[0][0];
    for (int i = 0; i<row; i++)
    {
        for (int j = 0; j<col; j++, p++)
        {
            printf("%d ", *p);
            SUM += *p;
        }
        printf("\n");
    }
    printf("\n Sum of elements of matrix A = %d", SUM);
    printf("\n\n");
    
    
    printf("Transpose of matrix A: \n\n");
    int *arow , *acol;
    for (int j = 0; j<col; j++)
    {
        acol = &a[0][j];
        for (int i = 0; i<row; i++)
        {
            arow = acol + i*col;   //very important
            printf("%d ", *arow);
        }
        printf("\n");
    }
    printf("\n\n");
    
    
    return 0;
}