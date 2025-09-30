#include <stdio.h>

int main() {
    int n, pos, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]); // input array
    
    scanf("%d", &pos); // position to delete
    
    for(i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1]; // shift elements left
    n--;
    
    for(i = 0; i < n; i++) printf("%d ", arr[i]); // print array
    return 0;
}
