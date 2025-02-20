#include <stdio.h>

int main()
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    for (int i = 0; i < 10; i++) {
        char c;
        scanf("%c", &c);

        if (65 <= c && c <= 90) {
            letter++;
        } else if (97 <= c && c <= 122) {
            letter++;
        } else if (c == 32) {
            blank++;
        } else if (c == 10) {
            blank++;
        } else if (48 <= c && c <= 57) {
            digit++;
        } else {
            other++;
        }
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}