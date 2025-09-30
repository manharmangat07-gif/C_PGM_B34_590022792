#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c); // input rows and columns
    int mat1[r][c], mat2[r][c], sum[r][c];

    // Read first matrix
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    // Read second matrix
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);
