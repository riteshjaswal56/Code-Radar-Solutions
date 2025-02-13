#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i=a;ia-1;i--){
        for (int j=i;j<=a;j++);
            printf("* ");
        printf("\n");
    }    
}