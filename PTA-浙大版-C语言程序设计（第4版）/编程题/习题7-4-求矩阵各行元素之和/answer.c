#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int arr[m][n];

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}