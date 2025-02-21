#include <stdio.h>

int main()
{
    int min;
    double m;
    scanf("%lf %d", &m, &min);

    double sum = 0.0;
    if (m <= 3) {
        sum = 10 + (min / 5) * 2;
    } else if (m <= 10) {
        sum = 10 + (min / 5) * 2 + (m - 3) * 2;
    } else {
        sum = 10 + 14 + (m - 10) * 3 + (min / 5) * 2;
    }

    printf("%.0f", sum);
    return 0;
}