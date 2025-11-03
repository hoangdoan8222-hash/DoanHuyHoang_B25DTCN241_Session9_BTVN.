#include <stdio.h>
#include <math.h>

int main() {
    int n, i, x;
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

    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);

    int found = 0;
    printf("Gia tri %d xuat hien o vi tri: ", x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d ", i);  
            found = 1;
        }
    }

    if (!found)
        printf("Khong co trong mang.");

    printf("\n");
    free(a);
    return 0;
}

