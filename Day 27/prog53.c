#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // maximum stars in middle row

    // Upper half
    for(i = 1; i <= n; i += 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n - 2; i >= 1; i -= 2) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
