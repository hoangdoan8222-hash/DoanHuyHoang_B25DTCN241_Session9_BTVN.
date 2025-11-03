#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Nhap n hop le (n > 0).\n");
        return 0;
    }

    int *a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    int i; 
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}


