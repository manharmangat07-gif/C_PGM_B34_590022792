#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n); // matrix size
    int mat[n][n];

    // Read matrix
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Check diagonal elements for uniqueness
    for(i = 0; i < n && flag; i++) {
        for(j = i + 1; j < n; j++) {
            if(mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}
