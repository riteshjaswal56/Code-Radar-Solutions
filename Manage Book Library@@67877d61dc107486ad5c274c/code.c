#include <stdio.h>
struct library {
    int book;
    char author[50];
    float price;
};

int main() {
    int n,i;
    float a;
    scanf("%d %f", &n , &a);
    printf("Books above price %f:",a);
    struct library libraries[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &libraries[i].book, &libraries[i].author, &libraries[i].price);
    }
    for (i = 0; i < n; i++) {
        if (libraries[i].price > a) {
            printf("Book: %d, Author: %s, Price: %.2f\n", libraries[i].book, libraries[i].author, libraries[i].price);
        }
    }
    return 0;

}