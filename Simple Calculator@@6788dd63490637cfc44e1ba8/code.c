#include <stdio.h>

int main() {
    int a,b,result;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case'+':
            result = a+b;
            printf("%d",result);
            break;
        case'-':
            result = a-b;
            printf("%d",result);
            break;
        case'*':
            result = a*b;
            printf("%d",result);
            break;
                case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d",result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
    }

        
    }
    return 0;
}