#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - m % n; j < n; j++) {
            printf("%d ", arr[i][j]);
        }

        for (int j = 0; j < n - m % n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}