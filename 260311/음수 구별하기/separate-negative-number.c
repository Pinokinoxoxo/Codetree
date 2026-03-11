#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("%d\n", n);
        printf("minus");
    }
    else {
        printf("%d", n);
    }
    return 0;
}