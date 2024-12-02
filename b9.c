#include <stdio.h>
int main() {
    int row, col, i, j, temp;
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int mang[row][col];

    printf("Nhap gia tri phan tu cho mang 2 chieu:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mang[i][j]);
        }
    }
    if (row == col){
        for (i = 0; i < row - 1; i++) {
            for (j = i + 1; j < row; j++) {
                if (mang[i][i] > mang[j][j]) {
                    temp = mang[i][i];
                    mang[i][i] = mang[j][j];
                    mang[j][j] = temp;
                }
            }
        }
        printf("\nMang sau khi sap xep duong cheo chinh:\n");
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("%d ", mang[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Mang phai la hinh vuong de sap xep duong cheo chinh.\n");
    }
}