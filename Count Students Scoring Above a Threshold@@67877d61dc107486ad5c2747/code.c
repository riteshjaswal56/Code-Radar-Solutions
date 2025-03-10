#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i,count = 0;
    float a;
    scanf("%d %f ", &n,&a);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        if (students[i].marks > a) {
            count++;
        }
    }

    printf("Count of students scoring above %.2f: %d\n",a,count);
    return 0;
}