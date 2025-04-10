#include <stdio.h>
#include <string.h>
struct management{
    char name [50];
    char subscription[50];
    float revenue;
};
int main(){
    int n,i;
    scanf("%d,&n");

    struct management service[n];
    
    int count_basic , count_standard , count_premium ;
    float revenue_basic , revenue_standard , revenue_premium ;

    for (i=0;i<n;i++){
        scanf("%s %s %f",&service[i].name,&service[i].subscription,&service[i].revenue);
        if(strcmp(service[i].subscription,"basic")==0){
            count_basic++;
            revenue_basic = service[i].revenue;
        }
        else if(strcmp(service[i].subscription,"standard")==0){
            count_standard++;
            revenue_standard = service[i].revenue;
        }
        else if(strcmp(service[i].subscription,"premium")==0){
            count_premium++;
            revenue_premium = service[i].revenue;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f;",count_basic,revenue_basic);
    printf(" Standard: %d Users, Revenue: %.2f;",count_standard,revenue_standard);
    printf(" Premium: %d Users, Revenue: %.2f",count_premium,revenue_premium);
}