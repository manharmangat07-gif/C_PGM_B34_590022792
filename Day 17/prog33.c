#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0, digits = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    // Calculate sum of digits^digits_count without pow()
    while(temp != 0) {
        rem = temp % 10;
        power = 1;
        for(i = 1; i <= digits; i++) {
            power = power * rem;
        }
        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == n) {
        printf("%d is an Armstrong number", n);
    } else {
        printf("%d is Not an Armstrong number", n);
    }

    return 0;
}
