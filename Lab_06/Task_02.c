#include<stdio.h>
int main() {
    float data_balance, data_usage;

    printf("Enter your initial data balance (in MB): ");
    scanf("%f", &data_balance);

    while (data_balance > 0) {
        printf("Enter data usage (in MB): ");
        scanf("%f", &data_usage);

        data_balance -= data_usage;

        if (data_balance <= 0) {
            printf("Your data balance is now zero or negative. You have used all your data.\n");
            break;
        } else {
            printf("Remaining data balance: %.2f MB\n", data_balance);
        }
    }

    return 0;
}