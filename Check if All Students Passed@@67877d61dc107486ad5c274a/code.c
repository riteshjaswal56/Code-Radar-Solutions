#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i , allpassed ;
    scanf("%d", &n);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if(students[i].marks>=50){
        allpassed = 0;
        break;
        }
    }
     if (allpassed) {
            printf("All Passed");
        }
        else{
            printf("Not All Passed");
        }

    return 0;
}