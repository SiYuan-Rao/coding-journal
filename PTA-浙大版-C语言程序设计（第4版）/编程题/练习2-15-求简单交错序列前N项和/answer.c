#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; i++) {
        sum += 1.0 / (3 * i + 1) * sign;
        sign = -sign;
    }

    printf("sum = %.3f", sum);
    return 0;
}
