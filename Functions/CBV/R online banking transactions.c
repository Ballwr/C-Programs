#include <stdio.h>
int calcinterest(){
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    return interest;
}

int transfunds(int *accbal, int *funds){
    *accbal -= *funds;
    return *accbal;
}


int main(){
    printf("(i) Call By Value - Interest on Account Balance\n\n");
    float interest;
    int accbal;
    interest = calcinterest();
    printf("Enter account Balance: ");
    scanf("%d", &accbal);
    printf("The calculated interest is: %.2f\n", interest);
    int totbal = accbal + interest;
    printf("\n");
    printf("Account Balance after Interest = %d", totbal);
    printf("\n");
    int funds;
    printf("\n\n(ii) Call By Reference - Account Balance after Transfering Funds\n\n");
    printf("Enter funds to transfer to other account: ");
    scanf("%d", &funds);
    int accbalfund = transfunds(&accbal, &funds);
    printf("Account balance after transferring funds: %d", accbalfund);
    return 0;
}