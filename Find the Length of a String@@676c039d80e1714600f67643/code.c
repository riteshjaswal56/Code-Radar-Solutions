#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str);
    printf("%d",strlen(str));
    return 0;
}