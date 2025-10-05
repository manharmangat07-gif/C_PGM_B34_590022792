#include <stdio.h>

int main() {
    char str[100], newstr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);   // simple input (note: unsafe, but common in sem 1)

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
            newstr[j] = str[i];
            j++;
        }
    }
    newstr[j] = '\0';

    printf("String after removing vowels: %s", newstr);

    return 0;
}
