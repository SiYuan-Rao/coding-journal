#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        int ch = getchar();
        if (ch == '\n') {
            break;
        }

        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + 1) % 26 + 65;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + 1) % 26 + 97;
        }

        putchar(ch);
    }
    return 0;
}