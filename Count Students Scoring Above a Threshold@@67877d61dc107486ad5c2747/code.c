#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i,number,count = 0;
    scanf("%d %f", &n,&number);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks>number) {
            count++;
        }
    }

    printf("Count of students scoring above 80.00: ");

    return 0;
}