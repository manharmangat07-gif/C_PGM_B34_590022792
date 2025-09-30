#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]); // input array
    
    int largest = arr[0], second = -2147483648; // smallest int
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
