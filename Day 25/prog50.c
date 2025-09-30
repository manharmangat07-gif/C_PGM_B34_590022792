#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        // print spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
