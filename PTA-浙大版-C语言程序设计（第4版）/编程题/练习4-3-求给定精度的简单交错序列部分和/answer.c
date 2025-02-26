#include <stdio.h>
#include <math.h>

int main() {
    double eps;
    scanf("%lf", &eps);

    double i = 0;
    double num;
    double sum = 0.0;
    double sign = 1.0;
    do {
        num = sign / ((3 * i) + 1);
        sum += num;
        i++;
        sign = -sign;
    } while (fabs(num) > eps);

    printf("sum = %.6f", sum);
    return 0;
}