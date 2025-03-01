#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n / 2; i++) {
        for (int j = n / 2 - i; j > 0;j--) {
            printf("  ");
        }

        for (int k = n / 2 - i; k < n / 2 + i + 1;k++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n / 2; i > 0; i--) {
        for (int j = n / 2 - i; j >= 0;j--) {
            printf("  ");
        }

        for (int k = n / 2 - i; k < n / 2 + i - 1;k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}