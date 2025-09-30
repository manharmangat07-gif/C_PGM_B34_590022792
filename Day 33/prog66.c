#include <stdio.h>

int main() {
    int n, i, key, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for new element

    // Input sorted array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position and shift elements
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            break;
        }
    }
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = key;
    n++;

    // Print array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
