#include <stdio.h>
struct student{
    int rollno;
    char name;
    float marks;
};
int main(){
    int n , a ;
    scanf("%d",&n); 
    struct student students[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    scanf("%d",&a);
    int found = 0;
    for (int i=0;i<n;i++){
        if (students[i].marks == a){
            printf("Roll Number: %d,Name: %s,Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Student not found\n");
    }
}
