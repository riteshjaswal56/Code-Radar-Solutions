#include <stdio.h>

int main() {
    float a;
    const float b = 3.14;
    scanf("%f",&a);
    printf("Area: %.2f",b*a*a);
    return 0;
}