#include <stdio.h>

int main() {
    int customerID;
    char customerName;
    float unitsConsumed, billAmount, finalAmount;
    printf("Enter Customer ID: ");
    scanf("%d",&customerID);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
    printf("Enter Initial Character of your name: ");
    scanf(" %c", &customerName);
    if (unitsConsumed <= 199)
        billAmount = unitsConsumed * 16.20;
    else if (unitsConsumed >= 200 && unitsConsumed < 300)
        billAmount = unitsConsumed * 20.10;
    else if (unitsConsumed >= 300 && unitsConsumed < 500)
        billAmount = unitsConsumed * 27.10;
    else
        billAmount = unitsConsumed * 35.90;
        
    if (billAmount > 18000)
        finalAmount = billAmount * 1.15;
    else
        finalAmount = billAmount;
    printf("Customer ID: %d\n",customerID);
    printf("Initial Character of your name: %c\n",customerName);
    printf("Units Consumed: %f\n",unitsConsumed);
    printf("Total Amount to Pay: %frs\n", finalAmount);
    return 0;
}
