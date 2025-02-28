#include <stdio.h>

int main() {
    double m;
    int n;
    scanf("%lf %d", &m, &n);

    double sum = 0.0;
    double height = 0.0;

    if (n > 0) {
        height = m;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0){
            sum += m;
        } else {
            sum += height * 2;
        }
        height /= 2;
    }

    printf("%.1f %.1f", sum, height);
    return 0;
}