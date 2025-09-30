#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c); // input rows and columns
    int mat[r][c], trans[c][r];

    // Read matrix elements
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Find transpose
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    // Print transpose
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
