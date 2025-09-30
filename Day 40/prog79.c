#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c); // input rows and columns
    int mat[r][c];

    // Read matrix
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Diagonal traversal (only elements where row == column)
    for(i = 0; i < r && i < c; i++)
        printf("%d ", mat[i][i]);

    return 0;
}
