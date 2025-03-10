#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i, lowIndex = 0;
    scanf("%d", &n);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks < students[lowIndex].marks) {
            lowIndex = i;
        }
    }

    printf("Student with Minimum Marks: ");
    printf("Roll Number: %d", students[lowIndex].rollNumber);
    printf(", Name: %s", students[lowIndex].name);
    printf(", Marks: %.2f", students[lowIndex].marks);

    return 0;
}