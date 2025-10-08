#include <stdio.h>

int sum(){
    int n;
    printf("Enter number of input elements: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i<n; i++){
        int num;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        sum += num;
    }
    return sum;
    }
int sub(){
    int n;
    printf("Enter number of input elements: ");
    scanf("%d", &n);
    int sub;
    for (int i = 0; i<n; i++){
        int num;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        if (i==0){
            sub = num;
        }
        else{
            sub -= num;
        }
    }
    return sub;
}

int mult(){
    int n;
    printf("Enter number of input elements: ");
    scanf("%d", &n);
    int mult = 1;
    for (int i = 0; i<n; i++){
        int num;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        mult *= num;
    }
    return mult;
}

float div(){
    int n;
    printf("Enter number of input elements: ");
    scanf("%d", &n);
    float div;
    for (int i = 0; i<n; i++){
        float num;
        printf("Enter number %d: ", i+1);
        scanf("%f", &num);
        if (i==0){
            div = num;
        }
        else{
            div /= num;
        }
    }
    return div;
}

int power(){
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    int result = 1;
    for (int i = 0; i<exp; i++){
        result *= base;
    }
    return result;
}

int rem(){
    int a, b;
    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);
    return a%b;
}

int main()
{
    printf("BUILDING A CALCULATOR USING POINTER FUNCTIONS\n");
    char again;
    do {
        int choice;
        int (*addptr)();
        int (*subptr)();
        int (*multptr)();
        float (*divptr)();
        int (*powerptr)();
        int (*remptr)();
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Remainder\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addptr = &sum;
                printf("Result: %d\n", addptr());
                break;
            case 2:
                subptr = &sub;
                printf("Result: %d\n", subptr());
                break;
            case 3:
                multptr = &mult;
                printf("Result: %d\n", multptr());
                break;
            case 4:
                divptr = &div;
                printf("Result: %.2f\n", divptr());
                break;
            case 5:
                powerptr = &power;
                printf("Result: %d\n", powerptr());
                break;
            case 6:
                remptr = &rem;
                printf("Result: %d\n", remptr());
                break;
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    return 0;
}