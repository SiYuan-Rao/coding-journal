#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    double i = 1, j = 1, k = 1;
    for (int a = 1; a <= n; a++) {
        i *= a;
    }

    for (int b = 1; b <= m; b++) {
        j *= b;
    }

    for (int c = 1; c <= (n - m); c++) {
        k *= c;
    }

    printf("result = %.0f", i / (j * k));
    return 0;
}
