#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i,count = 0;
    float threshold;
    scanf("%d",&n);
    scanf("%f",&threshold);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    for (i = 0; i < n; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }
    printf("Count of students scoring above %f: %d\n",threshold,count);
    return 0;
}