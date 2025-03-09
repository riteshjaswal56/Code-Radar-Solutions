#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    scanf("%d", &rows);
    
    // Loop to print the alphabet right-angled triangle
    for (i = 1; i <= rows; i++) {
        ch = 'A'; // Start from 'A' for every row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to the next alphabet
        }
        printf("\n");
    }
    
    return 0;
}
