#include <stdio.h>

int main()
{
    int fahr;
    
    scanf("%d", &fahr);

    int celsius;

    celsius = 5 * (fahr - 32) / 9;
    printf("Celsius = %d\n", celsius);
    return 0;
}
