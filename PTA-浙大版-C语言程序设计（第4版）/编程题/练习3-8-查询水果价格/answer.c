#include <stdio.h>

int main()
{
    int count = 0;
    double apple = 3.00;
    double pear = 2.50;
    double orange = 4.10;
    double grape = 10.20;

    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");

    do {
        int n;
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        switch (n) {
            case 1:
                printf("price = %.2f\n", apple);
                break;
            case 2:
                printf("price = %.2f\n", pear);
                break;
            case 3:
                printf("price = %.2f\n", orange);
                break;
            case 4:
                printf("price = %.2f\n", grape);
                break;
            default:
                printf("price = 0.00\n");
        }
        count++;
    } while (count < 5);
    return 0;
}
