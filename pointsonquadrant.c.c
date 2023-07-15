#include <stdio.h>

int main() {
    double x, y;

    printf("Enter the coordinates of a point (x, y): ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point is in the first quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point is in the second quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point is in the third quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point is in the fourth quadrant.\n");
    } else if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else {
        printf("The point lies on the x-axis.\n");
    }

    return 0;
}
