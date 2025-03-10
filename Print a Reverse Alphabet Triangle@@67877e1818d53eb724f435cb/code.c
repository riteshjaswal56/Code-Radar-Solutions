#include <stdio.h>
int main(){
    int a;
    char ch;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1,ch='A';j<=a-i+1;j++,ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}