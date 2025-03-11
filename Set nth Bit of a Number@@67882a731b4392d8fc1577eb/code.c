#include <stdio.h>

int main() {
    int number, n;
    scanf("%d", &number);
    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);

    int result = number | (1 << n);
    printf("%d\n", n, result);

    return 0;
}

