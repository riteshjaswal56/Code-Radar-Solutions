#include <stdio.h>
struct temperature{
    char day[50];
    int temperature;
};
int main(){
    int n;
    float average = 0;
    struct temperature temp[100];
    for (int i=0;i<n;i++){
        scanf("%s %d",&temp[i].day,&temp[i].temperature);
    }
    for (int i=0;i<n;i++){
        average += temp[i].temperature;
    }
    average = average/n;
    printf("Average temperature: %.2f",average);
    return 0;
    
}