#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    scanf("%d", &rows);
    
    // Loop to print the alphabetic pattern
    for (i = 1; i <= rows; i++) {
        ch = 'A'; // Start from 'A'
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}
