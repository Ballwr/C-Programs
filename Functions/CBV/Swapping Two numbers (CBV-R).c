#include <stdio.h>
//CALL BY VaLUE
void swap(int x, int y){
    int temp;
    temp = y;
    y = x;
    x = temp;
    printf("%d , %d", x , y);
}
void swap2(int *x, int *y){
    int *temp;
    *temp = *y;
    *y = *x;
    *x = *temp;
    printf("%d , %d", *x, *y);
}

int main(){
    int a , b;
    int x , y;
    printf("Enter values of A and B: ");
    scanf("%d %d", &a, &b);
    printf("Enter values of X and Y: ");
    scanf("%d %d", &x, &y);
    printf("Using call by value \n");
    swap(a, b);
    printf("\n");
    printf("Using call by reference \n");
    swap2(&x, &y);
}