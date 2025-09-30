#include <stdio.h>

int main() {
    int marks;

    printf("Enter percentage (0-100): ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100) {
        printf("Grade = A");
    }
    else if(marks >= 80 && marks <= 89) {
        printf("Grade = B");
    }
    else if(marks >= 70 && marks <= 79) {
        printf("Grade = C");
    }
    else if(marks >= 60 && marks <= 69) {
        printf("Grade = D");
    }
    else if(marks < 60 && marks >= 0) {
        printf("Grade = F");
    }
    else {
        printf("Invalid input! Please enter 0-100.");
    }

    return 0;
}



