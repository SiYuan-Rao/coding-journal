#include <stdio.h>

int main()
{
    int num, n;
    scanf("%d %d", &num, &n);

    int count = 0;
    int finished = 0;

    do {
        int i;
        scanf("%d", &i);
        count++;

        if (i < 0) {
            printf("Game Over\n");
            finished = 1;
        } else if (i > num) {
            printf("Too big\n");
        } else if (i < num) {
            printf("Too small\n");
        } else {
            if (count == 1) {
                printf("Bingo!\n");
            } else if (count <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
            finished = 1;
        }

        if (count == n) {
            if ( !finished ) {
                printf("Game Over\n");
                finished = 1;
            }
        }

    } while (!finished);

    return 0;
}