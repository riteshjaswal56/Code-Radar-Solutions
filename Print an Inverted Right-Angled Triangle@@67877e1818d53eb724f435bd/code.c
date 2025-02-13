#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i=a;i>0;i--){
        for (int j=i;j<=a-1;j++);
            printf("* ");
        printf("\n");
    }    
}