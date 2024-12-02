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

    for (i = 0; i < n; i++) {
        for (j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (mang[i][j] > mang[i][k]) {
                    temp = mang[i][j];
                    mang[i][j] = mang[i][k];
                    mang[i][k] = temp;
                }
            }
        }
    }

    printf("\nMang sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}