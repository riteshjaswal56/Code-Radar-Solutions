#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    // Input two strings using fgets
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Output the concatenated string
    printf("%s\n", str1);

    return 0;
}
