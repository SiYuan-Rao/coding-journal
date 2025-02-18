#include <stdio.h>

int main()
{
    int i, j, k, l;
    scanf("%d %d %d %d", &i, &j, &k, &l);

    int sum = i + j + k + l;
    printf("Sum = %d; Average = %.1f", sum, (sum * 1.0) / 4);
    return 0;
}
