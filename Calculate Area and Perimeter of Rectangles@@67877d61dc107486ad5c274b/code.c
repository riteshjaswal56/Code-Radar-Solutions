#include <stdio.h>

// Define the structure
struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int n;
    float area , perimeter;
    scanf("%d", &n);
    struct Rectangle rectangles[n];

    for (int i = 0; i < n; i++) {
        scanf("%f %f", &rectangles[i].length, &rectangles[i].breadth);
    }

    for (int i = 0; i < n; i++) {
        area = rectangles[i].length * rectangles[i].breadth;
        perimeter = 2 * (rectangles[i].length + rectangles[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i , area, perimeter);
    }

    return 0;
}
