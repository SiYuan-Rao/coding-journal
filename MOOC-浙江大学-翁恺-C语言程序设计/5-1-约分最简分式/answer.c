#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d/%d", &m, &n);

    int j = m;
    int k = n;
    while (j % k != 0) {
        int i = j % k;
        j = k;
        k = i;
    }

    printf("%d/%d", m / k, n / k);
    return 0;
}