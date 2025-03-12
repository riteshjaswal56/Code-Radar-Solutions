#include <stdio.h>
int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    unsigned int mask = ~(1 << n);
    unsigned int result = number & mask;

    printf("%u\n", result);

    return 0;
}
