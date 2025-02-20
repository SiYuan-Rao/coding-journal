#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    int count = 0;
    if (year < 2001 || year > 2100) {
        printf("Invalid year!");
    } else {
        for (int i = 2001; i <= year; i++) {
            if (i % 400 == 0) {
                printf("%d\n", i);
                count++;
            }

            if (i % 4 == 0 && i % 100 != 0) {
                printf("%d\n", i);
                count++;
            }
        }

        if (count == 0) {
            printf("None");
        }
    }
    return 0;
}
