#include <stdio.h>

int main()
{
    int m ,n;
    scanf("%d %d", &m, &n);

    double sum = 0.0;
    for (; m <= n; m++) {
        sum += m * m + 1.0 / m;
    }

    printf("sum = %.6f", sum);
    return 0;
}
