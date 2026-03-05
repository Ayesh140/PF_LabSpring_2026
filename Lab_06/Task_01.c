#include <stdio.h>

int main() {
    int status; 
    int totalCheckedIn = 0;

    for (int i = 0; i < 25; i++) {
        printf("Enter check-in status for member %d (1 for Checked In, 0 for Absent): ", i + 1);
        scanf("%d", &status); 

        if (status != 0 && status != 1) {
            printf("Invalid input. Please enter 1 or 0.\n");
            return 1; 
        }

        if (status == 1) {
            totalCheckedIn++; 
        }
    }
    
    printf("Total number of members who checked in: %d\n", totalCheckedIn);

    return 0; 
}