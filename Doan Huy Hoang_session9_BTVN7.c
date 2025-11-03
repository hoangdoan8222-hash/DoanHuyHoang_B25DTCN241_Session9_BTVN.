#include <stdio.h>
#include <math.h>

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

    int j = n - 1;
    i = 0;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    printf("Mang sau khi dao nguoc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}

