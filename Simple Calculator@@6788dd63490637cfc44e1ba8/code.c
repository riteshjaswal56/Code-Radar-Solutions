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
            if (b != 0) {
                result = a / b;
                printf("%d",result);
            } else {
                printf("error\n");
            }
            break;
    }
    return 0;
}