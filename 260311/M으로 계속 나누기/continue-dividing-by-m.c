#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    // Please write your code here.
    while (N > 0) {
        printf("%d\n", N);
        N = N / M;
    }
    
    return 0;
}