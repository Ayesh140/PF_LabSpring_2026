#include<stdio.h>
int main() {
    int rating;
    int excellentCount = 0;
    int satisfactoryCount = 0;
    int needsImprovementCount = 0;

    printf("Enter employee performance ratings (0-100). Enter -1 to stop:\n");

    while (1) {
        scanf("%d", &rating);
        
        if (rating == -1) {
            break; 
        }

        if (rating >= 85) {
            excellentCount++;
        } else if (rating >= 60) {
            satisfactoryCount++;
        } else if (rating >= 0) {
            needsImprovementCount++;
        } else {
            printf("Invalid rating. Please enter a value between 0 and 100.\n");
        }
    }

    printf("Total Excellent: %d\n", excellentCount);
    printf("Total Satisfactory: %d\n", satisfactoryCount);
    printf("Total Needs Improvement: %d\n", needsImprovementCount);

    return 0;
}