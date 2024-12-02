#include <stdio.h>
int main() {
    int n, m, i, j, temp;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int mang[n][m];
    printf("Nhap gia tri phan tu cho mang 2 chieu:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mang[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (mang[i][j] > mang[k][j]) {
                    temp = mang[i][j];
                    mang[i][j] = mang[k][j];
                    mang[k][j] = temp;
                }
            }
        }
    }
    printf("\nMang sau khi sap xep theo tung cot:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}