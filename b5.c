#include <stdio.h>

int main() {
    int mang[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(mang) / sizeof(mang[0]);
    int a, b, c, x, trai, phai, giua;
    // sap xep mang tu be den lon
    for (a = 0; a < n - 1; a++) {
        for (b = a + 1; b < n; b++) {
            if (mang[a] > mang[b]) {
                c = mang[a];
                mang[a] = mang[b];
                mang[b] = c;
            }
        }
    }

    printf("Mang sau sap xep: ");
    for (a = 0; a < n; a++) {
        printf("%d ", mang[a]);
    }

    printf("\nNhap so can tim: ");
    scanf("%d", &x);
    // tim vi tri x
    trai = 0;
    phai = n - 1;
    while (trai <= phai) {
        giua = (trai + phai) / 2;
        if (mang[giua] == x) {
            printf("Vi tri: %d\n", giua);
            break;
        } else if (mang[giua] < x) {
            trai = giua + 1;
        } else {
            phai = giua - 1;
        }
    }
    printf("Khong ton tai\n");
}