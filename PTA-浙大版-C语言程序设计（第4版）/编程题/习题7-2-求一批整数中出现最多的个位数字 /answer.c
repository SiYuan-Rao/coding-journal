#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[10] = {0};


    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num == 0){
            arr[0]++;
            continue;
        }

        while (num > 0) {
            arr[num % 10]++;
            num = num / 10;
        }
    }

    int max = 0;
    int total = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            total = 0;
        }

        if (arr[i] == max) {
            total++;
        }
    }

    printf("%d: ", max);
    for (int i = 0; i < 10; i++) {
        if (arr[i] == max && total == 1) {
            printf("%d", i);
        }

        if (arr[i] == max && total > 1) {
            printf("%d ", i);
            total--;
        }
    }
    return 0;
}