/*

Matrix A is m × n

Matrix B is n × p

Then the result matrix C will be m × p.



for each row of A
    for each column of B
        multiply corresponding elements
        add them together
        

A (2x3)        B (3x2)

1 2 3          7  8
4 5 6          9 10
               11 12


C[0][0] = 1*7 + 2*9 + 3*11
C[0][1] = 1*8 + 2*10 + 3*12

        */


#include <stdio.h>

int main() {
    int m, n, p;
    
    // Input sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Result matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}