#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50]; // Corrected to store strings
    float marks;
};

int main() {
    int n, a, found = 0; // Initialize found to 0 (not found by default)

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    // Input student details
    printf("Enter student details (rollno name marks):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    // Input roll number to search
    printf("Enter the roll number to search: ");
    scanf("%d", &a);

    // Search for the student by roll number
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == a) { // Corrected search condition
            found = 1; // Set found to true
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            break; // Exit loop after finding the student
        }
    }

    // If student is not found
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
