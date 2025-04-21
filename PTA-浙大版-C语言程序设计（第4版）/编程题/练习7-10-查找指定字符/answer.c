#include <stdio.h>
#include <string.h>

int main() {
    char target;
    char str[81];

    scanf("%c%*c", &target);
    scanf("%[^\n]%*c", str);

    int index = -1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            index = i;
        }
    }

    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("index = %d\n", index);
    }

    return 0;
}