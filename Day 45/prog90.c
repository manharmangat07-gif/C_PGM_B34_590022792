#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase → lowercase
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase → uppercase
            str[i] = str[i] - 32;
        }
    }

    printf("Toggled case string: %s", str);

    return 0;
}
