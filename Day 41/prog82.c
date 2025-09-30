#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%[^\n]", str); // input string including spaces

    // Print each character on a new line
    for(i = 0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}
