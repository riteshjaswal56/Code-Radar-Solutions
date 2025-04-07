#include <stdio.h>

struct library {
    char book[50];
    char author[50];
    float price;
};

int main() {
    int n, i;
    float a;

    scanf("%d %f", &n, &a);
    getchar(); // Consume newline character after scanf.

    printf("Books above price %.2f:\n", a);
    struct library libraries[n];

    for (i = 0; i < n; i++) {
        fgets(libraries[i].book, sizeof(libraries[i].book), stdin);
        fgets(libraries[i].author, sizeof(libraries[i].author), stdin);
        scanf("%f", &libraries[i].price);
        getchar(); // Consume newline character after reading price.
    }

    for (i = 0; i < n; i++) {
        if (libraries[i].price > a) {
            printf("Title: %s", libraries[i].book); // fgets includes newline character.
            printf("Author: %s", libraries[i].author);
            printf("Price: %.2f\n", libraries[i].price);
        }
    }

    return 0;
}