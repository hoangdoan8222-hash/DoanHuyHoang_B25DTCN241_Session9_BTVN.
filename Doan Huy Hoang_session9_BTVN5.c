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

    int demChan = 0, demLe = 0;

    printf("\nCac so chan trong mang la: ");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            demChan++;
        }
    }

    printf("\nCac so le trong mang la: ");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            demLe++;
        }
    }

    printf("\n\nTong so chan = %d", demChan);
    printf("\nTong so le = %d\n", demLe);

    free(a);
    return 0;
}

