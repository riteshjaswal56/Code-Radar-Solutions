#include <stdio.h>
struct temperature{
    char day[50];
    int temperature;
};
int main(){
    int n;
    struct temperature temp[100];
    for (int i=0;i<n;i++){
        scanf("%s %d",&temp[i].day,&temp[i].temperature);
    }
    for (int i=0;i<n;i++){
        printf("Day: %s, Temperature: %d\n",temp[i].day,temp[i].temperature);
    }
    return 0;
    
}