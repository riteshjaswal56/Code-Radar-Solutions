#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("Vowel");
    }
    else if(x>='0'&&x<='9'){
        printf("Digit");
    }
    else if (x>='b'&&x<='z' ||x>='B' && x<='Z'){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
