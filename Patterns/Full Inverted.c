#include <stdio.h>
int main(){
    int col = 5;
    for (int i = 0; i<col; i++){
        for (int j = 0; j<2 * i + 1; j++){
            printf(" ");
        }
        
        
        for (int k = 0; k <2*(col - i)-1; k++) {
           printf("* ");
        }
        
        
        printf("\n");
    }
}