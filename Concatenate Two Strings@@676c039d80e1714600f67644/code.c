#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    gets(str1);
    gets(str2);

    strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
