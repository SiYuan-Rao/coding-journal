#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        t = t / 10;

        switch (t) {
        case 10:
        case 9:
            a++;
            break;
        case 8:
            b++;
            break;
        case 7:
            c++;
            break;
        case 6:
            d++;
            break;
        default:
            e++;
        }
    }

    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}