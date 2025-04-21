#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);

    int sum = 0;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 12};

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        days[2] = 29;
    }

    for (int i = 0; i < month; i++){
        sum += days[i];
    }

    sum += day;

    printf("%d\n", sum);
    return 0;
}