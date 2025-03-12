#include <stdio.h>
int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    unsigned int nth_bit = (number >> n) & 1;

    printf("%u\n",nth_bit);

    return 0;
}
