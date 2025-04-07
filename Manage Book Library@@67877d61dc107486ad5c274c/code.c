#include <stdio.h>
struct library {
    int book;
    char author[50];
    float price;
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct library libraries[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &libraries[i].book, &libraries[i].author, &libraries[i].price);
    }

    for (i = 0; i < n; i++) {
        printf("Book: %d,", libraries[i].book);
        printf("Author: %s,", libraries[i].author);
        printf("Price: %.2f \n", libraries[i].price);
    }

    return 0;
}