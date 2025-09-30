#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]); // input array
    scanf("%d", &k); // positions to rotate
    
    k = k % n; // in case k > n

    // Rotate right by k positions
    for(i = 0; i < k; i++) {
        int last = arr[n - 1], j;
        for(j = n - 1; j > 0; j--) arr[j] = arr[j - 1];
        arr[0] = last;
    }

    for(i = 0; i < n; i++) printf("%d ", arr[i]); // print array
    return 0;
}
