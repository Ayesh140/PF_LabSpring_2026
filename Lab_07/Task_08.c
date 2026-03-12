#include <stdio.h>

int main() {
    char str[100] = ""; 
    printf("Enter a mix of numbers, symbols, and letters: ");
    scanf("%[^A-Za-z]", str);
    printf("Captured non-alphabetic characters: %s\n", str);

    return 0;
}