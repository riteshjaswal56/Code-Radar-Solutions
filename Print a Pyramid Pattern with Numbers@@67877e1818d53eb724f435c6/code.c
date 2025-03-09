#include <stdio.h>

int main() {
    int rows, i, j, space;
        scanf("%d", &rows);
    
    // Loop to print the pyramid pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces for pyramid alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print numbers in reverse (to complete the pyramid row)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
