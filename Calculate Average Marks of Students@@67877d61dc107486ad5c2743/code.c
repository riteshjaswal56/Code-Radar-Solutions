#include <stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
}
int main(){
    int a,i,average;
    scanf("%d",&a);
    struct student students[a]
    for (int i=0;i<a;i++){
        scanf("%d %s %f",& students[i].roll no,& students[i].name,& students[i].marks);
    }
    for (int i=0;i<a;i++){
        totalmarks += students[i]marks;
    }
    average = totalmarks / n;
    printf("Average Marks: %d/n",totalmarks);
}