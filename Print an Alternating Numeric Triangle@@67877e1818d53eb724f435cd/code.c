#include <stdio.h>
int main(){
    int a,i,j,num=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",num);
            num = 1-num;
        }
        printf("\n");
        if (i%2==0){
            num=1;
        }
        else{
            num=0;
        }
    }

    return 0;
}