#include <stdio.h>

int main() {
    // Please write your code here.
    int n, ans, cnt = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        cnt = cnt + i;
        if (cnt >= n) {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}