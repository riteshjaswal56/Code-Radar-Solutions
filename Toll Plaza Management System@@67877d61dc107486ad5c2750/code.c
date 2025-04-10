#include <stdio.h>
struct management{
    char number [50];
    char vehicle [50];
    int toll;
};
int main(){
    int n,i;
    scanf("%d",&n);
    struct management plaza[n];
    for (i=0 ; i<n ; i++){
        scanf("%s %s %d",&plaza[i].number,&plaza[i].vehicle,&plaza[i].toll);
    }
    for (i=0 ; i<n ; i++){
        printf("Cars: %.2f, ",plaza[i].vehicle);
    }
    return 0;
}
