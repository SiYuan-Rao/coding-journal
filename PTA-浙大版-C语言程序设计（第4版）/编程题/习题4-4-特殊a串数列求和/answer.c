#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int k = a;
        for (int j = 0; j < i; j++) {
            k = k * 10 + a;
        }

        sum += k;
    }

    printf("s = %d", sum);
    return 0;
}