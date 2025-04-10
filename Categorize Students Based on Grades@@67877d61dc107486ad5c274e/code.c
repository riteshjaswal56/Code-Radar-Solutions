#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;  // Changed to float
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        char grade;  // Use a char for grade
        if (students[i].marks >= 85) {
            grade = 'A';
        } else if (students[i].marks >= 70) {
            grade = 'B';
        } else {
            grade = 'C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].rollNumber, students[i].name, grade);
    }

    return 0;
}

