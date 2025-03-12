#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    unsigned int result = number ^ (1 << n);
    printf("%u\n",result);

    return 0;
}
