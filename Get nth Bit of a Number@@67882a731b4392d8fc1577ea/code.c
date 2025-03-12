#include <stdio.h>
int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    unsigned int nth_bit = (number >> n) & 1;

    printf("The %uth bit of %u is: %u\n", n, number, nth_bit);

    return 0;
}
