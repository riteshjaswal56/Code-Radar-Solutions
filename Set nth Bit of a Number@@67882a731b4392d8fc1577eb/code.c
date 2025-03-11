#include <stdio.h>

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);

    int result = number | (1 << n);
    printf("%d\n", n, result);

    return 0;
}

