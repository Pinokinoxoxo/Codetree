#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    return 0;
}