#include <stdio.h>
int main() {
    int mang[] = {29, 10, 14, 37, 13};
    int n = sizeof(mang) / sizeof(mang[0]);
    int i, j, key;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    for (i = 1; i < n; i++) {
        key = mang[i];
        j = i - 1;

        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j--;
        }
        mang[j + 1] = key;
    }

    printf("\nMang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
}