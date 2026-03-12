#include <stdio.h>

int main() {
    int passMarks[10];
    int failMarks[10];
    int passCount = 0, failCount = 0, mark;
    float passSum = 0.0, failSum = 0.0;
    
    printf("Enter quiz marks for 10 students (0-10).\n");
    printf("Enter -1 at any time to stop the program.\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &mark);
        if (mark == -1) {
            printf("Data entry stopped by user.\n");
            break; 
        }

        if (mark >= 5 && mark <= 10) {
            passMarks[passCount] = mark;  
            passSum += mark;              
            passCount++;                  
        } 
        else if (mark >= 0 && mark < 5) {
            failMarks[failCount] = mark; 
            failSum += mark;             
            failCount++;                 
        } 
        else {
            printf("Invalid mark! Please enter a value between 0 and 10.\n");
            i--;
        }
    }

    printf("Pass Students (Marks 5-10)\n");
    if (passCount > 0) {
        printf("Marks: ");
        for (int i = 0; i < passCount; i++) {
            printf("%d ", passMarks[i]);
        }
        printf("\nAverage: %.2f\n", passSum / passCount);
    } else {
        printf("No students passed.\n");
    }
    printf("\n--- Fail Students (Marks 0-4) ---\n");
    if (failCount > 0) {
        printf("Marks: ");
        for (int i = 0; i < failCount; i++) {
            printf("%d ", failMarks[i]);
        }
        printf("\nAverage: %.2f\n", failSum / failCount);
    } else {
        printf("No students failed.\n");
    }

    return 0;
}