#include <stdio.h>

int main() {
   
    int i, j, k, n;
    float A[20][20], c, x[10], sum = 0.0;

    // Step 1: Input the order of the matrix
    printf("\nEnter the order of the matrix: ");
    scanf("%d", &n);

    // Step 2: Input the elements of the augmented matrix row-wise
    printf("\nEnter the elements of the augmented matrix row-wise:\n\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Step 3: Forward Elimination Process
    for (i = 1; i <= n - 1; i++) {
        if (A[i][i] == 0.0) {
            printf("Mathematical Error: Division by zero!\n");
            return -1;  // Exit the program if a zero pivot is detected
        }
        for (j = i + 1; j <= n; j++) {
            c = A[j][i] / A[i][i];  // Calculate the ratio
            for (k = 1; k <= n + 1; k++) {
                A[j][k] = A[j][k] - c * A[i][k];  // Perform row operations
            }
        }
    }

    // Step 4: Back Substitution Process
    x[n] = A[n][n + 1] / A[n][n];  // Calculate the value of the last variable

    for (i = n - 1; i >= 1; i--) {
        sum = 0.0;
        for (j = i + 1; j <= n; j++) {
            sum += A[i][j] * x[j];
        }
        x[i] = (A[i][n + 1] - sum) / A[i][j];
    }

    // Step 5: Display the result
    printf("\nThe solution is:\n");
    for (i = 1; i <= n; i++) {
        printf("x%d = %0.2f\n", i, x[i]);
    }

    return 0;
}
