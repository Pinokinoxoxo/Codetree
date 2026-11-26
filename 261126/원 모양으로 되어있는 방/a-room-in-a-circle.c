#include <stdio.h>
#include <limits.h>

int n;
int a[1003];

int main() {

    long long min_sum = LLONG_MAX;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        long long sum = 0;

        for (int j = 0; j < n; j++) {
            int distance = (j - i + n) % n;

            sum += (long long)a[j] * distance;
        }

        if (sum < min_sum) {
            min_sum = sum;
        }
    }

    printf("%lld\n", min_sum);
    
    // Please write your code here.
    
    return 0;
}