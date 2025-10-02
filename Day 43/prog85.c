#include <stdio.h>
#include <string.h>  // only for string length

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    // remove newline character if fgets adds it
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    // reverse logic
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';  // null terminate

    printf("Reversed string: %s\n", rev);

    return 0;
}
