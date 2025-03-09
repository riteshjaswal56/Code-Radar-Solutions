#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    // Asking for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the arithmetic operation (+, -, *, /): ");
    scanf(" %c", &operator);

    // Performing the operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf(result);
            break;
        case '-':
            result = num1 - num2;
            printf(result);
            break;
        case '*':
            result = num1 * num2;
            printf(result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf(result);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
