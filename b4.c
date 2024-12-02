#include <stdio.h>
int main(){
    int mang[] = {64, 25, 12, 22, 11};
    int n = sizeof(mang) / sizeof(mang[0]);
    int i, j, min_idx, temp;
    printf("Mang ban dau: ");
    for (i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
    for (i = 0; i < n - 1; i++){
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (mang[j] < mang[min_idx]) {
                min_idx = j;
            }
        }

        temp = mang[min_idx];
        mang[min_idx] = mang[i];
        mang[i] = temp;
    }

    printf("\nMang sau khi sap xep: ");
    for (i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
}