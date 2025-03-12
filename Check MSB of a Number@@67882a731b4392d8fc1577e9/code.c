#include <stdio.h>
int main(){
    int num1 ;
    scanf("%d",&num1);
    while(!(num1 & 0x8000000000)){
        num1 = num1<<1;
    }
    if(num1 & 0x8000000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}