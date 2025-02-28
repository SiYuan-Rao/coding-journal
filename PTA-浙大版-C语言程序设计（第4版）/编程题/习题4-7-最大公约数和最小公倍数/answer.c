#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int i = m, k = n, t;
    while (i % k != 0) {
        t = k;
        k = i % k;
        i = t;
    }

    int j = 1;
    int min = 0;
    while (1) {
        if ((m * j) % n == 0) {
            min = m * j;
            break;
        }
        j++;
    }

    printf("%d %d", k, min);
    return 0;
}