#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int index = 0;
    int max;
    scanf("%d", &max);
    for (int i = 1; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        if (max < tmp) {
            max = tmp;
            index = i;
        }
    }

    printf("%d %d\n", max, index);
}