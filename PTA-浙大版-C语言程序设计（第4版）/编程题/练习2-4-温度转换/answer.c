#include <stdio.h>

int main()
{
    int fahr = 150;
    int celsius = 5 * (fahr - 32) / 9;
    printf("fahr = 150, celsius = %d\n", celsius);
    return 0;
}
