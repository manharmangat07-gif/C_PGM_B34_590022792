#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c); // input rows and columns
    int mat[r][c];

    // Read matrix elements
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Calculate sum
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum += mat[i][j];

    printf("Sum of all elements = %d", sum);
    return 0;
}
