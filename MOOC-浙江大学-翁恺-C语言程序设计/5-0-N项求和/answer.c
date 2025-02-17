#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int j = 2;
    int k = 1;
    double sum = 2/1;
    for (int i = 2; i <= n; i++) {
        int t = j;
        j = j + k;
        k = t;
        sum += 1.0 * j / k;
    }

    printf("%.2f", sum);
    return 0; 
}