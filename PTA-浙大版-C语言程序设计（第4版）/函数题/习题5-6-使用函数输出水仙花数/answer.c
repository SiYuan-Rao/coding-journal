#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ) {
    int length = 0;
    int result = number;

    int number_copy = number;
    while ( number_copy > 0 ) {
        number_copy = number_copy / 10;
        length++;
    }

    int sum = 0;
    for (int i = 0; i < length; i++) {
        int node = number % 10;
        for (int j = 0; j < length - 1; j++) {
            node *= (number % 10);
        }
        sum += node;
        number /= 10;
    }


    if ( sum == result ) {
        result = 1;
    } else {
        result = 0;
    }

    return result;
}

void PrintN( int m, int n ){
    for (int i = m + 1; i < n; i++) {
        if (narcissistic(i)) {
            printf("%d\n", i);
        }
    }
}