#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[n - 1]);
    return 0;
}