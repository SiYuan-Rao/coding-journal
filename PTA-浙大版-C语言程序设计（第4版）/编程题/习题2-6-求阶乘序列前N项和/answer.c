#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int k = 1;
        for (int j = 1; j <= i; j++) {
            k *= j;
        }
        sum += k;
    }

    printf("%d", sum);
    return 0;
}
