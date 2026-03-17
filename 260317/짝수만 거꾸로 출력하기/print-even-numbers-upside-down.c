#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int num[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d ", &num[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
        
    }

    return 0;
}