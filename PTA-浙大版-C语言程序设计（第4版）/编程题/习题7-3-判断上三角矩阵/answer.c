#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int flag = 1;
        int arr[n][n];

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                scanf("%d", &arr[j][k]);
            }
        }

        for (int j = 1; j < n; j++) {
            for (int k = 0; k < j; k++) {
                if (arr[j][k] != 0) {
                    flag = 0;
                }
            }
        }

        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}