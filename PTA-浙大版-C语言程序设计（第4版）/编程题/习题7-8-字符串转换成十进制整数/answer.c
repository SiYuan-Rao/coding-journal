#include <stdio.h>

int main(void) {
    int flag = 0;
    int index = 0;
    int result = 0;

    char ch;
    while ((ch = getchar()) != '#') {
        if (index == 0 && ch == '-') {
            flag = 1;
        }

        if (ch >= '0' && ch <= '9') {
            result = result * 16 + (ch - '0');
            index++;
        }

        if (ch >= 'a' && ch <= 'f') {
            result = result * 16 + ((ch - 'a') + 10);
            
            index++;
        }

        if (ch >= 'A' && ch <= 'F') {
            result = result * 16 + ((ch - 'A') + 10);
            index++;
        }
    }

    if (flag == 1) {
        result = -result;
    }

    printf("%d\n", result);
    return 0;
}

