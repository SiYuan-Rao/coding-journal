#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;

    char ch;
    while ((ch = getchar()) != 10) {
        if (ch >= 65 && ch <= 90) {
            if (ch != 65 && ch !=69 && ch != 73 && ch != 79 && ch != 85) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}