//
// Created by dibyajyotidey on 7/9/23.
//
//wap to multiply two matrices
#include<stdio.h>
void main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, m, n, p, q;
    printf("\nThe row & column of Matrix A :");
    scanf("%d%d", &m, &n);
    printf("\nThe row & column of Matrix B :");
    scanf("%d%d", &p, &q);

    if (n == p) {
        printf("\nEnter elements of Matrix A:-\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter elements of Matrix B:-\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", &b[i][j]);
            }
        }
//Matrix Multiplication Logic
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                c[i][j] = 0;
                for (k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nMatrix A is\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("\nMatrix B is\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("\nMultiplication Matrix C is\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
    else
        printf("\nMultiplication is not possible.\n");

}