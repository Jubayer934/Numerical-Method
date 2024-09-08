/*
Name       : Jubayer-Al-Mahmud
ID         : 2157cse00934
Topic Name : GJEM (Gauss-Jordan Elimination Method)
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i, j, k, n;

    /* Inputs */
    /* 1. Reading number of unknowns */
    printf("Enter number of unknowns: ");
    scanf("%d", &n);

    if (n > SIZE) {
        printf("Number of unknowns exceeds the defined SIZE.\n");
        return 1;
    }

    /* 2. Reading Augmented Matrix */
    printf("Enter coefficients of Augmented Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    /* Applying Gauss Jordan Elimination */
    for (i = 0; i < n; i++) {
        if (a[i][i] == 0.0) {
            printf("Mathematical Error!");
            return 1;
        }
        for (j = 0; j < n; j++) {
            if (i != j) {
                ratio = a[j][i] / a[i][i];
                for (k = 0; k < n + 1; k++) {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    /* Obtaining Solution */
    for (i = 0; i < n; i++) {
        x[i] = a[i][n] / a[i][i];
    }

    /* Displaying Solution */
    printf("\nSolution:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %0.3f\n", i, x[i]);
    }

    return 0;
}
