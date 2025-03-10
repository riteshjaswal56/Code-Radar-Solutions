#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i, topIndex = 0;
    scanf("%d", &n);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Top Scorer:n");
    printf("Roll Number: %d", students[topIndex].rollNumber);
    printf("Name: %s", students[topIndex].name);
    printf("Marks: %.2f", students[topIndex].marks);

    return 0;
}
