#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;
    int count = 0;

    if (m == 1) {
        m == 2;
    }

    while (m <= n) {
        int i = 2;
        int flag = 1;
        while (i < m) {
            if (m % i == 0) {
                flag = 0;
                break;
            }
            i++;
        }

        if (flag) {
          count++;
          sum += m;
        }

        m++;
    }

    printf("%d %d", count, sum);
    return 0;
}