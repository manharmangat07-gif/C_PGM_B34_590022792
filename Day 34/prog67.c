#include <stdio.h>

int main() {
    int n, pos, key, i;
    scanf("%d", &n);
    int arr[n + 1];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);  // input array
    
    scanf("%d %d", &pos, &key);  // input position and element
    
    for(i = n; i >= pos; i--) arr[i] = arr[i - 1]; // shift elements
    arr[pos - 1] = key;  // insert element
    n++;
    
    for(i = 0; i < n; i++) printf("%d ", arr[i]);  // print array
    return 0;
}
