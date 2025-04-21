#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int flag = 0;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int max = arr[i][0];
        int columnNum = 0;
        for (int j = 0; j < n; j++) {
            if (max <= arr[i][j]) {
                max = arr[i][j];
                columnNum = j;
            }
        }

        for (int k = 0; k < n; k++) {
            if (max > arr[k][columnNum]){
                break;
            }

            if (k == n - 1){
                flag = 1;
                printf("%d %d\n", i, columnNum);
            }

        }
    }

    if (flag == 0){
        printf("%s", "NONE");
    }
    return 0;
}