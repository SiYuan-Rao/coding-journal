#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int arr1[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    int n;
    scanf("%d", &n);
    int arr2[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int index = 0;
    int result[40] = {0};
    for (int i = 0; i < m; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            result[index] = arr1[i];
            index++;
        }

    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < m; j++) {
            if (arr2[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            result[index] = arr2[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++){
        for (int j = i + 1; j < index; j++){
            if (result[i] == result[j]) {
                if (j == index - 1){
                    index--;
                } else {
                    for (int k = j; k < index; k++) {
                        result[k] = result[k + 1];
                    }
                    index--;
                }
            }
        }
    }

    for (int i = 0; i < index - 1; i++) {
        printf("%d ", result[i]);
    }

    printf("%d", result[index - 1]);

    return 0;
}