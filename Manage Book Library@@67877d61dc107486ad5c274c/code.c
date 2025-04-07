#include <stdio.h>
struct library {
    int book;
    char author[50];
    float price;
};

int main() {
    int n, i , a;
    scanf("%d %f", &n , &a);
    printf("Book above price %f:",a);
    struct library libraries[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &libraries[i].book, &libraries[i].author, &libraries[i].price);
    }
    

    return 0;
}