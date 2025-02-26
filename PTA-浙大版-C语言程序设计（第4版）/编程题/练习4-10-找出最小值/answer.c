#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);

    int number[total];
    for (int i = 0; i < total; i++) {
        int n;
        scanf("%d", &n);
        number[i] = n;
    }

    int min = number[0];

    for (int i = 1; i < total; i++) {
        if (min > number[i]) {
            min = number[i];
        }
    }

    printf("min = %d", min);
    return 0;
}