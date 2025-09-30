#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are Real and Distinct: %.2f , %.2f", root1, root2);
    }
    else if(discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are Real and Equal: %.2f , %.2f", root1, root1);
    }
    else {
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are Complex: %.2f + %.2fi , %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
