#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    double min_price = 0, max_price = 0;
    char * min_book_name;
    char * max_book_name;
    char book_name[n][31];

    min_book_name = gets(book_name[0]);
    max_book_name = min_book_name;
    scanf("%lf", &min_price);
    max_price = min_price;
    getchar();

    for (int i = 1; i < n; i++) {
        double price;
        gets(book_name[i]);
        scanf("%lf", &price);
        getchar();

        if (price < min_price) {
            min_price = price;
            min_book_name = book_name[i];
        }

        if (price > max_price) {
            max_price = price;
            max_book_name = book_name[i];
        }
    }

    printf("%.2f, %s\n", max_price, max_book_name);
    printf("%.2f, %s\n", min_price, min_book_name);
    return 0;
}
