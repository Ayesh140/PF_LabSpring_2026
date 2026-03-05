#include<stdio.h>
int main() {
    float price, total_bill = 0.0;
    int add_more;

    do {
        printf("Enter the price of the item: ");
        scanf("%f", &price);
        total_bill += price;

        printf("Do you want to add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &add_more);
    } while (add_more == 1);

    if (total_bill > 3000) {
        total_bill *= 0.9; 
    }

    printf("The final payable amount is: %.2f\n", total_bill);
    return 0;
}