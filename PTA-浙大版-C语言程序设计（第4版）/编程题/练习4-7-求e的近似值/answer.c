#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 1.0;

    for (int i = 1; i <= n; i++) {
        double denominator = 1;
        for (int j = 1; j <= i; j++) {
            denominator *= j;
        }
        sum += 1.0 / denominator;
    }

    printf("%.8f", sum);
    return 0;
}