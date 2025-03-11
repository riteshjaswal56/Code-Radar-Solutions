#include<stdio.h>
struct student{
    int rollno;
    char name;
    float marks;
};
int main(){
    int n , a ,found = 1;
    struct student students[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    scanf("%d",&a);
    for (int i=0;i<n;i++){
        if (students[i].marks == a){
            found = 0;
            break;
        }
    if(found){
        printf("Roll Number: %d",students[i].rollno);
        printf("Name: %s",students[i].name);
        printf("Marks: %f",students[i].marks);
    }
    else{
        printf("Student not found");
    }
}

}