#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void sortByRollNumber(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    struct Student students[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    sortByRollNumber(students, n);

    for (i = 0; i < n; i++) {
        printf("%.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}