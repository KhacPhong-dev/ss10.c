#include <stdio.h>
int main() {
    int mang[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(mang) / sizeof(mang[0]);
    int i, j, temp;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
}