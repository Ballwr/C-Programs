//CBV/R using shopping cart checkout
//CBV - calc price after tax without changing og price
//CBR - apply discount directly to item price

#include <stdio.h>
void priceatax(float price){
    float tax = price * 0.05;                             //5% tax
    float finalprice = price + tax;
    printf("Price after tax(5%): %.2f\n", finalprice);
}

void applydiscount(float *price, float discount){
    *price = *price - discount;                           //apply discount directly
    printf("Price after discount: %.2f\n", *price);
}

int main(){
    float totbill;
    printf("Enter total bill: ");
    scanf("%f", &totbill);
    
    //Call By Value
    priceatax(totbill);
    printf("\n");
    //Call By Reference
    float discount = 0.01;
    printf("Discount amount: 10%\n");
    applydiscount(&totbill, discount);
    
    return 0;
}


//mean , mode , variance using arrays