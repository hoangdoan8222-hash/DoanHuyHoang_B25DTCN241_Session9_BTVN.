#include <stdio.h>
#include <stdlib.h>

int laNguyenTo(int n) {
    if (n <= 1) return 0;        // 0 và 1 không ph?i là s? nguyên t?
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    int i; // ?? khai báo ? ðây
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int tong = 0, coNguyenTo = 0;
    printf("\nCac so nguyen to trong mang la: ");
    for (i = 0; i < n; i++) {
        if (laNguyenTo(a[i])) {
            printf("%d ", a[i]);
            tong += a[i];
            coNguyenTo = 1;
        }
    }

    if (!coNguyenTo)
        printf("Khong co so nguyen to nao trong mang.");

    printf("\nTong cac so nguyen to = %d\n", tong);

    free(a);
    return 0;
}

