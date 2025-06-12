#include <stdio.h>

int main() {
    int result;
    scanf("%d", &result);

    int flag = 0;
    int operator = 0;
    for (int i = 2;; i++) {
        if (i % 2 == 0) {
            operator = getchar();

            if (operator == '=') {
                break;
            }

            if (operator > '9' || operator < '*') {
                printf("%s\n", "ERROR");
                flag = 1;
                break;
            }

            if (operator == ',' || operator == '.') {
                printf("%s\n", "ERROR");
                flag = 1;
                break;
            }
        } else {
            int num;
            scanf("%d", &num);

            if (operator == '/' && num == 0) {
                printf("%s\n", "ERROR");
                flag = 1;
                break;
            }

            if (operator == '+') {
                result = result + num;
            } else if (operator == '-') {
                result = result - num;
            } else if (operator == '*'){
                result = result * num;
            } else if (operator == '/') {
                result = result / num;
            }
        }
    }


    if (flag == 0) {
        printf("%d\n", result);
    }

    return 0;
}