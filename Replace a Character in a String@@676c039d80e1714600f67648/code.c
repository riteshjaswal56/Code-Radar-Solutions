#include <stdio.h>
#include <string.h>

void replaceCharacter(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar; 
        }
    }
}

int main() {
    char str[200], oldChar, newChar;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    scanf("%c", &oldChar);
    getchar(); 
    scanf("%c", &newChar);

    replaceCharacter(str, oldChar, newChar);

    printf("%s\n", str);

    return 0;
}