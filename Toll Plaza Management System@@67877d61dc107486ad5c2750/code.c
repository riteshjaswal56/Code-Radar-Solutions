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
        if (strcmp(plaza[i].vehicle, "Car") == 0) {
            carToll += plaza[i].toll;
            carCount++;
        } else if (strcmp(plaza[i].vehicle, "Truck") == 0) {
            truckToll += plaza[i].toll;
            truckCount++;
        } else if (strcmp(plaza[i].vehicle, "Bike") == 0) {
            bikeToll += plaza[i].toll;
            bikeCount++;
        }

    printf("Cars: %.2f, ",plaza[i].toll);
    printf("Trucks: %.2f, ",plaza[i].toll);
    printf("Bikes: %.2f ",plaza[i].toll);
    
    return 0;

}