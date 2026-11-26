#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_N 100

int n;
int a[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long max_sum = LLONG_MIN;
    
    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int max_diff = 0;
            if(abs(i - j) >= 2) {
                max_diff = a[i] + a[j];
            }

            if (max_diff >= max_sum) {
                max_sum = max_diff;
            }
        }
    }

    printf("%d", max_sum);
    
    return 0;
}