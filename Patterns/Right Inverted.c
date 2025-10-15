#include <stdio.h>
int main(){
    int col;
    int count = 0;
    printf("Enter number of Columns: ");
    scanf("%d", &col);
    for (int i = 0; i<col; i++){
        for (int j = 0; j<2* i; j++){
            printf(" ");
        }
        for (int k = 0; k<col - i; k++){
            printf("* ");
        }
        printf("\n");
    }
}