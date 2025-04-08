#include <stdio.h>
struct Employee{
    int number;
    char name[50];
    float salary;
};

int main() {
    int n, i ;
    int data ;
    scanf("%d", &n);
    struct Employee bonus[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &bonus[i].number, &bonus[i].name, &bonus[i].salary);
    } 
    for (i = 0; i < n; i++) {
        if (bonus[i].salary < 50000) {
            data = 0.1;
        }
        else{
            data = 0.02;
        }
    }
    bonus[i].salary += bonus[i].salary * data;
    
    for (i = 0; i < n; i++) {
        printf("Employee ID: %d,", bonus[i].number);
        printf(" Name: %s,", bonus[i].name);
        printf(" Bonus: %.2f \n", bonus[i].salary);
    }

    return 0;
}