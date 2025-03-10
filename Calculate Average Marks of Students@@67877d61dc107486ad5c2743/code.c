#include <stdio.h>
struct students{
    int roll no;
    char name[50];
    float marks;
}
int main(){
    int a,i,average;
    scanf("%d",&a);

    for (int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].roll no,&students[i].name,&students[i].marks);
    }
    for (int i=0;i<n;i++){
        totalmarks += students[i]marks;
    }
    average = totalmarks / n;
    printf("Average Marks: %d/n",totalmarks);
}