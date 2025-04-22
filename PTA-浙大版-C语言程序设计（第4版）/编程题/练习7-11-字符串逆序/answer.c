#include <stdio.h>
#include <string.h>

int main() {
    char buff[100];
    fgets(buff, sizeof(buff), stdin);

    for (int i = strlen(buff) - 2; i >= 0; i--) {
        printf("%c", buff[i]);
    }

    return 0;
}