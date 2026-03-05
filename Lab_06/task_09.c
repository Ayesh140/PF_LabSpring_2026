#include<stdio.h>
int main() {
    int N;
    int totalRevenue = 0;

    printf("Enter the number of tickets (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        totalRevenue += i * 100;
    }

    printf("Total revenue from selling %d tickets: $%d\n", N, totalRevenue);

    return 0;
}