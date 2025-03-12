#include <stdio.h>
int main(){
    int num1,count = 0;
    scanf("%d",&num1);
    while(!(num1&1)){
        num1 = num1>>1;
        count++;
    }
    printf("%d",count);
}