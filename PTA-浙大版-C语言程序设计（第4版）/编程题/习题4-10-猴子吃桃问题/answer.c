#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (n - 1 > 0) {
        i = 2 * (i + 1);
        n--;
    }

    printf("%d", i);
    return 0;
}