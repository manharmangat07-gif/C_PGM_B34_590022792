#include <stdio.h>

int main() {
    int n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    pri
