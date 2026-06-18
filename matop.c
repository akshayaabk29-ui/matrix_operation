#include <stdio.h>

int main() {
    int choice, i, j, k;
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    printf("===== MATRIX OPERATIONS =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: // Addition
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter Matrix A:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &A[i][j]);

            printf("Enter Matrix B:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &B[i][j]);

            printf("\nResult Matrix:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c1; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 2: // Subtraction
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter Matrix A:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &A[i][j]);

            printf("Enter Matrix B:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &B[i][j]);

            printf("\nResult Matrix:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c1; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 3: // Multiplication
            printf("Enter rows and columns of Matrix A: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns of Matrix B: ");
            scanf("%d %d", &r2, &c2);

            if(c1 != r2) {
                printf("Matrix multiplication not possible.\n");
                return 0;
            }

            printf("Enter Matrix A:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &A[i][j]);

            printf("Enter Matrix B:\n");
            for(i = 0; i < r2; i++)
                for(j = 0; j < c2; j++)
                    scanf("%d", &B[i][j]);

            for(i = 0; i < r1; i++) {
                for(j = 0; j < c2; j++) {
                    C[i][j] = 0;
                    for(k = 0; k < c1; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            printf("\nResult Matrix:\n");
            for(i = 0; i < r1; i++) {
                for(j = 0; j < c2; j++) {
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
            break;

        case 4: // Transpose
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter Matrix:\n");
            for(i = 0; i < r1; i++)
                for(j = 0; j < c1; j++)
                    scanf("%d", &A[i][j]);

            printf("\nTranspose Matrix:\n");
            for(i = 0; i < c1; i++) {
                for(j = 0; j < r1; j++) {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
