#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    int count = 0;
    for (int i = money / 5; i > 0; i--) {
        for (int j = money / 2; j > 0; j--) {
            for (int k = money; k > 0; k--) {
                int sum = 5 * i + 2 * j + k;
                if (sum == money) {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, (i + j + k));
                    count++;
                }
            }
        }
    }

    printf("count = %d", count);

    return 0;
}