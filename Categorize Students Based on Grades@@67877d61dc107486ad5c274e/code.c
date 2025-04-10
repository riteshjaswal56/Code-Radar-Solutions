#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %s", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        char grade;
        if(students[i].marks >=85 ){
            grade = 'A' ; 
        }
        else if(students[i].marks >=70 ){
            grade = 'B';
        }
        else{
            grade = 'C';
        }
        printf("Roll Number: %d,", students[i].rollNumber);
        printf(" Name: %s,", students[i].name);
        printf(" Grade: %s\n", grades);
    }

    return 0;
}
