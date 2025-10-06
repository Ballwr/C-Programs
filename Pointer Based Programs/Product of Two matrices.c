#include <stdio.h>

void addmat(int arow, int acol, int a[arow][acol], int b[arow][acol], int res[arow][acol])
{
    for (int i = 0; i<arow; i++)
    {
        for (int j= 0; j<acol; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}


void submat(int arow, int acol, int a[arow][acol], int b[arow][acol], int res[arow][acol])
{
    for (int i = 0; i<arow; i++)
    {
        for (int j= 0; j<acol; j++)
        {
            res[i][j] = a[i][j] - b[i][j];
        }
    }
}


void matmult(int arow, int acol, int bcol, int a[arow][acol], int b[acol][bcol], int res[arow][bcol])
{
    int *A, *B, *RES;
    printf("Product of Two Matrices\n\n");
    for (int i = 0; i<arow; i++) {
        for (int j = 0; j<bcol; j++) {
            res[i][j] = 0;
            for (int k= 0; k<acol; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i<arow; i++) {
        for (int j = 0; j<bcol; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}


void transpose(int row, int col,int brow, int bcol, int a[row][col],int b[brow][bcol], int res[col][row])
{
    printf("Enter which matrix to transpose:\n");
    printf("1. Matrix A\n");
    printf("2. Matrix B\n");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            for (int i = 0; i<row; i++) {
                for (int j = 0; j<col; j++) {
                    res[j][i] = a[i][j];
                }
            }
            printf("Transpose of Matrix A:\n");
            for (int i = 0; i<col; i++) {
                for (int j = 0; j<row; j++) {
                    printf("%d ", res[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 0; i<brow; i++) {
                for (int j = 0; j<bcol; j++) {
                    res[j][i] = b[i][j];
                }
            }
            printf("Transpose of Matrix B:\n");
            for (int i = 0; i<bcol; i++) {
                for (int j = 0; j<brow; j++) {
                    printf("%d ", res[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void tr(int n, int a[n][n])
{
    int trace = 0;
    for (int i = 0; i<n; i++)
    {
        trace += a[i][i];
    }
    printf("Trace of the matrix is: %d\n", trace);
}


void sumofele(int row, int col, int brow, int bcol, int a[row][col], int b[brow][bcol])
{
    printf("ENter which matrix to find sum of elements:\n");
    printf("1. Matrix A\n");
    printf("2. Matrix B\n");
    int choice;
    scanf("%d", &choice);
    int SUM = 0;
    int *p;
    switch(choice) {
        case 1:
            SUM = 0;
            for (int i = 0; i<row; i++) {
                for (int j = 0; j<col; j++) {
                    SUM += a[i][j];
                }
            }
            printf("\nSum of elements of Matrix A = %d\n\n", SUM);
            break;
        case 2:
            SUM = 0;
            for (int i = 0; i<brow; i++) {
                for (int j = 0; j<bcol; j++) {
                    SUM += b[i][j];
                }
            }
            printf("\nSum of elements of Matrix B = %d\n\n", SUM);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main()
{
    int arow, acol, brow, bcol;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &arow, &acol);
    printf("\n");
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &brow, &bcol);
    printf("\n\n");
    if (acol != brow)
    {
        printf("Matrix multiplication not possible!!\n");
        return 0;
    }

    int a[arow][acol], b[brow][bcol];
    int res_add[arow][acol];
    int res_sub[arow][acol];
    int res_mult[arow][bcol];
    int res_trans_a[acol][arow];
    int res_trans_b[bcol][brow];

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
    int choice;
    char again;
    do {
        printf("\nEnter which operation to perform on matrices:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Product\n");
        printf("4. Transpose\n");
        printf("5. Trace\n");
        printf("6. Sum of Elements\n");
        printf("0. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Addition of Two Matrices\n\n");
                addmat(arow, acol, a, b, res_add);
                printf("Result:\n");
                for (int i = 0; i<arow; i++) {
                    for (int j = 0; j<acol; j++) {
                        printf("%d ", res_add[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("Subtraction of Two Matrices\n\n");
                submat(arow, acol, a, b, res_sub);
                printf("Result:\n");
                for (int i = 0; i<arow; i++) {
                    for (int j = 0; j<acol; j++) {
                        printf("%d ", res_sub[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Product of Two Matrices\n\n");
                matmult(arow, acol, bcol, a, b, res_mult);
                break;
            case 4: {
                printf("Transpose of a Matrix\n\n");
                int matrix_choice;
                printf("Which matrix do you want to transpose?\n1. Matrix A\n2. Matrix B\n");
                scanf("%d", &matrix_choice);
                if (matrix_choice == 1) {
                    transpose(arow, acol, 0, 0, a, NULL, res_trans_a);
                } else if (matrix_choice == 2) {
                    transpose(0, 0, brow, bcol, NULL, b, res_trans_b);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
            }
            case 5: {
                printf("Trace of a Matrix\n\n");
                int matrix_choice;
                printf("Which matrix do you want the trace of?\n1. Matrix A\n2. Matrix B\n");
                scanf("%d", &matrix_choice);
                if (matrix_choice == 1) {
                    if (arow == acol) {
                        tr(arow, a);
                    } else {
                        printf("Matrix A is not square, cannot compute trace.\n");
                    }
                } else if (matrix_choice == 2) {
                    if (brow == bcol) {
                        tr(brow, b);
                    } else {
                        printf("Matrix B is not square, cannot compute trace.\n");
                    }
                } else {
                    printf("Invalid choice!\n");
                }
                break;
            }
            case 6: {
                printf("Sum of Elements of a Matrix\n\n");
                int matrix_choice;
                printf("Which matrix do you want the sum of elements for?\n1. Matrix A\n2. Matrix B\n");
                scanf("%d", &matrix_choice);
                if (matrix_choice == 1) {
                    int SUM = 0;
                    for (int i = 0; i<arow; i++) {
                        for (int j = 0; j<acol; j++) {
                            SUM += a[i][j];
                        }
                    }
                    printf("\nSum of elements of Matrix A = %d\n\n", SUM);
                } else if (matrix_choice == 2) {
                    int SUM = 0;
                    for (int i = 0; i<brow; i++) {
                        for (int j = 0; j<bcol; j++) {
                            SUM += b[i][j];
                        }
                    }
                    printf("\nSum of elements of Matrix B = %d\n\n", SUM);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
            }
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Input!!\n");
        }
        if (choice != 0) {
            printf("\nDo you want to perform another operation? (y/n): ");
            scanf(" %c", &again);
        } else {
            again = 'n';
        }
    } while (again == 'y' || again == 'Y');
    return 0;
}