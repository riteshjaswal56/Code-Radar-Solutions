#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int vowelCount = countVowels(str);
    printf("%d\n", vowelCount);

    return 0;
}