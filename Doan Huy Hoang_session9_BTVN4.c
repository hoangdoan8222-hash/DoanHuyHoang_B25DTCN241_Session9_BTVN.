#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int tong = 0;
    for (i = 0; i < n; i++) {
        tong += a[i];
    }

    float tb = (float)tong / n;
    printf("Gia tri trung binh cua cac phan tu la: %.2f\n", tb);

    free(a);
    return 0;
}


