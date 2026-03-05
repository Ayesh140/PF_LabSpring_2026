#include<stdio.h>
int main() {
    int N, total_distance = 0;

    printf("Enter the number of days: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total_distance += i; 
    }

    printf("Total distance covered in %d days: %d km\n", N, total_distance);
    
    return 0;
}