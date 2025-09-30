#include <stdio.h>

int main() {
    int n, i;
    int binary[32]; // to store binary digits
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary = 0");
        return 0;
    }

    while(n > 0
