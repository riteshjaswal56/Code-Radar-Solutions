#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    char grades[50];
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %s", &students[i].rollNumber, students[i].name, &students[i].grades);
    }

    for (i = 0; i < n; i++) {
        printf("Roll Number: %d,", students[i].rollNumber);
        printf(" Name: %s,", students[i].name);
        printf(" Grade: %s\n", students[i].grades);
    }

    return 0;
}
