#include <stdio.h>

int main() {
    int a[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int maxCount = 0, most = a[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            most = a[i];
        }
    }

    printf("%d\n", most);
    return 0;
}


