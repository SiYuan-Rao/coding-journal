#include <stdio.h>
#include <math.h>

int main() {
    double x, sum_e_x = 1.0, term = 1.0;
    int n = 1;

    scanf("%lf", &x);

    while (fabs(term) >= 0.00001) {
        term *= x / n;
        sum_e_x += term;
        n++;
    }

    printf("%.4f\n", sum_e_x);

    return 0;
}