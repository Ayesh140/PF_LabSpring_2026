#include<stdio.h>
int main() {
    int choice;
    do {
        printf("Library Menu:\n");
        printf("1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have chosen to issue a book.\n");
                
                break;
            case 2:
                printf("You have chosen to return a book.\n");
                
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}