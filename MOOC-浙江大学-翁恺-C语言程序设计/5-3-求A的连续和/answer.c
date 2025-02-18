#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);

    int k = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        k = k * 10 + a;
        sum += k;
    }

    printf("%d", sum);
    return 0;
}