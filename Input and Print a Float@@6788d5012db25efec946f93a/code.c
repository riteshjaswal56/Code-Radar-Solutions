#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float c;
    printf("Enter the number");
    scanf("%f",&c);
    printf("You entered:%f\n",c);
    return 0;
}