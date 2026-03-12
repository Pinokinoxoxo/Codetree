#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int a, b;

    scanf("%d %d", &a, &b);
    arr[0] = a;
    arr[1] = b;
    for (int i = 0; i < 8; i++) {
        int newarr = (arr[i] + arr[i + 1]) % 10;
        arr[i + 2] = newarr;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}