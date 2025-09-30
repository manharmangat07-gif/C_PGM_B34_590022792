#include <stdio.h>

int main() {
    long long binary;
    long long n, rem, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    n = binary;

    while(n != 0) {
        rem = n % 10;
        if(rem == 0) {
            rem = 1;
        } else if(rem == 1) {
            rem = 0;
        } else {
            printf("Invalid binary number");
            return 0;
        }
        onesComplement = onesComplement + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %lld", onesComplement);

    return 0;
}
