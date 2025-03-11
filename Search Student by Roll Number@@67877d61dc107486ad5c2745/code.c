#include<stdio.h>
struct student{
    int rollno;
    char name;
    float marks;
};
int main(){
    int n , a ;
    struct student students[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    scanf("%d",&a);
    for (int i=0;i<n;i++){
        if (students[i].marks == a){
            printf("Roll Number: %d",students[i].rollno);
            printf("Name: %s",students[i].name);
            printf("Marks: %f",students[i].marks);
            break;
        }
        else if(students[i].marks != a){
        printf("Student not found");
    }
    }

}