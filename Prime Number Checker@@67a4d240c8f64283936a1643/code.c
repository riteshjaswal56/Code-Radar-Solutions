#include <stdio.h>
 
int is_prime(int a){
    int is_prime=1
    for (int i=2;i<a;i++){
        if (a%2==0){
            is_prime=0;
            break;
        }
    }
    return is_prime;
}

int main() {
    int a;
    scanf("%d",&a);
    if (is_prime(a)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    retrun 0;
 
}