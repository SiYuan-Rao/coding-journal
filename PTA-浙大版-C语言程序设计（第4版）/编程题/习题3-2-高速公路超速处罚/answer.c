#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    double exceed;
    exceed = 100.0 * (m - n) / n;

    if (exceed >= 50) {
        printf("Exceed %.0f%%. License Revoked", exceed);
    } else if (exceed >= 10) {
        printf("Exceed %.0f%%. Ticket 200", exceed);
    } else {
        printf("OK");
    }

    return 0;
}