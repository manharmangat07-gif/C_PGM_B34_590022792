#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    scanf("%d %d", &r1, &c1); // rows and columns of first matrix
    int mat1[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &r2, &c2); // rows and columns of second matrix
    int mat2[r2][c2];
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    if(c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int product[r1][c2];
    // Initialize product matrix to 0
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            product[i][j] = 0;

    // Multiply matrices
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            for(k = 0; k < c1; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];

    // Print product
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
