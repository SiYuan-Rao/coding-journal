#include <stdio.h>

void CharPyramid( int n, char ch );

int main() {
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

void CharPyramid( int n, char ch ) {
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}