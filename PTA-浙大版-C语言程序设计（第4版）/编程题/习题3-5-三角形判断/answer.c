#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double x, y, z;
    x = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    y = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    z = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));

    double L, A;
    L = x + y + z;
    A = sqrt((0.5 * L) * (0.5 * L - x) * (0.5 * L - y) * (0.5 * L - z));
    if (x + y > z && x + z > y && y + z > x) {
        printf("L = %.2f, A = %.2f", L, A);
    } else {
        printf("Impossible");
    }
    return 0;
}