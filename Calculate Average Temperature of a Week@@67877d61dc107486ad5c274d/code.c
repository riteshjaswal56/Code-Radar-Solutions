#include <stdio.h>
struct temperature{
    char day[50];
    int temperature;
};
int main(){
    int n,average = 0;
    struct temperature temp[100];
    for (int i=0;i<n;i++){
        scanf("%s %d",&temp[i].day,&temp[i].temperature);
    }
    for (int i=0;i<n;i++){
        average += temp[i].temperature;
    }
    average = average/n;
    printf("Average temperature is : %d",average);
    return 0;
    
}