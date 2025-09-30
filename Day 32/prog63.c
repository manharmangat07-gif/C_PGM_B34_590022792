#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0; i < n1; i++) {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0; i < n2; i++) {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    int merged[n1 + n2];
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array: "
