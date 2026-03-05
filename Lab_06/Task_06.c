#include<stdio.h>
int main() {
    float baseSalary, increment = 0.05;
    printf("Enter the employee's base salary: ");
    scanf("%f", &baseSalary);

    printf("Year\tSalary\n");
    for (int year = 1; year <= 10; year++) {
        baseSalary += baseSalary * increment; 
        printf("%d\t%.2f\n", year, baseSalary);
    }

    return 0;
}