#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b) {
        if (c < b) {
            if (a < c) {
                int t = b;
                b = c;
                c = t;
            } else {
                int t = a;
                a = c;
                int m = b;
                b = t;
                c = m;
            }
        }
    } else {
        if (a < c) {
            int t = a;
            a = b;
            b = t;
        } else {
            if (b < c) {
                int t = a;
                a = b;
                b = c;
                c = t;
            } else {
                int t = a;
                a = c;
                c = t;
            }
        }
    }

    printf("%d->%d->%d", a, b, c);
    return 0;
}
