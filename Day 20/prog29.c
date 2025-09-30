#include <stdio.h>

int main() {
    int n, rem, product = 1;
    int hasOdd = 0; // flag to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        if(rem % 2 != 0) {
            product = product * rem;
            hasOdd = 1;
        }
        n = n / 1
