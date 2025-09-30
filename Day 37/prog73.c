#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c); // input rows and columns
    int mat[r][c], rowSum[r];

    // Read matrix elements
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Calculate sum of each row
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0
