#include <stdio.h>

int main() {
    int ch;
    int flag = ' ';
    while ((ch = getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z' && flag == ' ') {
            ch = ch - 32;
        }
        putchar(ch);
        flag = ch;
    }

    return 0;
}