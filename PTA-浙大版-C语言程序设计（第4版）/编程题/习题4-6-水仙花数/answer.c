#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        int sum = 0;
        int t = i;
        for (int j = 0; j < n; j++) {
                sum += pow(t % 10, n);
                t = t / 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}