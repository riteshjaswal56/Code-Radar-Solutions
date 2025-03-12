#include <stdio.h>
int main(){
    int num1 ,count = 0;
    scanf("%d",&num1);
    while(!(num1 & 0x8000000000)){
        num1 = num1<<1;
        count ++;
    }
    if(count ==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}