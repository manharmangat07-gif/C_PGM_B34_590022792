#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c) {
        printf("%d is the Largest", a);
    }
    else if(b >= a && b >= c) {
        printf("%d is the Largest", b);
    }
    else {
        printf("%d is the Largest", c);
    }

    return 0;
}
