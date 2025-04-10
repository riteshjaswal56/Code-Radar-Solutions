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

    int carToll = 0, truckToll = 0, bikeToll = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);

        if (strcmp(vehicles[i].type, "Car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }

    printf("Cars: %d, Trucks: %d, Bikes: %d\n", carToll, truckToll, bikeToll);

    return 0;
}
