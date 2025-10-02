#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character if fgets added it
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    // check palindrome
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0; // not a palindrome
            break;
        }
    }

    if(flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
