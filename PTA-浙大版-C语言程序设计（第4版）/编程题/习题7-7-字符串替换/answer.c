#include <stdio.h>
#include <string.h>

int main() {
    char str[81];

    for (int i = 0; i < 81; i++) {
        str[i] = getchar();

        if (str[i] == 10) {
            str[i] = '\0';
            break;
        }

        if (str[i] >= 65 && str[i] <= 90){
            str[i] = 155 - str[i];
        }
    }

    printf("%s", str);
    return 0;
}