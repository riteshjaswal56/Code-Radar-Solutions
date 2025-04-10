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
    if Here's an example of a C program using a structure to calculate employee bonuses based on their salary:
#include <stdio.h>

// Define a structure for Employee
struct Employee {
    char name[50];
    float salary;
    float bonus;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Calculate bonus
    if (emp.salary < 50000) {
        emp.bonus = emp.salary * 0.10;
    } else {
        emp.bonus = emp.salary * 0.05;
    }



    for (i = 0; i < n; i++) {
        printf("Employee ID: %d,", bonus[i].number);
        printf(" Name: %s,", bonus[i].name);
        printf(" Bonus: %.2f \n", bonus[i].salary);
    }

    return 0;
}