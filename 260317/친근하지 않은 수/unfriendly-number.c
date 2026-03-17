#include <stdio.h>

int main() {
    // Please write your code here.
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
            continue;
        }
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}