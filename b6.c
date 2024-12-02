#include <stdio.h>
int main() {
    int mang[] = {5, 12, 7, 5, 23, 7, 5};
    int n = sizeof(mang) / sizeof(mang[0]);
    int x, a, tim = 0;

    printf("Nhap so can tim: ");
    scanf("%d", &x);

    for (a = 0; a < n; a++) {
        if (mang[a] == x) {
            if (tim == 0) {
                printf("Phan tu %d xuat hien tai cac vi tri: ", x);
            }
            printf("%d ", a);
            tim = 1;
        }
    }

    if (tim == 0) {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
}