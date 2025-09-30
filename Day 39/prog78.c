#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    scanf("%d", &n); // matrix size
    int mat[n][n];

    // Read matrix
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Sum of main diagonal
    for(i = 0; i < n; i++)
        sum += mat[i][i];

    printf("Sum of main diagonal = %d", sum);
    return 0;
}
