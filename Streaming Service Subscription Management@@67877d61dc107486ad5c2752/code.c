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
    
    int count_basic=0 , count_standard=0 , count_premium=0 ;
    float revenue_basic=0.0 , revenue_standard=0.0 , revenue_premium=0.0 ;

    for (i=0;i<n;i++){
        scanf("%s %s %f",&service[i].name,&service[i].subscription,&service[i].revenue);

        if(strcmp(service[i].subscription,"Basic")==0){
            count_basic++;
            revenue_basic = service[i].revenue;
        }
        else if(strcmp(service[i].subscription,"Standard")==0){
            count_standard++;
            revenue_standard = service[i].revenue;
        }
        else if(strcmp(service[i].subscription,"Premium")==0){
            count_premium++;
            revenue_premium = service[i].revenue;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f;",count_basic,revenue_basic);
    printf(" Standard: %d Users, Revenue: %.2f;",count_standard,revenue_standard);
    printf(" Premium: %d Users, Revenue: %.2f",count_premium,revenue_premium);
}