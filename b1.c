#include <stdio.h>
int main(){
    int mang[] = {10, 20, 30, 40, 50};
    int n = sizeof(mang) / sizeof(mang[0]);
    int a, b = 0, c;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &a);
    for (c = 0; c < n; c++){
        if (mang[c] == a) {
            printf("Phan tu %d ton tai tai vi tri: %d\n", a, c);
            b = 1;
        }
    }
    if (b == 0){
        printf("Phan tu %d khong ton tai trong mang\n", a);
    }
}