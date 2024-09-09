#include <stdio.h>
int main() {
    float cost, discount, discountAmount, finalAmount;
    printf("Enter the total cost of shopping: ");
    scanf("%f", &cost);
    if (cost < 500) {
        printf("The shopping to be done for a discount is 500.\n");
    }
    if (cost < 2000) 
        discount = 0.05;
	else if (cost <= 4000) 
        discount = 0.10;
	else if (cost <= 6000) 
        discount = 0.20; 
	else 
        discount = 0.35; 
    discountAmount=cost*discount;
    finalAmount=cost-discountAmount;
    printf("Actual amount: %f\n", cost);
    printf("Discount: %f\n", discountAmount);
    printf("Amount after discount: %f\n", finalAmount);
    return 0;
}
