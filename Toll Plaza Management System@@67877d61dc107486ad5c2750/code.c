#include <stdio.h>
#include <string.h>

struct Vehicle {
    char number[50];
    char type[50];
    int toll;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Vehicle vehicles[n];
    int carToll , truckToll , bikeToll ;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);

        if (strcmp(vehicles[i].type, "Car") ) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") ) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") ) {
            bikeToll += vehicles[i].toll;
        }
    }

    printf("Cars: %d.00, Trucks: %d.00, Bikes: %d.00\n", carToll, truckToll, bikeToll);

    return 0;
}
