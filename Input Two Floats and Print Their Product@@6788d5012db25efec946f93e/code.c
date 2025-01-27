#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num1,num2,product;
    scanf("%f %f",&num1,&num2);
    product = num1 * num2;
    printf("Product: %.2f",product);
    return 0;
}