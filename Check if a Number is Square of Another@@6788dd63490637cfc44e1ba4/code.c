#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a*a==b){
        printf("Yes");
    }
    else if(b*b==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}