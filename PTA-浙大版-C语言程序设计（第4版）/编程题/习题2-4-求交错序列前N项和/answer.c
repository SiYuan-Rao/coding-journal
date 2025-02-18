#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 1.0;
    double sign = -1.0;
    for (int i = 2; i <= n; i++) {
        sum += sign * i / (2 * i - 1);
        sign = -sign;
    }

    printf("%.3f", sum);
    return 0;
}
