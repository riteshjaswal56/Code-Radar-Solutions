#include <stdio.h>
struct library {
    char book[50];
    char author[50];
    float price;
};

int main() {
    int n,i;
    scanf("%d",&n); 
    struct library libraries[n];
    for (i = 0; i < n; i++) {
        scanf("%s %s %f", &libraries[i].book, &libraries[i].author, &libraries[i].price);
    }
    float a;
    scanf("%f",&a);
    printf("Books above price %.2f:\n",a);

    for (i = 0; i < n; i++) {
        if (libraries[i].price > a) {
            printf("Title: %s, Author: %s, Price: %.2f\n", libraries[i].book, libraries[i].author, libraries[i].price);
        }
    }
    return 0;

}