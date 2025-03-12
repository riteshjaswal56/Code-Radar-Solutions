#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    if (number == 0) {
        printf("\n");
        return 0;
    }
    unsigned int isolated_bit = number & -number;
    int position = 0;
    while (isolated_bit >>= 1) {
        position++;
    }

    printf("%d\n", position);

    return 0;
}
