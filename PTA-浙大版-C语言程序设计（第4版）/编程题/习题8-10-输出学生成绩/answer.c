#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    double sum = 0.0, max, min;

    scanf("%d", &count);
    double *p = (double *)malloc(count * sizeof(double));

    for (int i = 0; i < count; i++) {
        scanf("%lf", p + i);
        sum += p[i];

        if (i == 0 ) {
            max = min = p[i];
        } else {
            if (p[i] > max) max = p[i];
            if (p[i] < min) min = p[i];
        }
    }

    printf("average = %.2f\n", sum / count);
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);
    free(p);

    return 0;
}
