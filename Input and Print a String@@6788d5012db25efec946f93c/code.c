#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%s",&a);
    printf("You entered: %s\n",a);
    return 0;
}