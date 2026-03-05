#include<stdio.h>
int main() {
    int accessCode;
    const int correctCode = 2468;

    do {
        printf("Enter the access code: ");
        scanf("%d", &accessCode);

        if (accessCode != correctCode) {
            printf("Incorrect code. Please try again.\n");
        }
    } while (accessCode != correctCode);

    printf("Access granted. The door is unlocked.\n");
    return 0;
}