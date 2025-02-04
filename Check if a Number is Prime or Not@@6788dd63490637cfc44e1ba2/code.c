#include <stdio.h>

int main() {
    int a,is_prime = 1;
    scanf("%d",&a);
    for (int i=2;i<=a/2;i++){
        if (a%i==0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime_){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}