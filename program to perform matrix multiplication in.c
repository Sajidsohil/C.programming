#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows (between 1 and 100) for the first matrix: ");
    scanf("%d", &r1);

    printf("Enter the number of columns (between 1 and 100) for the first matrix: ");
    scanf("%d", &c1);

    printf("Enter the number of rows (between 1 and 100) for the second matrix: ");
    scanf("%d", &r2);

    printf("Enter the number of columns (between 1 and 100) for the second matrix: ");
    scanf("%d", &c2);

    // Check if the matrices can be multiplied
    if (c1 != r2) {
        printf("Error! The number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    int m1[r1][c1], m2[r2][c2], m3[r1][c2];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            m3[i][j] = 0;
            for (k = 0; k < c1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("The resulting matrix after multiplication is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
