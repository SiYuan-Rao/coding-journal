#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == n - 1) || (j == n - 1)) {
                continue;
            }

            if ((i + j) == n - 1) {
                continue;
            }
            sum += numbers[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}