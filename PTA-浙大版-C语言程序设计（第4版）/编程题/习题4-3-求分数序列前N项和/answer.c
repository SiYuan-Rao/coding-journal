#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    double sum = 2.0, j = 2.0, k = 1.0;

    for(int i = 2;i <= n;i++) {
        double t = j;
        j = j + k;
        k = t;
        sum += j / k;
    }

    printf("%.2lf\n",sum);
    return 0;
}
