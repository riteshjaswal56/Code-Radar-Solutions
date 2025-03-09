#include <stdio.h>
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
            printf("The result is: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result is: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The result is: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
