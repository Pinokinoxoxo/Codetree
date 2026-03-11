#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int c = a * b;
        printf("%d", c);
    } else {
        int d = b / a;
        printf("%d", d);
    }
    return 0;
}