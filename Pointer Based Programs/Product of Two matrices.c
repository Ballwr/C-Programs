#include <stdio.h>

int main()
{
    int arow, acol, brow, bcol;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &arow, &acol);
    printf("\n");
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &brow, &bcol);
    printf("\n\n");
    int a[arow][acol], b[brow][bcol];
    int res[arow][bcol];
    if (acol != brow)
    {
        printf("Columns of Matrix A should be equal to Rows of Matrix B!!");
        return 1;
    }
    
    printf("Enter elements of Matrix A\n");
    for (int i = 0; i<arow; i++)
    {
        for (int j= 0; j<acol; j++)
        {
            printf ("Enter element %d,%d: ", i , j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter elements of Matrix B\n");
    for (int i = 0; i<brow; i++)
    {
        for (int j= 0; j<bcol; j++)
        {
            printf ("Enter element %d,%d: ", i , j);
            scanf("%d", &b[i][j]);
        }
    }
    
    int *A, *B, *RES;
    printf("Product of Two Matrices\n\n");
    for (int i = 0; i<arow; i++)
    {
        for (int j = 0; j<bcol; j++)
        {
            RES = &res[i][j];
            *RES = 0;
            for (int k= 0; k<bcol; k++)
            {
                A = &a[i][k];
                B = &b[k][j];
                *RES += (*A) * (*B);
            }
        }
    }
    
    for (int i = 0; i<arow; i++)
    {
        for (int j = 0; j<bcol; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}