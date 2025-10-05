#include <stdio.h>

int main() {
    char str[100];
    int i, j, f = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                printf("First repeating lowercase alphabet is: %c", str[i]);
                f = 1;
                break;
            }
        }
        if(f == 1)
            break;
    }

    if(f == 0)
        printf("No repeating alphabet found");

    return 0;
}
