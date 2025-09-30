#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if sides form a valid triangle
    if(a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c) {
            printf("Equilateral");
        }
        else if(a == b || b == c || a == c) {
            printf("Isosceles");
        }
        else {
            printf("Scalene");
        }
    }
    else {
        printf("Not a valid triangle");
    }

    return 0;
}
