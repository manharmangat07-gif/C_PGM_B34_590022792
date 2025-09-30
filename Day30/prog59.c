#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}
