#include<Stdio.h>
int main() {
    int pin;
    while (pin != 5555) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        if (pin != 5555) {
            printf("Incorrect PIN. Please try again.\n");
        }
    }
    printf("Access Granted.\n");
    return 0;
}