#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit ) {
    int num[10] = { 0 };

    if ( number < 0 ) {
        number = -number;
    }

    if (number == 0) {
        num[0] = 1;
    }

    while ( number > 0 ) {
        num[number % 10]++;
        number = number / 10;
    }

    return num[digit];
}