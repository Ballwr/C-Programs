#include <stdio.h>
int main(){
    int col;
    int count = 0;
    printf("Enter number of Columns: ");
    scanf("%d", &col);
    for (int i = 0; i<=col; i++){
        for (int j = 0; j<col - i; j++){
            printf("* ");
        }
        printf("\n");
    }
}