#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d" , &a[i]);
    }
    for(int j =0; j<n; j++){
        printf("%d " , a[j]);
    }
    printf("\n");
    int elem, temp;
    printf("From the above array which element to find: ");
    scanf("%d", &elem);
    for (int i = 0; i<n; i++){
        if (a[i] == elem)
            printf("Found at index %d", i);
    }
}