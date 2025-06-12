#include <stdio.h>

int main() {
    int hour;
    int minute;
    int second;

    int n;
    scanf("%d:%d:%d", &hour, &minute, &second);
    scanf("%d", &n);

    int total = (hour * 60 * 60 + minute * 60 + second + n) % (24 * 60 * 60);

    hour = total / (60 * 60);
    minute = total % (60 * 60) / 60;
    second = total % (60 * 60) % 60;

    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}