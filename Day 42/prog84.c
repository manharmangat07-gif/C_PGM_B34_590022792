#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);  // read string with spaces

    for(i = 0; str[i] != '\0'; i++) {
        // check if character is lowercase (a-z)
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase (ASCII trick)
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
