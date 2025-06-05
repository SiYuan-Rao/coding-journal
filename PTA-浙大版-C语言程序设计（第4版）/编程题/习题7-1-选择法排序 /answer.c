#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int p = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[p]) {
                p = j;
            }
        }

        int tmp = a[i];
        a[i] = a[p];
        a[p] = tmp;
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    printf("%d", a[n - 1]);
    return 0;
}