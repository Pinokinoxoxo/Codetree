#include <stdio.h>

int main() {
    // Please write your code here.
    int year;
    scanf("%d", &year);
    if (year % 4 == 0) {
        if ((year % 100 == 0) && (year % 400 != 0)) {
            printf("false");
        } else printf("true");
    }
    else printf("false");
    return 0;
}