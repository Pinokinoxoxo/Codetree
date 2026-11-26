#include <stdio.h>
#include <string.h>

char A[105];

int main() {
    scanf("%s", A);
    // Please write your code here.

    int n = strlen(A);
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n - 1; j++) {
            if (A[i] == '(' && A[i + 1] == '(' &&
                A[j] == ')' && A[j + 1] == ')') {
                    cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}