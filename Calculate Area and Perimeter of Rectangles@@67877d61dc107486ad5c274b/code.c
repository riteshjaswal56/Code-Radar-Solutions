#include <stdio.h>

// Define the structure
struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int n;
    printf("Enter the number of rectangles: ");
    scanf("%d", &n);

    struct Rectangle rects[n];

    for (int i = 0; i < n; i++) {
        scanf("%f %f", &rects[i].length, &rects[i].breadth);
    }

    for (int i = 0; i < n; i++) {
        float area = rects[i].length * rects[i].breadth;
        float perimeter = 2 * (rects[i].length + rects[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, area, perimeter);
    }

    return 0;
}
