#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if (a > c && b > d) {
        printf("1");
    } else printf("0");
    return 0;
}