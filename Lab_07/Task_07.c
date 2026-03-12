#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 recorded IDs:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        
        if (arr[i] != -1) {
        
            for (int j = i + 1; j < 10; j++) {

                if (arr[i] == arr[j]) {
                    arr[j] = -1; 
                }
            }
        }
    }

    printf("Updated list of IDs: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}