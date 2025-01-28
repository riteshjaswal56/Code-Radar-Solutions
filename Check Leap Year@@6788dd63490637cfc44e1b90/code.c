#include <stdio.h>

int main() {
    int a;
    scnaf("%d",&a);
    if(a%400==0 && a%4==0){
        printf("Leap Year");
    }
    else if(a%100==0){
        printf("Not a Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}