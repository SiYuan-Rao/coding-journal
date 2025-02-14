#include <stdio.h>

int main()
{
    int lower, upper;
    scanf("%d %d", &lower, &upper);

    if (lower > upper) {
        printf("Invalid.");
    } else if (upper > 100) {
        printf("Invalid.");
    } else {
        printf("fahr celsius\n");
        
        while (lower <= upper) {
            printf("%d%6.1f\n", lower, 5.0 * (lower - 32) / 9);
            lower += 2;
        }
    }
    
    return 0;
}
