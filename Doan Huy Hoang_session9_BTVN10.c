#include <stdio.h>

int main() {
    int a[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int maxCount = 0;

    // T?m s? l?n xu?t hi?n l?n nh?t
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count > maxCount)
            maxCount = count;
    }

    // In ra t?t c? các ph?n t? có s? l?n xu?t hi?n = maxCount (tránh trùng, ðúng format)
    int first = 1; // ð? ki?m soát d?u ph?y
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == a[j]) count++;

        // ki?m tra xem ð? in ph?n t? này chýa
        int printedBefore = 0;
        for (int k = 0; k < i; k++)
            if (a[k] == a[i]) printedBefore = 1;

        if (count == maxCount && !printedBefore) {
            if (!first) printf(", ");
            printf("%d", a[i]);
            first = 0;
        }
    }

    return 0;
}

