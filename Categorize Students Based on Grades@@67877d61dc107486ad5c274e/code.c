#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    char marks[50];
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %s", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        char grades[10];
        if(students[i].marks >=85 ){
            grades = 'A' ; 
        }
        else if(students[i].marks >=70 && students[i].marks <=84){
            grades = 'B';
        }
        else{
            grades = 'C';
        }
        printf("Roll Number: %d,", students[i].rollNumber);
        printf(" Name: %s,", students[i].name);
        printf(" Grade: %s\n", grades);
    }

    return 0;
}
