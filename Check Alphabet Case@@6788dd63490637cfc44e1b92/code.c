#include <ctype.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase %c",a);
    }
    else {
        printf("Lowercase %c",a);
    }
    return 0;
}