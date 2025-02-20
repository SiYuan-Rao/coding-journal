#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    int count = 0;

    if (n == 0) {
        printf("average = %.1f\n", 0.0);
        printf("count = %d", 0);
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        sum += j;

        if (j >= 60) {
            count++;
        }
    }

    printf("average = %.1f\n", 1.0 * sum / n);
    printf("count = %d", count);
    return 0;
}
