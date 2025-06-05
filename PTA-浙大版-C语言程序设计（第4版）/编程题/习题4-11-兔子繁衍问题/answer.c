#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 1;
    int month = 2;
    int index_first = 1;
    int index_last = 1;

    while (sum < n) {
        sum = index_first + index_last;
        index_first = index_last;
        index_last = sum;
        month++;
    }

    if (n == 1) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", month);
    }
    return 0;
}